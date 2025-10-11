`timescale 1ns/1ps
`include "constants.svh"
`include "insn_tasks.sv"

module igen_tb;

   // Parameters
   localparam int DWIDTH = 32;
   localparam int AWIDTH = 32;

   // Signals
   logic [6:0] opcode_i;
   logic [DWIDTH-1:0] insn_i;
   logic [DWIDTH-1:0] imm_o;

   // Instantiate DUT
   igen #(
      .DWIDTH(DWIDTH)
   ) dut (
      .opcode_i(opcode_i),
      .insn_i(insn_i),
      .imm_o(imm_o)
   )

   // Test sequence
   // TEST 1: I-type testing sequence:
   //    Max/min un/signed values
   //    Zero immediate value
   //    Shift Amount (shamt) produced correctly for shift instructions.
   //    Shift instructions maintains immediate field for "funct7"
   initial begin
      itype_insn(`ITYPE, 5'd28, `F3_ADD, 5'd29,  12'hffff)
   end



   





endmodule : igen_tb
