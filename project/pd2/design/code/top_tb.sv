`timescale 10ns/1ns
`include "constants.svh"
`include "insn_tasks.sv"
`include "pd2_test_tasks.sv"

/*
 *make -f tb_main.make top_tb
 *make -f tb_main.make run-top_tb
*/


module top_tb;

   logic clk;
   // Set up clock
   initial clk = 0;
   always #2 clk = ~clk;

   logic rst;
   initial rst = 0;

   // Parameters
   localparam int DWIDTH = 32;
   localparam int AWIDTH = 32;

   // Signals
   logic [6:0] opcode;
   logic [DWIDTH-1:0] insn;
   logic [DWIDTH-1:0] imm;
   logic [6:0] funct7;
   logic [2:0] funct3;

   logic [4:0] rd,rs1,rs2;

   logic pcsel, immsel, regwren, rs1sel, rs2sel, memren, memwren;
   logic [1:0] wbsel;
   logic [3:0] alusel;

   logic [AWIDTH - 1:0] pc;

   // Instantiate DUTS
   igen #(
      .DWIDTH(DWIDTH)
   ) dut_igen (
      .opcode_i(opcode),
      .insn_i(insn),
      .imm_o(imm)
   );

   control #(
      .DWIDTH(DWIDTH)
   ) dut_control (
      .insn_i(insn),
      .opcode_i(opcode),
      .funct7_i(funct7),
      .funct3_i(funct3),
      .pcsel_o(pcsel),
      .immsel_o(immsel),
      .regwren_o(regwren),
      .rs1sel_o(rs1sel),
      .rs2sel_o(rs2sel),
      .memren_o(memren),
      .memwren_o(memwren),
      .wbsel_o(wbsel),
      .alusel_o(alusel)
   );

   decode #(
      .DWIDTH(DWIDTH),
      .AWIDTH(AWIDTH)
   ) dut_decode (
      .clk(clk),
      .rst(rst),
      .insn_i(insn),
      .pc_i(pc),
      .pc_o(pc),
      .insn_o(insn),
      .opcode_o(opcode),
      .rd_o(rd),
      .rs1_o(rs1),
      .rs2_o(rs2),
      .funct7_o(funct7),
      .funct3_o(funct3),
      .shamt_o(),
      .imm_o(imm)
   );

   logic [6:0] actual_signal;
   assign actual_signal = {pcsel, immsel, regwren, rs1sel, rs2sel, memren, memwren};
   //assign actual_signal = {memwren, memren, rs2sel, rs1sel, regwren, immsel, pcsel};

   initial begin
      $dumpfile("top_tb.vcd");
      $dumpvars(0, top_tb);

      //opcode = 7'd0;
      //insn = {DWIDTH{1'b0}};
      //imm = {DWIDTH{1'b0}};
      pc = {AWIDTH{1'b0}};

      // ---- R-type Instruction Test ----
      opcode = `R_TYPE;
      rtype_insn(opcode, 5'd5, `F3_ADD, 5'd6, 5'd7, `F7_ADD, insn);
      @(posedge clk);
      $display("\nR-type Test");
      check_control_signal(7'b0011100, actual_signal, `WB_ALU, wbsel, `ALU_ADD, alusel);

      // ---- I-type Instruction Test ----
      opcode = `I_TYPE;

      // Check max positive value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, 12'd2047, insn);
      @(posedge clk);
      $display("\nI-type Test Max Positive");
      check_imm_value(32'h000007ff, imm);
      check_control_signal(7'b0111000, actual_signal, `WB_ALU, wbsel, `ALU_ADD, alusel);

      // Check max negative value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, -12'sd2048, insn);
      @(posedge clk);
      $display("\nI-type Test Max Negative");
      check_imm_value(-32'sd2048, imm);
      
      // Check zero value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, 12'h000, insn);
      @(posedge clk);
      $display("\nI-type Test Zero");
      check_imm_value(32'h00000000, imm);
      
      // Check shift right logical instruction, max shift amount 31 (0-31)
      itype_insn(opcode, 5'd28, `F3_SRIGHT, 5'd29, 12'h01f, insn);
      @(posedge clk);
      $display("\nI-type Test Logical Shift");
      check_imm_value(32'h0000001f, imm);
      check_control_signal(7'b0111000, actual_signal, `WB_ALU, wbsel, `ALU_SRL, alusel);

      // Check shift right arithmetic
      itype_insn(opcode, 5'd28, `F3_SRIGHT, 5'd29, 12'h21f, insn);
      @(posedge clk);
      $display("\nI-type Test Arithmetic Shift");
      check_imm_value(32'h0000001f, imm);
      check_control_signal(7'b0111000, actual_signal, `WB_ALU, wbsel, `ALU_SRA, alusel);

      // Check immediate load type instruction
      opcode = `I_TYPE_L;
      itype_insn(opcode, 5'd28, `F3_LW, 5'd29, 12'h7ff, insn);
      @(posedge clk);
      $display("\nI-type Test LOAD...");
      check_imm_value(32'h000007ff, imm);
      check_control_signal(7'b0111010, actual_signal, `WB_MEM, wbsel, `ALU_ADD, alusel);

      // ---- S-type Instruction Test ----
      opcode = `S_TYPE;
      stype_insn(opcode, `F3_SW, 5'd5, 5'd6, 12'h7ff, insn);
      @(posedge clk);
      $display("\nS-type Test Max Positive");
      check_imm_value(32'h000007ff, imm);
      check_control_signal(7'b0101101, actual_signal, `WB_ALU, wbsel, `ALU_ADD, alusel);

      // ---- B-type Instruction Test ----
      opcode = `B_TYPE;
      btype_insn(opcode, `F3_BEQ, 5'd5, 5'd6, 12'hffe, insn);
      @(posedge clk);
      $display("\nB-type Test Max Positive");
      check_imm_value(32'hfffffffc, imm);
      check_control_signal(7'b1101100, actual_signal, `WB_ALU, wbsel, `ALU_ADD, alusel);

      // ---- U-type Instruction Test ----
      opcode = `U_TYPE_LUI;
      utype_insn(opcode, 5'd7, 20'hfffff, insn);
      @(posedge clk);
      $display("\nU-type Test LUI");
      check_imm_value(32'hfffff000, imm);
      check_control_signal(7'b0110000, actual_signal, `WB_IMM, wbsel, `ALU_NOP, alusel);

      opcode = `U_TYPE_AUIPC;
      utype_insn(opcode, 5'd7, 20'hfffff, insn);
      @(posedge clk);
      $display("\nU-type Test AUIPC");
      check_imm_value(32'hfffff000, imm);
      check_control_signal(7'b0110000, actual_signal, `WB_ALU, wbsel, `ALU_ADD, alusel);

      // ---- J-type Instruction Test ----
      opcode = `J_TYPE;
      jtype_insn(opcode, 5'd7, 20'h7ffff, insn);
      @(posedge clk);
      $display("\nJ-type Test");
      check_imm_value(32'h000ffffe, imm);
      check_control_signal(7'b1110000, actual_signal, `WB_PC4, wbsel, `ALU_ADD, alusel);
   
   //repeat (20) @(posedge clk);
   $display("--- ALL TESTS PASSED ---\n");
   $finish;
   end

endmodule: top_tb




 

         


       


