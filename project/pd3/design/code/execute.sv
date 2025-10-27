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
    // ADDED THESE INPUTS TO AID IN FUNCTIONALITY
    input logic [6:0] opcode_i,
    input logic [DWIDTH-1:0] imm_i,
    input logic [3:0] alusel_i,
    // ------------------------------------------
    output logic [DWIDTH-1:0] res_o,
    output logic brtaken_o
);

    /*
     * Process definitions to be filled by
     * student below...
     */

    // Signals for branch control signals
    logic breq, brlt;

    // Instantiation of branch control module
    branch_control #(
        .DWIDTH(DWIDTH)
    ) bc (
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
                // Branch is taken if breq = 1 for a BEQ instruction.
                `F3_BEQ: begin
                    brtaken_o = breq;
                end
                // Branch is taken if breq = 0 for a BNE instruction (inverted logic).
                `F3_BNE: begin
                    brtaken_o = !breq;
                end
                // Branch is taken if brlt = 1 for a BLT instruction.
                `F3_BLT, `F3_BLTU: begin
                    brtaken_o = brlt;
                end
                // Branch is taken if breq and brlt = 0 for a BGE instruction (inverted logic).
                `F3_BGE, `F3_BGEU: begin
                    brtaken_o = !(breq && brlt);
                end
                // Default if not a branch instruction that branch is not taken.
                default: begin
                    brtaken_o = 1'b0;
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
                // If its a branch instruction sum the pc with the immediate from igen (offset).
                if (opcode_i == `B_TYPE) begin
                    res_o = pc_i + imm_i;
                end
                else begin
                    res_o = rs1_i + rs2_i;
                end
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
                res_o = rs1_i >>> rs2_i;
            end

            `ALU_SLT: begin
                // Similar to my branch logic, check sign bit, if equal check remaining bits.
                res_o[0] = (rs1_i[DWIDTH-1] > rs2_i[DWIDTH-1]) ? 1'b1 :
                    (rs1_i[DWIDTH-1] < rs2_i[DWIDTH-1]) ? 1'b0 :
                    (rs1_i[DWIDTH-2] < rs2_i[DWIDTH-2]) ? 1'b1 : 1'b0;
                res_o[DWIDTH-1:1] = {DWIDTH-1{1'b0}};
            end

            `ALU_SLTU: begin
                // Check the unsigned comparison, then zero-extend the output.
                res_o[0] = (rs1_i < rs2_i) ? 1'b1 : 1'b0;
                res_o[DWIDTH-1:1] = {DWIDTH-1{1'b0}};
            end

            default: begin
                // LUI instruction computation (igen handles shift)
                if (opcode_i == `U_TYPE_LUI) begin
                    res_o = rs2_i;
                end
                // NOP for future pipeline stalling
                else begin
                    res_o = {DWIDTH{1'b0}};
                end
            end
        endcase
    end

endmodule : alu
