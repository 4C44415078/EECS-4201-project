/*
 * Module: pd4
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd4 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */
    // memory signals
    logic [AWIDTH - 1:0] addr_i;
    logic [DWIDTH - 1:0] data_i;
    logic write_en, read_en;
        // fetch signals
    logic [DWIDTH - 1:0] f_pc, f_insn;

    assign read_en = 1'b1;
    assign write_en = 1'b0;

    // Memory instantiation
    memory #(
        .AWIDTH(32),
        .DWIDTH(32),
        .BASE_ADDR(32'h01000000)
        ) memory1 (
        .clk(clk),
        .rst(reset),
        .addr_i(f_pc),
        .data_i(data_i),
        .read_en_i(read_en),
        .write_en_i(write_en),
        .data_o(f_insn)
    );

    // Fetch instantiation
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

    // decode signals
    logic [DWIDTH - 1:0] d_pc;
    logic [DWIDTH - 1:0] d_insn;
    logic [6:0] d_opcode;
    logic [4:0] d_rd;
    logic [4:0] d_rs1;
    logic [4:0] d_rs2;
    logic [6:0] d_funct7;
    logic [2:0] d_funct3;
    logic [4:0] d_shamt;
    logic [DWIDTH - 1:0] d_imm;

    // Decode instantiation
    decode #(
        .AWIDTH(32),
        .DWIDTH(32)
    ) decode1 (
        .clk(clk),
        .rst(reset),
        .insn_i(f_insn),
        .pc_i(f_pc),
        .pc_o(d_pc),            
        .insn_o(d_insn),         
        .opcode_o(d_opcode),         
        .rd_o(d_rd),         
        .rs1_o(d_rs1),         
        .rs2_o(d_rs2),         
        .funct7_o(d_funct7),         
        .funct3_o(d_funct3),         
        .shamt_o(d_shamt),         
        .imm_o(d_imm)          
    );

    // Immediate Generator signals
    logic [DWIDTH - 1:0] igen_imm;
    assign d_imm = igen_imm;
    assign d_shamt = igen_imm[4:0];

    // Immediate Generator instantiation
    igen #(
        .DWIDTH(32)
    ) igen1 (
        .opcode_i(d_opcode),
        .insn_i(d_insn),
        .imm_o(igen_imm)
    );

    // Control signals
    logic c_pcsel;
    logic c_immsel;
    logic c_regwren;
    logic c_rs1sel;
    logic c_rs2sel;
    logic c_memren;
    logic c_memwren;
    logic [1:0] c_wbsel;
    logic [3:0] c_alusel;

    // Control instantiation
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

    // Register file signals
    logic [4:0] r_rs1, r_rs2, r_rd;
    logic [DWIDTH - 1:0] r_rs1data, r_rs2data, r_rddata;
    
    // Assign write back to constant 0
    assign r_rddata = {DWIDTH{1'b0}};
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
      .regwren_i(c_regwren),
      .rs1data_o(r_rs1data),
      .rs2data_o(r_rs2data)
    );


    // Execute signals
    logic [DWIDTH - 1:0] e_rs1, e_rs2, e_res, e_pc;
    logic e_brtaken;

    // Mux for execute input data
    assign e_rs1 = (c_rs1sel == 1'b1) ? r_rs1data : d_pc;
    assign e_rs2 = (c_rs2sel == 1'b1) ? r_rs2data : d_imm;

    assign e_pc = d_pc;

    // Execute instantiation, brtaken_o is empty because that signal is coming from bc module
    // ^ This is no longer relevant. We moved the branch control instantiation to execute and add necessary signals.
    alu #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) e_alu1 (
      .pc_i(e_pc),
      .rs1_i(e_rs1),
      .rs2_i(e_rs2),
      .funct3_i(d_funct3),
      .funct7_i(d_funct7),
      .opcode_i(d_opcode),
      .imm_i(igen_imm),
      .alusel_i(c_alusel),
      .res_o(e_res),
      .brtaken_o(e_brtaken)
    );

    // Write back signals
    logic [DWIDTH-1:0] wb_pc, wb_data, wb_nextPC;
    assign wb_pc = e_pc;

    writeback #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
    ) wb_wb1 (
      .pc_i(wb_pc),
      .alu_res_i(e_res),
      .memory_data_i(),
      .brtaken_i(e_brtaken),
      .wbsel_i(c_wbsel),
      .imm_i(igen_imm),
      .pcsel_i(c_pcsel),
      .writeback_data_o(wb_data),
      .next_pc_o(wb_nextPC)
    );


// program termination logic
reg is_program = 0;
always_ff @(posedge clk) begin
    if (data_out == 32'h00000073) $finish;  // directly terminate if see ecall
    if (data_out == 32'h00008067) is_program = 1;  // if see ret instruction, it is simple program test
    // [TODO] Change register_file_0.registers[2] to the appropriate x2 register based on your module instantiations...
    if (is_program && (register_file_0.registers[2] == 32'h01000000 + `MEM_DEPTH)) $finish;
end

endmodule : pd4
