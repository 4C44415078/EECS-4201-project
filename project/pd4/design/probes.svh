// ----  Probes  ----
`define PROBE_F_PC          f_pc
`define PROBE_F_INSN        f_insn 

`define PROBE_D_PC          d_pc_o
`define PROBE_D_OPCODE      d_opcode
`define PROBE_D_RD          d_rd
`define PROBE_D_FUNCT3      d_funct3
`define PROBE_D_RS1         d_rs1
`define PROBE_D_RS2         d_rs2
`define PROBE_D_FUNCT7      d_funct7
`define PROBE_D_IMM         d_imm
`define PROBE_D_SHAMT       d_shamt

`define PROBE_R_WRITE_ENABLE      r_regwren
`define PROBE_R_WRITE_DESTINATION r_rd
`define PROBE_R_WRITE_DATA        r_rddata
`define PROBE_R_READ_RS1          r_rs1
`define PROBE_R_READ_RS2          r_rs2
`define PROBE_R_READ_RS1_DATA     r_rs1data
`define PROBE_R_READ_RS2_DATA     r_rs2data

`define PROBE_E_PC                e_pc
`define PROBE_E_ALU_RES           e_res
`define PROBE_E_BR_TAKEN          e_brtaken

`define PROBE_M_PC                m_pc
`define PROBE_M_ADDRESS           m_addr
`define PROBE_M_SIZE_ENCODED      wb_wbsel
`define PROBE_M_DATA              m_data_o

`define PROBE_W_PC                wb_pc
`define PROBE_W_ENABLE            c_regwren
`define PROBE_W_DESTINATION       r_rd
`define PROBE_W_DATA              wb_data

// ----  Probes  ----

// ----  Top module  ----
`define TOP_MODULE  pd4 
// ----  Top module  ----
