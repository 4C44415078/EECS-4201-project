/*
 * Module: memory
 *
 * Description: Byte-addressable memory implementation. Supports both read and write operations.
 * Reads are combinational and writes are performed on the rising clock edge.
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 * 3) AWIDTH address addr_i
 * 4) DWIDTH data to write data_i
 * 5) read enable signal read_en_i
 * 6) write enable signal write_en_i
 *
 * Outputs:
 * 1) DWIDTH data output data_o
 */

module memory #(
  // parameters
  parameter int AWIDTH = 32,
  parameter int DWIDTH = 32,
  parameter logic [31:0] BASE_ADDR = 32'h01000000
) (
  // inputs
  input logic clk,
  input logic rst,
  input logic [AWIDTH-1:0] addr_i = BASE_ADDR,
  input logic [DWIDTH-1:0] data_i,
  input logic read_en_i,
  input logic write_en_i,
  // outputs
  output logic [DWIDTH-1:0] data_o
);

  logic [DWIDTH-1:0] temp_memory [0:`MEM_DEPTH];
  // Byte-addressable memory
  logic [7:0] main_memory [0:`MEM_DEPTH];  // Byte-addressable memory
  logic [AWIDTH-1:0] address;
  assign address = addr_i - BASE_ADDR;

  initial begin
    $readmemh(`MEM_PATH, temp_memory);
    // Load data from temp_memory into main_memory
    for (int i = 0; i < `LINE_COUNT; i++) begin
      main_memory[4*i]     = temp_memory[i][7:0];
      main_memory[4*i + 1] = temp_memory[i][15:8];
      main_memory[4*i + 2] = temp_memory[i][23:16];
      main_memory[4*i + 3] = temp_memory[i][31:24];
    end
    $display("IMEMORY: Loaded %0d 32-bit words from %s", `LINE_COUNT, `MEM_PATH);
  end

  /*
   * Process definitions to be filled by
   * student below....
   *
   */
  
  /*
   * Combinational block for MEMORY READS. 
   * Occurs asynchronously on rising edge of any input change.
   * If input address exceeds memory size, output will enter undefined state.
   * If input address exceeds base memory address, output will enter undefined state.
   * Little endian assumed. 4-byte width assumed for data bus.
   */
    always @(*) begin
        if (read) begin
            if (addr_i > `MEM_DEPTH) begin
                data_o = DWIDTH'hxxxxxxxx;
            end
            else if (addr_i < BASE_ADDR) begin
                data_o = DWIDTH'hxxxxxxxx;
            end
            else begin
                data_o = {
                    main_memory[address + 3],
                    main_memory[address + 2],
                    main_memory[address + 1],
                    main_memory[address + 0]
                };
            end
        end
    end
    
  /*
   * Sequential block for MEMORY WRITES.
   * Occurs synchronously on rising edge of the clock.
   * Little endian assumed. 4-byte width assumed for data bus.
   * Checks for high write_en_i. 
   * If reset is high, data at address is zeroed, otherwise it writes.
   */    
    always @(posedge clk) begin
        if (write_en_i) begin
            if (rst) begin
                integer i;
                for (int i = 0; i < `MEM_DEPTH; i = i + 1) begin
                    main_memory[i] <= 8'h00;
                end
            end
            else begin
                main_memory[address]     <= data_i[7:0];
                main_memory[address + 1] <= data_i[15:8];
                main_memory[address + 2] <= data_i[23:16];
                main_memory[address + 3] <= data_i[31:24];
            end
        end
    end  

endmodule : memory