/*
 * Module: three_stage_pipeline
 *
 * A 3-stage pipeline (TSP) where the first stage performs an addition of two
 * operands (op1_i, op2_i) and registers the output, and the second stage computes
 * the difference between the output from the first stage and op1_i and registers the
 * output. This means that the output (res_o) must be available two cycles after the
 * corresponding inputs have been observed on the rising clock edge
 *
 * Visually, the circuit should look like this:
 *               <---         Stage 1           --->
 *                                                        <---         Stage 2           --->
 *                                                                                               <--    Stage 3    -->
 *                                    |------------------>|                    |
 * -- op1_i -->|                    | --> |         |     |                    |-->|         |   |                    |
 *             | pipeline registers |     | ALU add | --> | pipeline registers |   | ALU sub |-->| pipeline register  | -- res_o -->
 * -- op2_i -->|                    | --> |         |     |                    |-->|         |   |                    |
 *
 * Inputs:
 * 1) 1-bit clock signal
 * 2) 1-bit wide synchronous reset
 * 3) DWIDTH-wide input op1_i
 * 4) DWIDTH-wide input op2_i
 *
 * Outputs:
 * 1) DWIDTH-wide result res_o
 */

module three_stage_pipeline #(
parameter int DWIDTH = 8)(
        input logic clk,
        input logic rst,
        input logic [DWIDTH-1:0] op1_i,
        input logic [DWIDTH-1:0] op2_i,
        output logic [DWIDTH-1:0] res_o
    );

    /*
     * Process definitions to be filled by
     * student below...
     * [HINT] Instantiate the alu and reg_rst modules
     * and set up the necessary connections
     *
     */

    wire [1:0] opcode;
    wire [1:0] zero;
    wire [1:0] neg;
    wire [DWIDTH-1:0] res_alu_add;
    wire [DWIDTH-1:0] res_alu_sub;

    alu #(.DWIDTH(DWIDTH)) aluAdd (
        .sel_i(2'b00),
        .op1_i(stage1_reg1),
        .op2_i(stage1_reg2),
        .res_o(res_alu_add),
        .zero_o(zero[0]),
        .neg_o(neg[0])
    );

    alu #(.DWIDTH(DWIDTH)) aluSub (
        .sel_i(2'b01),
        .op1_i(res_alu_add),
        .op2_i(stage1_reg1),
        .res_o(res_alu_sub),
        .zero_o(zero[1]),
        .neg_o(neg[1])
    );    

    wire [DWIDTH-1:0] stage1_reg1;
    wire [DWIDTH-1:0] stage1_reg2;
    reg_rst #(.DWIDTH(DWIDTH)) stage1Reg1 (
        .clk(clk),
        .rst(rst),
        .in_i(op1_i),
        .out_o(stage1_reg1)
    );

    reg_rst #(.DWIDTH(DWIDTH)) stage1Reg2 (
        .clk(clk),
        .rst(rst),
        .in_i(op2_i),
        .out_o(stage1_reg2)
    );
    
    
    wire [DWIDTH-1:0] stage2_reg1;
    wire [DWIDTH-1:0] stage2_reg2;
    reg_rst #(.DWIDTH(DWIDTH)) stage2Reg1 (
        .clk(clk),
        .rst(rst),
        .in_i(res_alu_add),
        .out_o(stage2_reg1)
    );

    reg_rst #(.DWIDTH(DWIDTH)) stage2Reg2 (
        .clk(clk),
        .rst(rst),
        .in_i(stage1_reg1),
        .out_o(stage2_reg2)
    );

    reg_rst #(.DWIDTH(DWIDTH)) stage3Reg (
        .clk(clk),
        .rst(rst),
        .in_i(res_alu_sub),
        .out_o(res_o)
    );
            
                    
endmodule: three_stage_pipeline