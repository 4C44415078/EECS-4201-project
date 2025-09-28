`timescale 1ns/1ps

`define MEM_DEPTH 1024


module memory_tb;

   // Parameters
   localparam int AWIDTH = 32;
   localparam int DWIDTH = 32;
   localparam logic [31:0] BASE_ADDR = 32'h01000000;


   // Signals
   logic clk, reset;
   logic [AWIDTH-1:0] addr_i;
   logic [DWIDTH-1:0] data_i;
   logic read_en_i;
   logic write_en_i;
   logic [DWIDTH-1:0] data_o;
   logic valid_o;

   // Instatiate DUT
   memory #(
      .AWIDTH(AWIDTH),
      .DWIDTH(DWIDTH),
      .BASE_ADDR(BASE_ADDR)
   ) dut (
      .clk(clk),
      .rst(reset),
      .addr_i(addr_i),
      .data_i(data_i),
      .read_en_i(read_en_i),
      .write_en_i(write_en_i),
      .data_o(data_o),
      .valid_o(valid_o)
   );

   // Generate clock
   initial clk = 0;
   always #5 clk = ~clk;

   /*
    * Memory write task.
    * Arguments: test_address, test_write_en_i, test_read_en_i, test_data_i
    * Sets the address, write enable, read enable, and data input signals.
    * Waits for 1 clock cycle to allow write to propagate.
   */
   task mem_write (
      input logic [AWIDTH - 1:0] test_address,
      input logic test_write_en_i,
      input logic test_read_en_i,
      input logic [DWIDTH - 1:0] test_data_i
   ); 
      begin
         @(posedge clk);
         addr_i = test_address;
         data_i = test_data_i;
         read_en_i = test_read_en_i;
         write_en_i = test_write_en_i;
         @(posedge clk);
      end
   endtask

   /*
    * Memory read task.
    * Arguments: test_address, test_write_en_i, test_read_en_i, test_data_o, test_valid_o
    * Sets the address, write enable, and read enable signals.
    * Waits for 1 time unit to allow combinational read to propagate.
    * Outputs the read data and valid signal.
    */
   task mem_read (
      input logic [AWIDTH - 1:0] test_address,
      input logic test_write_en_i,
      input logic test_read_en_i, 
      output [DWIDTH - 1:0] test_data_o, 
      output logic test_valid_o
      ); 
      begin
         write_en_i = test_write_en_i;
         read_en_i = test_read_en_i;
         addr_i = test_address;
         #1;
         test_data_o = data_o;
         test_valid_o = valid_o;
      end
   endtask

   // Test Bench Cases
   initial begin
      // Registers for checking output.
      logic [DWIDTH - 1:0] read_data;
      logic read_valid;
      // Initialization of signals.
      write_en_i = 1'b0;
      read_en_i = 1'b0;
      addr_i = {AWIDTH{1'b0}};
      data_i = {DWIDTH{1'b0}};

      $display("\n ----  Memory Test Bench ---- \n");

      #2;

      // Test Case 1: Write and Read Back of lowest address.
      mem_write(BASE_ADDR, 1'b1, 1'b0, 32'hdeadbeef);
      mem_read(BASE_ADDR, 1'b0, 1'b1, read_data, read_valid,);
      if (read_data !== 32'hdeadbeef || read_valid !== 1'b1) begin
         $display("Test Case 1 Failed: Write and Read Back of lowest address\n");
         $display("Expected: 0xdeadbeef, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 1 Passed: Write and Read Back of lowest address\n");
      end

      // Test Case 2: Write and Read Back of highest address.
      mem_write(BASE_ADDR + 4*(`MEM_DEPTH - 1), 1'b1, 1'b0, 32'hdeadbeef);
      mem_read(BASE_ADDR + 4*(`MEM_DEPTH - 1), 1'b0, 1'b1, read_data, read_valid);
      if (read_data !== 32'h01100110 || read_valid !== 1'b1) begin
         $display("Test Case 2 Failed: Write and Read Back of highest address\n");
         $display("Expected: 0xheadbeef, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 2 Passed: Write and Read Back of highest address\n");
      end

      // Test Case 3: No write when write_en_i is low.
      mem_write(32'h10000004, 1'b0, 1'b0, 32'hdeadbeef);
      mem_read(32'h10000004, 1'b0, 1'b1, read_data, read_valid);
      if (read_data !== 32'h00000000 || read_valid !== 1'b1) begin
         $display("Test Case 3 Failed: No write when write_en_i is low\n");
         $display("Expected: 0x00000000, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 3 Passed: No write when write_en_i is low\n");
      end

      // Test Case 4: No read when read_en_i is low.
      mem_write(32'h10000008, 1'b1, 1'b0, 32'hdeadbeef);
      mem_read(32'h10000008, 1'b0, 1'b0, read_data, read_valid);
      if (read_data !== 32'h00000000 || read_valid !== 1'b0) begin
         $display("Test Case 4 Failed: No read when read_en_i is low\n");
         $display("Expected: 0x00000000, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 4 Passed: No read when read_en_i is low\n");
      end

      // Test Case 5: Read from address outside of memory range.
      mem_read(BASE_ADDR + 4*(`MEM_DEPTH), 1'b0, 1'b1, read_data, read_valid);
      if (read_data !== 32'h00000000 || read_valid !== 1'b0) begin
         $display("Test Case 5 Failed: Read from address outside of memory range\n");
         $display("Expected: 0x00000000, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 5 Passed: Read from address outside of memory range\n");
      end

      // Test Case 6: Simultaneous read and write enable signals.
      mem_write(32'h1000000C, 1'b1, 1'b1, 32'hdeadbeef);
      mem_read(32'h1000000C, 1'b0, 1'b1, read_data, read_valid);
      if (read_data !== 32'h00000000 || read_valid !== 1'b0) begin
         $display("Test Case 6 Failed: Simultaneous read and write enable signals\n");
         $display("Expected: 0x00000000, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 6 Passed: Simultaneous read and write enable signals\n");
      end

      // Test Case 7: Asynchronous read.
      mem_write(32'h10000010, 1'b1, 1'b0, 32'hdeadbeef);
      @(negedge clk);
      read_en_i = 1'b1;
      addr_i = 32'h10000010;
      #1;
      if (data_o !== 32'hdeadbeef || valid_o !== 1'b1) begin
         $display("Test Case 7 Failed: Asynchronous read\n");
         $display("Expected: 0xdeadbeef, Got: 0x%h\n", data_o);
         $finish;
      end
      else begin
         $display("Test Case 7 Passed: Asynchronous read\n");
      end

      // Test Case 8: Reset read behaviour.
      reset = 1'b1;
      mem_read(32'h10000010, 1'b0, 1'b1, read_data, read_valid);
      if (read_data !== 32'h00000000 || read_valid !== 1'b0) begin
         $display("Test Case 8 Failed: Reset behaviour\n");
         $display("Expected: 0x00000000, Got: 0x%h\n", read_data);
         $finish;
      end
      else begin
         $display("Test Case 8 Passed: Reset behaviour\n");
      end
      reset = 1'b0;

      $display("\n ----  All Test Cases Passed! ---- \n");
      $finish;
   end
endmodule : memory_tb


      