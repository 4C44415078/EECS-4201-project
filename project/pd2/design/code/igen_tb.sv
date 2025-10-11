`timescale 1ns/1ps
`include "constants.svh"
`include "insn_tasks.sv"
//`include "verilated.v"
//`include "verilated_vcd_c.h"

// Bash instruction for running tests bench in verilator
/*
 * verilator -sv --cc tb.sv dut.sv --exe --build --trace
*/

module igen_tb;

   // Parameters
   localparam int DWIDTH = 32;
   localparam int AWIDTH = 32;

   // Signals
   logic [6:0] opcode;
   logic [DWIDTH-1:0] insn;
   logic [DWIDTH-1:0] imm;

   // Instantiate DUT
   igen #(
      .DWIDTH(DWIDTH)
   ) dut (
      .opcode_i(opcode),
      .insn_i(insn),
      .imm_o(imm)
   );

   initial begin
      $dumpfile("igen_tb.vcd");
      $dumpvars(0, igen_tb);

      // Test sequence
      // TEST 1: I-type testing sequence:
      //    Max/min un/signed values
      //    Zero immediate value
      //    Shift Amount (shamt) produced correctly for shift instructions.
      //    Shift instructions maintains immediate field for "funct7"
      $display("\n ---- IGEN TEST BENCH ---- \n");
      insn = itype_insn(`I_TYPE, 5'd28, `F3_ADD, 5'd29,  12'hfff);
      #1;
      assert(imm != 32'hffffffff)
         $error("I-type instruction failed.\n Expected: 0xffffffff, Got: 0x%h\n", imm);
      else
         $display("Passed.\n");

      insn = itype_insn(`I_TYPE, 5'd28, `F3_ADD, 5'd29, 12'h000);
      #1;
      assert (imm != 32'h00000000)
         $error("I-type instruction failed.\n Expected: 0x00000000, Got: 0x%h\n", imm);
      else
         $display("Passed.\n");
   end
      
endmodule : igen_tb
