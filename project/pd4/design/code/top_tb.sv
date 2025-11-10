`timescale 1ns/1ps
`include "constants.svh"
`include "insn_tasks.sv"

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

   task checkWriteBack (
    input int rd,
    input logic [31:0] expectedValue
);
    begin
      @(posedge clk);
      if (hut.register_file1.x[rd] == expectedValue) begin
          $display("Test Passed.");
      end
      else begin
          $display("Test Failed. Expected: res = %d Got: res = %d", expectedValue, hut.register_file1.x[rd]);
      end
    end
endtask

   pd4 #(
      .AWIDTH(AWIDTH),
      .DWIDTH(DWIDTH)
   ) hut (
      .clk(clk),
      .reset(rst)
   );

      // Register to hold instructions to be tested.
      logic [31:0] insn;

   initial begin
      $dumpfile("top_tb.vcd");
      $dumpvars(0, top_tb);

      /*
       * TEST SEQUENCE:
       * SINCE MY TB FOR PD3 was successful only need to test for writeback
       * addi x10, x10, 150 
       * addi x11, x11, 200 
       * addi x13, x13, -50 
       * add x12, x10, x11 
       * sub x12, x11, x10 
       */

      @(posedge clk);

      // TEST 1
      itype_insn(`I_TYPE, 5'd10, `F3_ADD, 5'd10, 12'd100, insn);
      hut.f_insn = insn;
      @(posedge clk);
      checkWriteBack(10, 32'd100);
         
      // TEST 2
      itype_insn(`I_TYPE, 5'd11, `F3_ADD, 5'd11, 12'd150, insn);
      hut.f_insn = insn;
      @(posedge clk);
      checkWriteBack(11, 32'd150);

      // TEST 3
      itype_insn(`I_TYPE, 5'd13, `F3_ADD, 5'd13, -12'sd50, insn);
      hut.f_insn = insn;
      @(posedge clk);
      checkWriteBack(13, $signed(-32'sd50));

      // TEST 4
      rtype_insn(`R_TYPE, 5'd12, `F3_ADD, 5'd10, 5'd11, `F7_ADD, insn);
      hut.f_insn = insn;
      @(posedge clk);
      checkWriteBack(12, 32'd250);

      // TEST 5
      rtype_insn(`R_TYPE, 5'd12, `F3_ADD, 5'd10, 5'd11, `F7_SUB, insn);
      hut.f_insn = insn;
      @(posedge clk);
      checkWriteBack(12, $signed(-32'sd50));
      $system("date");
      $finish;
   end

endmodule: top_tb