/*
 * Module: pd4
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */
`include "constants.svh"

module pd4 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

// Recreated this file mostly from scratch for this PD.
// To better keep track of the signals from each stage.

    // ---------- CONTROL --------------- //
    // ---------------------------------- //
    // control signals
    logic [DWIDTH-1:0] c_insn;
    logic [6:0] c_opcode, c_funct7;
    logic [2:0] c_funct3;
    logic c_pcsel;
    logic c_immsel;
    logic c_regwren;
    logic c_rs1sel;
    logic c_rs2sel;
    logic c_memren;
    logic c_memwren;
    logic [1:0] c_wbsel;
    logic [3:0] c_alusel;

    assign c_insn = d_insn_o;
    assign c_opcode = d_opcode;
    assign c_funct3 = d_funct3;
    assign c_funct7 = d_funct7;

    // control instantiation
    control #(
        .DWIDTH(32)
    ) control1 (
        .insn_i(c_insn),
        .opcode_i(c_opcode),
        .funct7_i(c_funct7),
        .funct3_i(c_funct3),
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
    // ---------------------------------- //
    // ---------- CONTROL END ----------- //


    // ---------- FETCH STAGE ----------- //
    // ---------------------------------- //
    // fetch signals
    logic [DWIDTH-1:0] f_pc, f_insn;
    assign f_insn = m_insn;
    // fetch instantiation
    fetch #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASEADDR(32'h01000000)
    ) fetch1 (
        .clk(clk),
        .rst(reset),
        .pc_o(f_pc),            
        .insn_o()         
    );
    // ---------------------------------- //
    // ---------- FETCH END ------------- //


    // ---------- DECODE STAGE ---------- //
    // ---------------------------------- //
    // decode signals
    logic [DWIDTH - 1:0] d_pc_i;
    logic [DWIDTH - 1:0] d_insn_i;
    logic [DWIDTH-1:0] d_pc_o;
    logic [DWIDTH-1:0] d_insn_o;
    logic [6:0] d_opcode;
    logic [4:0] d_rd;
    logic [4:0] d_rs1;
    logic [4:0] d_rs2;
    logic [6:0] d_funct7;
    logic [2:0] d_funct3;
    logic [4:0] d_shamt;
    logic [DWIDTH - 1:0] d_imm;

    assign d_pc_i = f_pc;
    assign d_insn_i = f_insn;

    // decode instantiation
    decode #(
        .AWIDTH(32),
        .DWIDTH(32)
    ) decode1 (
        .clk(clk),
        .rst(reset),
        .insn_i(d_insn_i),
        .pc_i(d_pc_i),
        .pc_o(d_pc_o),            
        .insn_o(d_insn_o),         
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
        .insn_i(d_insn_o),
        .imm_o(igen_imm)
    );

    // register file signals
    logic [4:0] r_rs1, r_rs2, r_rd;
    logic [DWIDTH - 1:0] r_rs1data, r_rs2data, r_rddata;
    logic r_regwren;
    
    assign r_regwren = c_regwren;
    assign r_rddata = wb_data;
    assign r_rd = d_rd;
    assign r_rs1 = d_rs1;
    assign r_rs2 = d_rs2;

    // Register file instantiation
    register_file #(
      .DWIDTH(DWIDTH)
    ) register_file1 (
      .clk(clk),
      .rst(reset),
      .rs1_i(r_rs1),
      .rs2_i(r_rs2),
      .rd_i(r_rd),
      .datawb_i(r_rddata),
      .regwren_i(r_regwren),
      .rs1data_o(r_rs1data),
      .rs2data_o(r_rs2data)
    );

    // ---------------------------------- //
    // ---------- DECODE END ------------ //


    // ---------- EXECUTE STAGE --------- //
    // ---------------------------------- //
    // execute signals
    logic [DWIDTH - 1:0] e_rs1, e_rs2, e_res, e_pc;
    logic [2:0] e_funct3;
    logic [6:0] e_funct7;
    logic [6:0] e_opcode;
    logic [3:0] e_alusel;
    logic [DWIDTH-1:0] e_imm;
    logic e_brtaken;

    // mux for execute input data
    assign e_rs1 = (c_rs1sel == 1'b1) ? r_rs1data : d_pc_o;
    assign e_rs2 = (c_rs2sel == 1'b1) ? r_rs2data : d_imm;

    assign e_pc = d_pc_o;
    assign e_funct3 = d_funct3;
    assign e_funct7 = d_funct7;
    assign e_opcode = d_opcode;
    assign e_alusel = c_alusel;
    assign e_imm = d_imm;

    // Execute instantiation, brtaken_o is empty because that signal is coming from bc module
    // ^ This is no longer relevant. We moved the branch control instantiation to execute and add necessary signals.
    alu #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) e_alu1 (
      .pc_i(e_pc),
      .rs1_i(e_rs1),
      .rs2_i(e_rs2),
      .funct3_i(e_funct3),
      .funct7_i(e_funct7),
      .opcode_i(e_opcode),
      .imm_i(e_imm),
      .alusel_i(e_alusel),
      .res_o(e_res),
      .brtaken_o(e_brtaken)
    );
    // ---------------------------------- //
    // ---------- EXECUTE END ----------- //



    // ---------- MEMORY STAGE ---------- //
    // ---------------------------------- //
    logic [AWIDTH-1:0] m_pc, m_insn;
    logic [DWIDTH-1:0] m_addr, m_data_o, m_data_i;
    logic m_memren, read_en, m_memwren;
    logic [2:0] m_funct3;
    logic [1:0] m_size_encoded;


    assign m_funct3 = d_funct3;
    assign m_size_encoded = (m_funct3 == 3'd0 || m_funct3 == 3'd4) ? 2'd0 : (m_funct3 == 3'd1 || m_funct3 == 3'd5) ? 2'd1 : 2'd2;
    assign read_en = 1'b1;
    assign m_memren = c_memren;
    assign m_memwren = c_memwren;
    assign m_pc = d_pc_o;
    assign m_addr = e_res;
    assign m_data_i = r_rs2data;

    // Memory instantiation
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
        ) memory1 (
        .clk(clk),
        .rst(reset),
        .pc_i(m_pc),
        .data_i(m_data_i),
        .addr_i(m_addr),
        .funct3_i(m_funct3),
        .memren_i(m_memwren),
        .read_en_i(read_en),
        .write_en_i(m_memwren),
        .insn_o(m_insn),
        .data_o(m_data_o)
    );
    // ---------------------------------- //
    // ---------- MEMORY END ------------ //
    

    // ---------- WRITEBACK STAGE ------- //

    // write back signals
    logic [DWIDTH-1:0] wb_pc, wb_data, wb_mdata, wb_nextPC, wb_imm, wb_res;
    logic wb_brtaken, wb_pcsel, wb_regwren;
    logic [1:0] wb_wbsel;
    logic [4:0] wb_rd;
    
    assign wb_pc = e_pc;
    assign wb_brtaken = e_brtaken;
    assign wb_pcsel = c_pcsel;
    assign wb_imm = d_imm;
    assign wb_res = e_res;
    assign wb_mdata = m_data_o;
    assign wb_regwren = c_regwren;
    assign wb_rd = r_rd;

    // write back instantiation
    writeback #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) wb_wb1 (
      .pc_i(wb_pc),
      .alu_res_i(wb_res),
      .memory_data_i(wb_mdata),
      .brtaken_i(wb_brtaken),
      .wbsel_i(wb_wbsel),
      .imm_i(wb_imm),
      .pcsel_i(wb_pcsel),
      .writeback_data_o(wb_data),
      .next_pc_o(wb_nextPC)
    );
    // ---------------------------------- //
    // ----------- WRITEBACK END -------- //

// program termination logic
reg is_program = 0;
always_ff @(posedge clk) begin
    if (f_insn == 32'h00000073) $finish;  // directly terminate if see ecall
    if (f_insn == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file1.x[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end

endmodule : pd4
