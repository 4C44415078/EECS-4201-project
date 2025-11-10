/*
 * Module: writeback
 *
 * Description: Write-back control stage implementation
 *
 * Inputs:
 * 1) PC pc_i
 * 2) result from alu alu_res_i
 * 3) data from memory memory_data_i
 * 4) data to select for write-back wbsel_i
 * 5) branch taken signal brtaken_i
 *
 * Outputs:
 * 1) DWIDTH wide write back data write_data_o
 * 2) AWIDTH wide next computed PC next_pc_o
 */
`include "constants.svh"
// For test bench
//`timescale 1ns/1ps

 module writeback #(
     parameter int DWIDTH=32,
     parameter int AWIDTH=32
 )(
     input logic [AWIDTH-1:0] pc_i,
     input logic [DWIDTH-1:0] alu_res_i,
     input logic [DWIDTH-1:0] memory_data_i,
     input logic [1:0] wbsel_i,
     input logic brtaken_i,
     // ADDED SIGNALS --------------------------
     input logic [DWIDTH-1:0] imm_i,
     input logic pcsel_i,
     // ----------------------------------------
     output logic [DWIDTH-1:0] writeback_data_o,
     output logic [AWIDTH-1:0] next_pc_o
 );

    /*
     * Process definitions to be filled by
     * student below...
     */
    
    always_comb begin
        writeback_data_o = (wbsel_i == `WB_ALU) ? alu_res_i :
            (wbsel_i == `WB_MEM) ? memory_data_i :
            (wbsel_i == `WB_PC4) ? pc_i + 32'd4 :
            (wbsel_i == `WB_IMM) ? imm_i : {DWIDTH{1'b0}};
        
        // Check for branch taken or jump 
        if (pcsel_i || brtaken_i) begin
            next_pc_o = alu_res_i;
        end
        else begin
            next_pc_o = pc_i + 32'd4;
        end
    end

endmodule : writeback
