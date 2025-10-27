`timescale 10ns/1ns
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

   pd3 #(
      .AWIDTH(AWIDTH),
      .DWIDTH(DWIDTH)
   ) hut (
      .clk(clk),
      .reset(rst)
   );

      // Register to hold instructions to be tested and pc.
      logic [31:0] insn;

   initial begin
      $dumpfile("top_tb.vcd");
      $dumpvars(0, top_tb);

      /*
       * TEST SEQUENCE:
       * addi x10, x10, 150
       * addi x11, x11, 200
       * addi x13, x13, -50
       * HARD CODED: x10 = 100, x11 = 150
       * add x12, x10, x11
       * sub x12, x11, x10
       * bne x10, x11, 16
       * beq x10, x11, -16
       * bge x11, x10, 16
       */

      // TEST 1
      itype_insn(`I_TYPE, 5'd10, `F3_ADD, 5'd10, 12'd150, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if (hut.e_res == 32'd150) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected: res = %d Got: res = %d", 32'd150, hut.e_res);
      end
         
      // TEST 2
      itype_insn(`I_TYPE, 5'd11, `F3_ADD, 5'd11, 12'd200, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if (hut.e_res == 32'd200) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected: res = %d Got: res = %d", 32'd200, hut.e_res);
      end

      // TEST 3
      itype_insn(`I_TYPE, 5'd13, `F3_ADD, 5'd13, -12'sd50, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if ($signed(hut.e_res) == -32'sd50) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected: res = %d Got: res = %d", 32'd200, hut.e_res);
      end

      // TEST 4
      hut.register_file1.x[10] = 32'd100;
      hut.register_file1.x[11] = 32'd150;
      rtype_insn(`R_TYPE, 5'd12, `F3_ADD, 5'd10, 5'd11, `F7_ADD, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if (hut.e_res == 32'd250) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected res = %d Got: res = %d", 32'd250, hut.e_res);
      end

      // TEST 5
      hut.register_file1.x[10] = 32'd100;
      hut.register_file1.x[11] = 32'd150;
      rtype_insn(`R_TYPE, 5'd12, `F3_ADD, 5'd10, 5'd11, `F7_SUB, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if ($signed(hut.e_res) == -32'sd50) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected res = %d Got: res = %d", -32'sd50, hut.e_res);
      end

      // TEST 6
      btype_insn(`B_TYPE, `F3_BNE, 5'd10, 5'd11, 12'd16, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if ($signed(hut.e_res) == hut.e_pc + 16 && hut.e_brtaken == 1) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected res = %d brtaken = %d Got: res = %d brtaken = %d", 32'sh01000010, 1'b1, hut.e_res, hut.e_brtaken);
      end

      // TEST 7
      btype_insn(`B_TYPE, `F3_BEQ, 5'd10, 5'd11, -12'sd16, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if ($signed(hut.e_res) == hut.e_pc - 16 && hut.e_brtaken == 0) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected res = %d brtaken = %d Got: res = %d brtaken = %d", 32'sh01000000, 1'b0, hut.e_res, hut.e_brtaken);
      end

      // TEST 8
      btype_insn(`B_TYPE, `F3_BGE, 5'd11, 5'd10, 12'd16, insn);
      hut.f_insn = insn;
      @(posedge clk);
      if ($signed(hut.e_res) == hut.e_pc + 16 && hut.e_brtaken == 1) begin
         $display("Test Passed.");
      end
      else begin
         $display("Test Failed. Expected res = %d brtaken = %d Got: res = %d brtaken = %d", 32'sh01000010, 1'b1, hut.e_res, hut.e_brtaken);
      end
      $finish;
   end

endmodule: top_tb