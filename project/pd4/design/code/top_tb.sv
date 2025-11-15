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

   // TASK TO CHECK WRITEBACK
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

   // TASK TO WRITE TO MEMORY
   task writeInsnToMem (
      input logic [31:0] insn_data,
      input int insn_index
   );
      begin
         hut.memory1.main_memory[insn_index + 0] = insn_data[7:0];
         hut.memory1.main_memory[insn_index + 1] = insn_data[15:8];
         hut.memory1.main_memory[insn_index + 2] = insn_data[23:16];
         hut.memory1.main_memory[insn_index + 3] = insn_data[31:24];
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
      int index = 0;

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
       * sw x29, -48(x2) ----> x29 holds 0xDEAD_BEEF, x2 holds 0x0110_0000
       * lw x22, -48(x2) 
       */

      @(posedge clk);

      // TEST 1 Instruction
      itype_insn(`I_TYPE, 5'd10, `F3_ADD, 5'd10, 12'd100, insn);
      writeInsnToMem(insn, index);
      index += 4;
      // TEST 2 Instruction
      itype_insn(`I_TYPE, 5'd11, `F3_ADD, 5'd11, 12'd150, insn);
      writeInsnToMem(insn, index);
      index += 4;
      // TEST 3 Instruction
      itype_insn(`I_TYPE, 5'd13, `F3_ADD, 5'd13, -12'sd50, insn);
      writeInsnToMem(insn, index);
      index += 4;
      // TEST 4 Instruction
      rtype_insn(`R_TYPE, 5'd12, `F3_ADD, 5'd10, 5'd11, `F7_ADD, insn);
      writeInsnToMem(insn, index);
      index += 4;
      // TEST 5 Instruction
      rtype_insn(`R_TYPE, 5'd14, `F3_ADD, 5'd10, 5'd11, `F7_SUB, insn);
      writeInsnToMem(insn, index);
      index += 4;

      // TEST 6 Instructions
      stype_insn(`S_TYPE, `F3_SW, 5'd2, 5'd29, -12'sd40, insn);
      writeInsnToMem(insn, index);
      index += 4;
      itype_insn(`I_TYPE_L, 5'd22, `F3_LW, 5'd2, -12'sd40, insn);
      writeInsnToMem(insn, index);
      index += 4;

      // Send reset signal to restart PC
      rst = 1;
      @(posedge clk);
      rst = 0;
      // Hardcode register data for memory access instruction test
      hut.register_file1.x[29] = 32'hDEAD_BEEF;


      // TEST 1
      @(posedge clk);
      checkWriteBack(10, 32'd100);
         
      // TEST 2
      @(posedge clk);
      checkWriteBack(11, 32'd150);

      // TEST 3
      @(posedge clk);
      checkWriteBack(13, $signed(-32'sd50));

      // TEST 4
      @(posedge clk);
      checkWriteBack(12, 32'd250);
      
      // TEST 5
      @(posedge clk);
      checkWriteBack(14, $signed(-32'sd50));

      // TEST 6
      @(posedge clk);
      checkWriteBack(22, 32'hDEAD_BEEF);

      $system("date");
      $finish;
   end

endmodule: top_tb