/*
 * Module: alu
 *
 * Description: ALU implementation for execute stage.
 *
 * Inputs:
 * 1) 32-bit PC pc_i
 * 2) 32-bit rs1 data rs1_i
 * 3) 32-bit rs2 data rs2_i
 * 4) 3-bit funct3 funct3_i
 * 5) 7-bit funct7 funct7_i
 *
 * Outputs:
 * 1) 32-bit result of ALU res_o
 * 2) 1-bit branch taken signal brtaken_o
 */

module alu #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32
)(
    input logic [AWIDTH-1:0] pc_i,
    input logic [DWIDTH-1:0] rs1_i,
    input logic [DWIDTH-1:0] rs2_i,
    input logic [2:0] funct3_i,
    input logic [6:0] funct7_i,
    input logic [6:0] opcode_i,
    input logic [3:0] alusel_i,
    output logic [DWIDTH-1:0] res_o,
    output logic brtaken_o
);

    /*
     * Process definitions to be filled by
     * student below...
     */
    logic breq, brlt;

     branch_control #(
        .DWIDTH(32)
     ) ex_bc (
        .opcode_i(opcode_i),
        .funct3_i(funct3_i),
        .rs1_i(rs1_i),
        .rs2_i(rs2_i),
        .breq_o(breq),
        .brlt_o(brlt)
     );

    always_comb begin
        if (opcode_i == `B_TYPE) begin
            case (funct3_i)
                `F3_BEQ: begin
                    brtaken_o = breq;
                end
                `F3_BNE: begin
                    brtaken_o = !breq;
                end
                `F3_BLT, `F3_BLTU: begin
                    brtaken_o = brlt;
                end
                `F3_BGE, `F3_BGEU: begin
                    brtaken_o = !(breq && brlt);
                end
            endcase
        end
        else begin
            brtaken_o = 1'b0;
        end
    end

    /* 
     * Combinational procedural block for alu operations
     */
    always_comb begin
        case (alusel_i)
            `ALU_ADD: begin
                res_o = rs1_i + rs2_i;
            end

            `ALU_SUB: begin
                res_o = rs1_i - rs2_i;
            end

            `ALU_AND: begin
                res_o = rs1_i & rs2_i;
            end

            `ALU_OR: begin
                res_o = rs1_i | rs2_i;
            end

            `ALU_XOR: begin
                res_o = rs1_i ^ rs2_i;
            end

            `ALU_SLL: begin
                res_o = rs1_i << rs2_i;
            end

            `ALU_SRL: begin
                res_o = rs1_i >> rs2_i;
            end

            `ALU_SRA: begin 
                res_o[DWIDTH-1] = rs1_i[DWIDTH-1];
                res_o = rs1_i[DWIDTH-2:0] >> rs2_i;
            end

            `ALU_SLT: begin
                res_o = (rs1_i[DWIDTH-1] > rs2_i[DWIDTH-1]) ? 1'b1 :
                    (rs1_i[DWIDTH-1] < rs2_i[DWIDTH-1]) ? 1'b0 :
                    (rs1_i[DWIDTH-2] < rs2_i[DWIDTH-2]) ? 1'b1 : 1'b0;
            end

            `ALU_SLTU: begin
                res_o = (rs1_i < rs2_i) ? 1'b1 : 1'b0;
            end

            default: begin
                // NOP
                if (!rs1_i && !rs2_i) begin
                    res_o = {DWIDTH{1'b0}};
                end
                // Logic for U_TYPE_LUI ALU operation
                else begin
                    res_o = rs2_i;
                end
            end
        endcase
    end



endmodule : alu
