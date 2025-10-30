/*
 * Module: register_file
 *
 * Description: Register file module
 *
 * Inputs:
 * 1) clk
 * 2) reset signal rst
 * 3) 5-bit rs1 address rs1_i
 * 4) 5-bit rs2 address rs2_i
 * 5) 5-bit rd address rd_i
 * 6) DWIDTH-wide data writeback datawb_i
 * 7) register write enable regwren_i
 * Outputs:
 * 1) 32-bit rs1 data rs1data_o
 * 2) 32-bit rs2 data rs2data_o
 */

 module register_file #(
     parameter int DWIDTH=32
 )(
     // inputs
     input logic clk,
     input logic rst,
     input logic [4:0] rs1_i,
     input logic [4:0] rs2_i,
     input logic [4:0] rd_i,
     input logic [DWIDTH-1:0] datawb_i,
     input logic regwren_i,
     // outputs
     output logic [DWIDTH-1:0] rs1data_o,
     output logic [DWIDTH-1:0] rs2data_o
 );

    /*
     * Process definitions to be filled by
     * student below...
     */

     /*
      * logic [DWIDTH - 1:0] x0 = {DWIDTH{1'b0}};
      * Create a DWITDH array of logic register of width DWIDTH
      */
    logic [DWIDTH - 1:0] x [DWIDTH];
    // Hold x[0], the zero register, as constant, should never change
    assign x[0] = {DWIDTH{1'b0}};

    // Sequential procedural block for writing to register file, regwren_i must be high
    always_ff @(posedge clk) begin
        if (regwren_i) begin
            x[rd_i] <= datawb_i;
        end
    end

    // Combinational procedural block for reading from the register file, regwren_i must be low
    always_comb begin
        if (!regwren_i) begin
            rs1data_o = x[rs1_i];
            rs2data_o = x[rs2_i];
        end
    end



endmodule : register_file
