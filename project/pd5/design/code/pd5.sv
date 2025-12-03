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

  // ----- Stall logic -----
  // Signals for load use stall and writeback-decode stall
  logic load_use, wb_d_haz;

  // Conditional assigment of load-use signal 
  assign load_use = `D_X[`MEMREN] &&
    (d_x_rd != 5'd0) &&
    ((d_x_rd == d_rs1) ||
    (d_x_rd == d_rs2)) && (d_opcode != `S_TYPE);

  // Conditional assignment of writeback-decode stall
  assign wb_d_haz = `M_W[`REGWREN] &&
    (m_w_rd != 5'd0) &&
    ((m_w_rd == d_rs1) ||
    (m_w_rd == d_rs2));

  // Hazard detection controls for stalls
  logic hazard; 
  assign hazard = load_use | wb_d_haz;
  logic stall, flush;
  logic jump_branch;
  assign jump_branch = (`D_X[`PCSEL] | e_brtaken);
  
  stall_flush_logic stall_flush (
    .hazard_i(hazard),
    .brtaken_i(jump_branch),
    .pc_en_o(pc_en),
    .stall_o(stall),
    .flush_o(flush)
  );

  // Bypassing Logic
  logic mx_bypass_rs1, mx_bypass_rs2;
  logic wx_bypass_rs1, wx_bypass_rs2;
  logic wm_bypass;

  assign mx_bypass_rs1 = (x_m_rd != 5'd0) && (x_m_rd == d_x_rs1);
  assign mx_bypass_rs2 = (x_m_rd != 5'd0) && (x_m_rd == d_x_rs2);
    
  assign wx_bypass_rs1 = (m_w_rd != 5'd0) && (m_w_rd == d_x_rs1);
  assign wx_bypass_rs2 = (m_w_rd != 5'd0) && (m_w_rd == d_x_rs2);

  assign wm_bypass = (`M_W[`REGWREN] && `X_M[`MEMWREN]) && (m_w_rd != 5'd0) && (m_w_rd == x_m_rs2);

  // Pipeline sequence
  // Fetch-Decode registers
  logic [AWIDTH-1:0] f_d_pc;
  logic [DWIDTH-1:0] f_d_insn;
  // Decode-Execute registers
  logic [AWIDTH-1:0] d_x_pc;
  logic [DWIDTH-1:0] d_x_insn;
  logic [6:0] d_x_opcode;
  logic [4:0] d_x_rd;
  logic [4:0] d_x_rs1;
  logic [4:0] d_x_rs2;
  logic [6:0] d_x_funct7;
  logic [2:0] d_x_funct3;
  logic [DWIDTH-1:0] d_x_imm;
  logic [DWIDTH-1:0] d_x_rs1data;
  logic [DWIDTH-1:0] d_x_rs2data;

  // `X_M[`PCSEL] handles jumps, and e_brtaken handles branch taken instructions
  assign f_pc = (`X_M[`PCSEL] || x_m_brtaken) ? x_m_res : pc;

  always_ff @(posedge clk) begin
    if (reset) begin
      f_d_pc <= '0;
      f_d_insn <= '0;
    end
    else if (flush) begin
      f_d_insn <= `NOP;
    end
    else if (!stall) begin
      f_d_pc <= f_pc;
      f_d_insn <= f_insn;
    end
  end

  always_ff @(posedge clk) begin
    if (reset) begin
      d_x_pc <= '0;
      d_x_insn <= '0;
      d_x_opcode <= '0;
      d_x_rd <= '0;
      d_x_rs1 <= '0;
      d_x_rs2 <= '0;
      d_x_funct7 <= '0;
      d_x_funct3 <= '0;
      d_x_imm <= '0;
      d_x_rs1data <= '0;
      d_x_rs2data <= '0;
    end
    else if (flush) begin
      d_x_pc <= d_pc;
      d_x_insn <= d_insn;
      d_x_opcode <= 7'h13;
      d_x_rd <= '0;
      d_x_rs1 <= '0;
      d_x_rs2 <= '0;
      d_x_funct7 <= '0;
      d_x_funct3 <= '0;
      d_x_imm <= '0;
      d_x_rs1data <= '0;
      d_x_rs2data <= '0;
    end
    else if (stall) begin
      d_x_insn <= `NOP;
    end
    else begin    
      d_x_pc <= d_pc;
      d_x_insn <= d_insn;
      d_x_opcode <= d_opcode;
      d_x_rd <= d_rd;
      d_x_rs1 <= d_rs1;
      d_x_rs2 <= d_rs2;
      d_x_funct7 <= d_funct7;
      d_x_funct3 <= d_funct3;
      d_x_imm <= d_imm;
      d_x_rs1data <= r_rs1data;
      d_x_rs2data <= r_rs2data;
    end
  end

      // execute pipeline registers
    logic [AWIDTH-1:0] x_m_pc;
    logic [6:0] x_m_opcode;
    logic [2:0] x_m_funct3;
    logic [DWIDTH-1:0] x_m_imm;
    logic [DWIDTH-1:0] x_m_res;
    logic [DWIDTH-1:0] x_m_rs2data;
    logic [4:0] x_m_rd;
    logic x_m_brtaken;
    logic [4:0] x_m_rs2;
    
  always_ff @(posedge clk) begin
    if (reset) begin
      x_m_pc <= '0;
      x_m_opcode <= '0;
      x_m_funct3 <= '0;
      x_m_imm <= '0;
      x_m_res <= '0;
      x_m_rs2data <= '0;
      x_m_rd <= '0;
      x_m_brtaken <= '0;
      x_m_rs2 <= '0;
    end
    else begin
      x_m_pc <= d_x_pc;
      x_m_opcode <= d_x_opcode;
      x_m_funct3 <= d_x_funct3;
      x_m_imm <= d_x_imm;
      x_m_res <= e_res;
      x_m_rs2data <= d_x_rs2data;
      x_m_rd <= d_x_rd;
      x_m_brtaken <= e_brtaken;
      x_m_rs2 <= d_x_rs2;
    end
  end

    // memory pipeline registers
    logic [AWIDTH-1:0] m_w_pc;
    logic [DWIDTH-1:0] m_w_res, m_w_data, m_w_imm;
    logic [4:0] m_w_rd;

    always_ff @(posedge clk) begin
      if (reset) begin
        m_w_pc <= '0;
        m_w_res <= '0;
        m_w_data <= '0;
        m_w_imm <= '0;
        m_w_rd <= '0;
      end
      else begin
        m_w_pc <= x_m_pc;
        m_w_res <= x_m_res;
        m_w_data <= m_data_o;
        m_w_imm <= x_m_imm;
        m_w_rd <= x_m_rd;
      end
    end

    // ---------- FETCH STAGE ----------- //
    // fetch signals
    logic [AWIDTH-1:0] f_pc, pc; 
    logic [DWIDTH-1:0] f_insn;
    logic pc_en;
    // fetch instantiation
    fetch #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASEADDR(32'h01000000)
    ) fetch1 (
        .clk(clk),
        .rst(reset),
        .next_pc_i(f_pc),
        .pc_en_i(pc_en),
        .pc_o(pc),            
        .insn_o()         
    );
    // ---------------------------------- //

    // ---------- DECODE STAGE ---------- //
    // decode signals
    logic [6:0] d_opcode;
    logic [4:0] d_rd;
    logic [4:0] d_rs1;
    logic [4:0] d_rs2;
    logic [6:0] d_funct7;
    logic [2:0] d_funct3;
    logic [4:0] d_shamt;
    logic [DWIDTH-1:0] d_imm;
    logic [DWIDTH-1:0] d_insn;
    logic [AWIDTH-1:0] d_pc;

    assign d_insn = f_d_insn;
    assign d_pc = f_d_pc;
    // decode instantiation
    decode #(
        .AWIDTH(32),
        .DWIDTH(32)
    ) decode1 (
        .clk(clk),
        .rst(reset),
        .insn_i(d_insn),
        .pc_i(d_pc),
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
        .insn_i(d_insn),
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
      .rd_i(m_w_rd),
      .datawb_i(wb_data),
      .regwren_i(`M_W[`REGWREN]),
      .rs1data_o(r_rs1data),
      .rs2data_o(r_rs2data)
    );
    // ---------------------------------- //

    // ---------- CONTROL --------------- //
    // control signals
    wire c_pcsel;
    wire c_immsel;
    wire c_regwren;
    wire c_rs1sel;
    wire c_rs2sel;
    wire c_memren;
    wire c_memwren;
    wire [1:0] c_wbsel;
    wire [3:0] c_alusel;
    // control instantiation
    control #(
        .DWIDTH(32)
    ) control1 (
        .insn_i(d_insn),
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
      if (reset) begin
        `D_X <= '0;
        `X_M <= '0;
        `M_W <= '0;
      end
      else if (stall) begin
        `D_X <= '0;
        `X_M <= `D_X;
        `M_W <= `X_M;
      end
      else begin
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
    end
    // ---------------------------------- //

    // ---------- EXECUTE STAGE --------- //
    // execute signals
    logic [DWIDTH - 1:0] e_rs1, e_rs2, e_res;
    logic e_brtaken;
    // mux for execute input data
    assign e_rs1 = (mx_bypass_rs1) ? x_m_res :
        (wx_bypass_rs1) ? wb_data : 
        (`D_X[`RS1SEL]) ? d_x_rs1data : d_x_pc;
    assign e_rs2 = (mx_bypass_rs2) ? x_m_res :
        (wx_bypass_rs2) ? wb_data : 
        (`D_X[`RS2SEL]) ? d_x_rs2data : d_x_imm;

    // Execute instantiation
    alu #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) e_alu1 (
      .pc_i(d_x_pc),
      .rs1_i(e_rs1),
      .rs2_i(e_rs2),
      .funct3_i(d_x_funct3),
      .funct7_i(d_x_funct7),
      .opcode_i(d_x_opcode),
      .imm_i(d_x_imm),
      .alusel_i(`D_X[`ALUSEL]),
      .res_o(e_res),
      .brtaken_o(e_brtaken)
    );
    // ---------------------------------- //

    // ---------- MEMORY STAGE ---------- //
    logic [DWIDTH-1:0] m_data_o;
    logic insn_en;
    logic [1:0] m_size_encoded;

    logic [2:0] m_funct3;
    // For all NON-memory access instructions, change funct3 so that it loads a word
    assign m_funct3 = (x_m_opcode !== `S_TYPE || x_m_opcode !== `I_TYPE_L) ? 3'd2 : x_m_funct3;
    // Use the right most 2-bits for size_encode otherwise use the 2-bit of funct3 of the actual instruction   
    assign m_size_encoded = (x_m_opcode == `S_TYPE || x_m_opcode == `I_TYPE_L) ? m_funct3[1:0] : x_m_funct3[1:0];

    // Read instruction from memory only if no reset.
    assign insn_en = 1'b1;
    logic [AWIDTH-1:0] addr_data;
    assign addr_data = (wm_bypass) ? wb_data : x_m_res;

    // Memory instantiation
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
        ) memory1 (
        .clk(clk),
        .rst(reset),
        .pc_i(f_pc),
        .data_i(x_m_rs2data),
        .addr_i(addr_data),
        .funct3_i(m_funct3),
        .memren_i(`X_M[`MEMREN]),
        .memwren_i(`X_M[`MEMWREN]),
        .insn_en_i(insn_en),
        .insn_o(f_insn),
        .data_o(m_data_o)
    );
    // ---------------------------------- //

    // ---------- WRITEBACK STAGE ------- //
    // write back signals
    logic [DWIDTH-1:0] wb_data;
    // write back instantiation
    writeback #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) wb_wb1 (
      .pc_i(m_w_pc),
      .alu_res_i(m_w_res),
      .memory_data_i(m_w_data),
      .wbsel_i(`M_W[`WBSEL]),
      .imm_i(m_w_imm),
      .writeback_data_o(wb_data)
    );
    // ---------------------------------- //

    // program termination logic

reg is_program = 0;
always_ff @(negedge clk) begin
    if (f_insn == 32'h00000073) $finish;  // directly terminate if see ecall
    if (f_insn == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file1.x[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end

endmodule : pd5
