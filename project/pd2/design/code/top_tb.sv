`timescale 2ns/1ns
`include "constants.svh"
`include "insn_tasks.sv"
`include "pd2_test_tasks.sv"

/*
 *make -f tb_main.make top_tb
 *make run-top_tb
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
      .opcode_o(opcode),
      .rd_o(rd),
      .rs1_o(rs1),
      .rs2_o(rs2),
      .funct7_o(funct7),
      .funct3_o(funct3),
      .shamt_o(imm[4:0])
      .imm_o(imm)
   );

   logic [6:0] actual_signal;
   actual_signal = {pcsel, immsel, regwren, rs1sel, rs2sel, memren, memwren};

   initial begin
      $dumpfile("top_tb.vcd");
      $dumpvars(0, top_tb);

      opcode = 7'd0;
      insn = {DWIDTH{1'b0}};
      imm = {DWIDTH{1'b0}};
      pc = {AWIDTH{1'b0}};


      // Test sequence
      opcode = `I_TYPE;
      // Check max positive value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, 12'h7ff, insn);
      @(posedge clk);
      check_imm_value(32'h000007ff)
      // Check max negative value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, 12'h800, insn);
      @(posedge clk);
      check_imm_value(imm == 32'hfffff800)
      // Check zero value
      itype_insn(opcode, 5'd28, `F3_ADD, 5'd29, 12'h000, insn);
      // Check proper value for shift instruction, max shift amount 31 (0-31)
      itype_insn(opcode, 5'd28, `F3_SLEFT, 5'd29, 12'h01f, insn);
      @(posedge clk);
      check_imm_value(imm == 32'h0000001f);

      // TEST 2: S-type testing sequence
      opcode = `S_TYPE;

      // TEST 3: B-type testing sequence

      // TEST 4: U-type testing sequence

      // TEST 5: J-type testing sequence
   
   
   end

endmodule: top_tb




 

         


       


