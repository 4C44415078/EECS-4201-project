/*
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD1 -----------
 * Module: memory
 *
 * Description: Byte-addressable memory implementation. Supports both read and write.
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
 * 2) data out valid signal data_vld_o
 */
/*
 * Module: memory
 *
 * Description: Byte-addressable memory implementation. Supports both read and write.
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
 * 2) data out valid signal data_vld_o
 */

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
`include "constants.svh"


module memory #(
  // parameters
  parameter int AWIDTH = 32,
  parameter int DWIDTH = 32,
  parameter logic [31:0] BASE_ADDR = 32'h01000000
) (
  // inputs
  input logic clk,
  input logic rst,
  input logic [AWIDTH-1:0] pc_i = BASE_ADDR, // Renamed for addr_i to pc_i
  input logic [DWIDTH-1:0] data_i,
  // --- Added Input Ports ---- //
  input logic [AWIDTH-1:0] addr_i = BASE_ADDR, // For address of data
  input logic [2:0] funct3_i,
  input logic memren_i,
  // ------------------- //
  input logic read_en_i,
  input logic write_en_i,
  // outputs
  output logic [DWIDTH-1:0] insn_o,
  // --- Added output port --- //
  output logic [DWIDTH-1:0] data_o
  // ------------------- //
);

    
    localparam int MEM_BYTES = `MEM_DEPTH / 8;

	logic [DWIDTH-1:0] temp_memory [0:`LINE_COUNT - 1];
   	// Byte-addressable memory
  	logic [7:0] main_memory [0:MEM_BYTES - 1];  // Byte-addressable memory
   	logic [AWIDTH-1:0] program_counter;
   	assign program_counter = pc_i - BASE_ADDR;
  	int i;
 
   	initial begin
        $readmemh(`MEM_PATH, temp_memory);
        // Load data from temp_memory into main_memory
		for (i = 0; i < MEM_BYTES; i++) begin
       	   if (i < `LINE_COUNT) begin
           main_memory[4*i]     = temp_memory[i][7:0];
       		main_memory[4*i + 1] = temp_memory[i][15:8];
       		main_memory[4*i + 2] = temp_memory[i][23:16];
       		main_memory[4*i + 3] = temp_memory[i][31:24];
           end
           else begin
            // initialize the rest of memory to zero
            main_memory[4*i] = 8'd0;
            main_memory[4*i + 1] = 8'd0;
            main_memory[4*i + 2] = 8'd0;
            main_memory[4*i + 3] = 8'd0;
           end
     	end
		//$display("IMEMORY: Loaded %0d 32-bit words from %s", `LINE_COUNT, `MEM_PATH);
	end

    logic [AWIDTH-1:0] address;
    assign address = addr_i - BASE_ADDR;

    // Loading data from memory (non-instructions), little endian
    always_comb begin
        data_o = '0; // default data out to zero
        if (memren_i) begin
            if ($isunknown(addr_i)) begin
                data_o = '0;
            end
            // Check if address is in physical memory.
            else if ((addr_i >= BASE_ADDR) && (addr_i + 32'd3 < BASE_ADDR + MEM_BYTES)) begin
                // Checking for function 3, select the correct load
                case (funct3_i)
                    // Load byte and load byte unsigned, sign extend for signed, zero extend for unsigned
                    `F3_LB, `F3_LBU: begin
                        // Load byte (signed)
                        if (funct3_i == `F3_LB) begin
                            data_o = {
                                {DWIDTH-8{main_memory[address][7]}}, // Sign extend MSB of byte
                                main_memory[address]
                            };
                        end
                        // Load byte (unsigned)
                        else begin
                            data_o = {
                                {DWIDTH-8{1'b0}}, // Zero extend 
                                main_memory[address]
                            };
                        end
                    end
                    // Load half word and load half word unsigned, sign extend for sign, zero extend for unsigned
                    `F3_LH, `F3_LHU: begin
                        // Load half word (signed)
                        if (funct3_i == `F3_LH) begin
                            data_o = {
                                {(DWIDTH/2){main_memory[address + 1][7]}}, // Sign extend MSB of upper byte
                                main_memory[address + 1],
                                main_memory[address]};
                        end
                        // Load half word (unsigned)
                        else begin
                            data_o = {
                                {DWIDTH/2{1'b0}}, // Zero extend
                                main_memory[address + 1],
                                main_memory[address]};
                        end                        
                    end
                    // Load word
                    `F3_LW: begin
                        data_o = {
                            main_memory[address + 3],
                            main_memory[address + 2],
                            main_memory[address + 1],
                            main_memory[address]
                        };
                    end
                    // If function 3 is not one of load instructions, output zero
                    default: begin
                        data_o = {DWIDTH{1'b0}};
                    end
                endcase
            end
        end
        // If not a load instruction (i.e., not reading from memory, output zero)
        else begin
            data_o = {DWIDTH{1'b0}};
        end
    end

    // Memory port and read for instruction fetching (READ-ONLY)
	always_comb begin
	    insn_o = '0; // default to zero
        if (read_en_i) begin
            if ($isunknown(pc_i)) begin
                insn_o = '0;
            end else if ((pc_i >= BASE_ADDR) && (pc_i + 32'd3 < BASE_ADDR + MEM_BYTES)) begin
                // Word-aligned fetch: little-endian assembly
                insn_o = {
                          main_memory[program_counter + 3],
                          main_memory[program_counter + 2],
                          main_memory[program_counter + 1],
                          main_memory[program_counter]
                };
            end else begin
                insn_o = 32'hDEAD_BEEF;
                //$display("IMEMORY: OOB read @0x%08h (mapped 0x%08h)", addr_i, address);
            end
        end
  	end
	
    // Write to memory, since instrucitons are read only we only need to worry about writing data.
	always_ff @(posedge clk) begin
        // Check if write enable signal is high
        if (write_en_i) begin
            // Check if data address is in physical memory space
            if ((addr_i >= BASE_ADDR) && (addr_i + 32'd3 < BASE_ADDR + MEM_BYTES)) begin
                // Check function 3 for type of store instruction
                case (funct3_i)
                    // Store byte
                    `F3_SB: begin
                        main_memory[address] <= data_i[7:0];
                    end
                    // Store half word
                    `F3_SH: begin
                        main_memory[address] <= data_i[7:0];
                        main_memory[address + 1] <= data_i[15:8];
                    end
                    // Store word
                    `F3_SW: begin
                        main_memory[address] <= data_i[7:0];
                        main_memory[address + 1] <= data_i[15:8];
                        main_memory[address + 2] <= data_i[23:16];
                        main_memory[address + 3] <= data_i[31:24];
                    end
                    // Default to store a word
                    default: begin
                        main_memory[address] <= data_i[7:0];
                        main_memory[address + 1] <= data_i[15:8];
                        main_memory[address + 2] <= data_i[23:16];
                        main_memory[address + 3] <= data_i[31:24];
                    end
                endcase
                //$display("IMEMORY: Wrote 0x%08h to 0x%08h", data_i, addr_i);
            end else begin
                //$display("IMEMORY: OOB write @0x%08h", addr_i);
            end
        end
 	end
 
endmodule : memory
