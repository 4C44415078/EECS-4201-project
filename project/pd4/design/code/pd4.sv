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
        .insn_i(f_insn),
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
    // ---------------------------------- //
    // ---------- CONTROL END ----------- //


    // ---------- FETCH STAGE ----------- //
    // ---------------------------------- //
    // fetch signals
    logic [AWIDTH-1:0] f_pc, f_insn;
    // fetch instantiation
    fetch #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASEADDR(32'h01000000)
    ) fetch1 (
        .clk(clk),
        .rst(reset),
        .next_pc_i(wb_nextPC),
        .pc_o(f_pc),            
        .insn_o()         
    );
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
    logic [DWIDTH - 1:0] d_imm;


    // decode instantiation
    decode #(
        .AWIDTH(32),
        .DWIDTH(32)
    ) decode1 (
        .clk(clk),
        .rst(reset),
        .insn_i(f_insn),
        .pc_i(f_pc),
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
        .insn_i(f_insn),
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
      .rd_i(d_rd),
      .datawb_i(wb_data),
      .regwren_i(c_regwren),
      .rs1data_o(r_rs1data),
      .rs2data_o(r_rs2data)
    );

    // ---------------------------------- //
    // ---------- DECODE END ------------ //


    // ---------- EXECUTE STAGE --------- //
    // ---------------------------------- //
    // execute signals
    logic [DWIDTH - 1:0] e_rs1, e_rs2, e_res;
    logic e_brtaken;

    // mux for execute input data
    assign e_rs1 = (c_rs1sel == 1'b1) ? r_rs1data : f_pc;
    assign e_rs2 = (c_rs2sel == 1'b1) ? r_rs2data : d_imm;


    // Execute instantiation
    alu #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) e_alu1 (
      .pc_i(f_pc),
      .rs1_i(e_rs1),
      .rs2_i(e_rs2),
      .funct3_i(d_funct3),
      .funct7_i(d_funct7),
      .opcode_i(d_opcode),
      .imm_i(d_imm),
      .alusel_i(c_alusel),
      .res_o(e_res),
      .brtaken_o(e_brtaken)
    );
    // ---------------------------------- //
    // ---------- EXECUTE END ----------- //



    // ---------- MEMORY STAGE ---------- //
    // ---------------------------------- //
    logic [DWIDTH-1:0] m_data_o;
    logic m_memren, read_en;
    logic [1:0] m_size_encoded;

    logic [2:0] m_funct3;
    // For all NON-memory access instructions, change funct3 so that it loads a word
    assign m_funct3 = (d_opcode !== `S_TYPE || d_opcode !== `I_TYPE_L) ? 3'd2 : d_funct3;
    // Use the right most 2-bits for size_encode otherwise use the 2-bit of funct3 of the actual instruction   
    assign m_size_encoded = (d_opcode == `S_TYPE || d_opcode == `I_TYPE_L) ? m_funct3[1:0] : d_funct3[1:0];

    // Always read memory
    assign read_en = 1'b1;
    assign m_memren = 1'b1;

    // Memory instantiation
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
        ) memory1 (
        .clk(clk),
        .rst(reset),
        .pc_i(f_pc),
        .data_i(r_rs2data),
        .addr_i(e_res),
        .funct3_i(m_funct3),
        .memren_i(m_memren),
        .read_en_i(read_en),
        .write_en_i(c_memwren),
        .insn_o(f_insn),
        .data_o(m_data_o)
    );
    // ---------------------------------- //
    // ---------- MEMORY END ------------ //
    

    // ---------- WRITEBACK STAGE ------- //

    // write back signals
    logic [DWIDTH-1:0] wb_data, wb_nextPC;

    // write back instantiation
    writeback #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) wb_wb1 (
      .pc_i(f_pc),
      .alu_res_i(e_res),
      .memory_data_i(m_data_o),
      .brtaken_i(e_brtaken),
      .wbsel_i(c_wbsel),
      .imm_i(d_imm),
      .pcsel_i(c_pcsel),
      .writeback_data_o(wb_data),
      .next_pc_o(wb_nextPC)
    );
    // ---------------------------------- //
    // ----------- WRITEBACK END -------- //

// program termination logic

// reg is_program = 0;
// always_ff @(posedge clk) begin
//     if (f_insn == 32'h00000073) $finish;  // directly terminate if see ecall
//     if (f_insn == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
//     // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
//     if (is_program && (register_file1.x[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
// end

endmodule : pd4
