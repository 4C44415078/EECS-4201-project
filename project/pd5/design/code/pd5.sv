/*
 * Module: pd5
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */
`include "constants.svh"

module pd5 #(
  parameter int AWIDTH = 32,
  parameter int DWIDTH = 32
)(
  input logic clk,
  input logic reset
);

// Recreated this file mostly from scratch for this PD.
// To better keep track of the signals from each stage.

    // ---------- CONTROL --------------- //
    // ---------------------------------- //
    // control signals
    logic c_pcsel;
    logic c_immsel;
    logic c_regwren;
    logic c_rs1sel;
    logic c_rs2sel;
    logic c_memren;
    logic c_memwren;
    logic [1:0] c_wbsel;
    logic [3:0] c_alusel;

    // control instantiation
    control #(
        .DWIDTH(32)
    ) control1 (
        .insn_i(f_reg_insn),
        .opcode_i(d_opcode),
        .funct7_i(d_funct7),
        .funct3_i(d_funct3),
        .pcsel_o(c_pcsel),       
        .immsel_o(c_immsel),
        .regwren_o(c_regwren),
        .rs1sel_o(c_rs1sel),
        .rs2sel_o(c_rs2sel),
        .memren_o(c_memren),
        .memwren_o(c_memwren),
        .wbsel_o(c_wbsel),
        .alusel_o(c_alusel)
    );

    // control pipeline registers
    logic [12:0] ctrl_reg [2:0];
    always_ff @(posedge clk) begin
      `D_X <= {
        c_alusel,
        c_wbsel,
        c_memwren,
        c_memren,
        c_rs2sel,
        c_rs1sel,
        c_regwren,
        c_immsel,
        c_pcsel
      };
      `X_M <= `D_X;
      `M_W <= `X_M;
    end

    // ---------------------------------- //
    // ---------- CONTROL END ----------- //


    // ---------- FETCH STAGE ----------- //
    // ---------------------------------- //
    // fetch signals
    logic [AWIDTH-1:0] f_pc, pc; 
    logic [DWIDTH-1:0] f_insn;
    // fetch instantiation
    fetch #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASEADDR(32'h01000000)
    ) fetch1 (
        .clk(clk),
        .rst(reset),
        .pc_o(pc),            
        .insn_o()         
    );

    assign f_pc = (`X_M[`PCSEL] || e_brtaken) ? e_res : pc;

    // fetch pipeline registers
    logic [AWIDTH-1:0] f_reg_pc;
    logic [DWIDTH-1:0] f_reg_insn;

    always_ff @(posedge clk) begin
      if (reset) begin
        f_reg_pc <= '0;
        f_reg_insn <= '0;
      end
      else begin
        f_reg_pc <= f_pc;
        f_reg_insn <= f_insn;
      end
    end

    // ---------------------------------- //
    // ---------- FETCH END ------------- //


    // ---------- DECODE STAGE ---------- //
    // ---------------------------------- //
    // decode signals
    logic [6:0] d_opcode;
    logic [4:0] d_rd;
    logic [4:0] d_rs1;
    logic [4:0] d_rs2;
    logic [6:0] d_funct7;
    logic [2:0] d_funct3;
    logic [4:0] d_shamt;
    logic [DWIDTH-1:0] d_imm;
    // logic [AWIDTH-1:0] d_pc;

    // decode instantiation
    decode #(
        .AWIDTH(32),
        .DWIDTH(32)
    ) decode1 (
        .clk(clk),
        .rst(reset),
        .insn_i(f_reg_insn),
        .pc_i(f_reg_pc),
        .pc_o(),            
        .insn_o(),         
        .opcode_o(d_opcode),         
        .rd_o(d_rd),         
        .rs1_o(d_rs1),         
        .rs2_o(d_rs2),         
        .funct7_o(d_funct7),         
        .funct3_o(d_funct3),         
        .shamt_o(d_shamt),         
        .imm_o(d_imm)          
    );

    // immediate generator signals
    logic [DWIDTH - 1:0] igen_imm;
    assign d_imm = igen_imm;
    assign d_shamt = igen_imm[4:0];

    // immediate generator instantiation
    igen #(
        .DWIDTH(32)
    ) igen1 (
        .opcode_i(d_opcode),
        .insn_i(f_reg_insn),
        .imm_o(igen_imm)
    );

    // register file signals
    logic [DWIDTH - 1:0] r_rs1data, r_rs2data;

    // Register file instantiation
    register_file #(
      .DWIDTH(DWIDTH)
    ) register_file1 (
      .clk(clk),
      .rst(reset),
      .rs1_i(d_rs1),
      .rs2_i(d_rs2),
      .rd_i(wb_reg_rd),
      .datawb_i(wb_reg_data),
      .regwren_i(`M_W[`REGWREN]),
      .rs1data_o(r_rs1data),
      .rs2data_o(r_rs2data)
    );

    // decode pipeline registers
    logic [DWIDTH-1:0] d_reg_insn;
    logic [6:0] d_reg_opcode;
    logic [4:0] d_reg_rd;
    logic [4:0] d_reg_rs1;
    logic [4:0] d_reg_rs2;
    logic [6:0] d_reg_funct7;
    logic [2:0] d_reg_funct3;
    logic [DWIDTH-1:0] d_reg_imm;
    logic [AWIDTH-1:0] d_reg_pc;
    logic [DWIDTH-1:0] d_reg_rs1data;
    logic [DWIDTH-1:0] d_reg_rs2data;

    always_ff @(posedge clk) begin
        d_reg_insn <= f_reg_insn;
        d_reg_opcode <= d_opcode;
        d_reg_rd <= d_rd;
        d_reg_rs1 <= d_rs1;
        d_reg_rs2 <= d_rs2;
        d_reg_funct7 <= d_funct7;
        d_reg_funct3 <= d_funct3;
        d_reg_imm <= d_imm;
        d_reg_pc <= f_reg_pc;
        d_reg_rs1data <= r_rs1data;
        d_reg_rs2data <= r_rs2data;
    end

    // ---------------------------------- //
    // ---------- DECODE END ------------ //


    // ---------- EXECUTE STAGE --------- //
    // ---------------------------------- //
    // execute signals
    logic [DWIDTH - 1:0] e_rs1, e_rs2, e_res;
    logic e_brtaken;

    // mux for execute input data
    assign e_rs1 = (`D_X[`RS1SEL] == 1'b1) ? d_reg_rs1data : d_reg_pc;
    assign e_rs2 = (`D_X[`RS2SEL] == 1'b1) ? d_reg_rs2data : d_reg_imm;


    // Execute instantiation
    alu #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) e_alu1 (
      .pc_i(d_reg_pc),
      .rs1_i(e_rs1),
      .rs2_i(e_rs2),
      .funct3_i(d_reg_funct3),
      .funct7_i(d_reg_funct7),
      .opcode_i(d_reg_opcode),
      .imm_i(d_reg_imm),
      .alusel_i(`D_X[`ALUSEL]),
      .res_o(e_res),
      .brtaken_o(e_brtaken)
    );

    // execute pipeline registers
    logic [AWIDTH-1:0] e_reg_pc;
    logic [6:0] e_reg_opcode;
    logic [2:0] e_reg_funct3;
    logic [DWIDTH-1:0] e_reg_imm;
    logic [DWIDTH-1:0] e_reg_res;
    logic [DWIDTH-1:0] e_reg_rs2data;
    logic [4:0]e_reg_rd;
    logic e_reg_brtaken;
    
    always_ff @(posedge clk) begin
      if (reset) begin
        e_reg_pc <= '0;
        e_reg_opcode <= '0;
        e_reg_funct3 <= '0;
        e_reg_imm <= '0;
        e_reg_res <= '0;
        e_reg_rs2data <= '0;
        e_reg_rd <= '0;
        e_reg_brtaken <= '0;
      end
      else begin
        e_reg_pc <= d_reg_pc;
        e_reg_opcode <= d_reg_opcode;
        e_reg_funct3 <= d_reg_funct3;
        e_reg_imm <= d_reg_imm;
        e_reg_res <= e_res;
        e_reg_rs2data <= d_reg_rs2data;
        e_reg_rd <= d_reg_rd;
        e_reg_brtaken <= e_brtaken;
      end
    end
    // ---------------------------------- //
    // ---------- EXECUTE END ----------- //



    // ---------- MEMORY STAGE ---------- //
    // ---------------------------------- //
    logic [DWIDTH-1:0] m_data_o;
    logic insn_en;
    logic [1:0] m_size_encoded;

    logic [2:0] m_funct3;
    // For all NON-memory access instructions, change funct3 so that it loads a word
    assign m_funct3 = (e_reg_opcode !== `S_TYPE || e_reg_opcode !== `I_TYPE_L) ? 3'd2 : e_reg_funct3;
    // Use the right most 2-bits for size_encode otherwise use the 2-bit of funct3 of the actual instruction   
    assign m_size_encoded = (e_reg_opcode == `S_TYPE || e_reg_opcode == `I_TYPE_L) ? m_funct3[1:0] : e_reg_funct3[1:0];

    // Read instruction from memory only if no reset.

    assign insn_en = 1'b1;

    // Memory instantiation
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
        ) memory1 (
        .clk(clk),
        .rst(reset),
        .pc_i(f_pc),
        .data_i(e_reg_rs2data),
        .addr_i(e_reg_res),
        .funct3_i(m_funct3),
        .memren_i(`X_M[`MEMREN]),
        .memwren_i(`X_M[`MEMWREN]),
        .insn_en_i(insn_en),
        .insn_o(f_insn),
        .data_o(m_data_o)
    );

    // memory pipeline registers
    logic [AWIDTH-1:0] m_reg_pc;
    logic [DWIDTH-1:0] m_reg_res, m_reg_data, m_reg_imm;
    logic [4:0] m_reg_rd;

    always_ff @(posedge clk) begin
      if (reset) begin
        m_reg_pc <= '0;
        m_reg_res <= '0;
        m_reg_data <= '0;
        m_reg_imm <= '0;
        m_reg_rd <= '0;
      end
      else begin
        m_reg_pc <= e_reg_pc;
        m_reg_res <= e_reg_res;
        m_reg_data <= m_data_o;
        m_reg_imm <= e_reg_imm;
        m_reg_rd <= e_reg_rd;
      end
    end

    // ---------------------------------- //
    // ---------- MEMORY END ------------ //
    

    // ---------- WRITEBACK STAGE ------- //

    // write back signals
    logic [DWIDTH-1:0] wb_data;

    // write back instantiation
    writeback #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) wb_wb1 (
      .pc_i(m_reg_pc),
      .alu_res_i(m_reg_res),
      .memory_data_i(m_reg_data),
      .wbsel_i(`M_W[`WBSEL]),
      .imm_i(m_reg_imm),
      .writeback_data_o(wb_data)
    );

    // writeback pipeline registers
    logic [DWIDTH-1:0] wb_reg_data;
    logic [4:0] wb_reg_rd;

    // always_ff @(posedge clk) begin
    //   if (reset) begin
    //     wb_reg_data <= 32'd0;
    //     wb_reg_rd <= 5'd0;
    //   end
    //   else begin
    //     wb_reg_data <= wb_data;
    //     wb_reg_rd <= e_reg_rd;
    //   end
    // end
    always_ff @(posedge clk) begin
      wb_reg_data <= wb_data;
      wb_reg_rd <= m_reg_rd;
    end
    // ---------------------------------- //
    // ----------- WRITEBACK END -------- //

    // program termination logic

reg is_program = 0;
always_ff @(negedge clk) begin
    if (f_insn == 32'h00000073) $finish;  // directly terminate if see ecall
    if (f_insn == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file1.x[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end


endmodule : pd5
