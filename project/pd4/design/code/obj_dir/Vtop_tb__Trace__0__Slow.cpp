// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP____024unit__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+70,0,"insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("hut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"c_pcsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"c_immsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"c_regwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"c_rs1sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"c_rs2sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"c_memren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"c_memwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"c_wbsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"c_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"f_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"f_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"d_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"d_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"d_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"d_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"d_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"d_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"igen_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"r_rs1data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"r_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"e_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"e_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"e_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"e_brtaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"m_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"m_memren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"m_size_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"m_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"wb_nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"pcsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"immsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"regwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rs1sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rs2sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"memren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"memwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"wbsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"alusel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"rs1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"shamt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("e_alu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+43,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"alusel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"brtaken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"breq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"brlt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"breq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"brlt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+75,0,"BASEADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("igen1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+77,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+74,0,"memren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"write_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+66,0,"program_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_file1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"datawb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"regwren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"rs1data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rs2data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_wb1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"memory_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"wbsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+55,0,"brtaken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"pcsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"writeback_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP____024unit__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+79,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"jtype_insn__Vstatic__imm_jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+73,(0x20U),32);
    bufp->fullBit(oldp+74,(1U));
    bufp->fullIData(oldp+75,(0x1000000U),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__insn_o),32);
    bufp->fullIData(oldp+77,(0x1000000U),32);
    bufp->fullIData(oldp+78,(0x100000U),32);
    bufp->fullIData(oldp+79,(0U),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP____024unit.__PVT__jtype_insn__Vstatic__imm_jtype),21);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[31]),32);
    bufp->fullBit(oldp+33,(((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                   >> 6U)) && ((1U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 4U))) 
                                                   && ((8U 
                                                        & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
    bufp->fullBit(oldp+34,(vlSelfRef.top_tb__DOT__hut__DOT__c_immsel));
    bufp->fullBit(oldp+35,(vlSelfRef.top_tb__DOT__hut__DOT__c_regwren));
    bufp->fullBit(oldp+36,(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel));
    bufp->fullBit(oldp+37,(((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                             ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))
                             : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 4U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
    bufp->fullBit(oldp+38,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 5U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
    bufp->fullBit(oldp+39,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
    bufp->fullCData(oldp+40,(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel),2);
    bufp->fullCData(oldp+41,(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel),4);
    bufp->fullIData(oldp+42,(vlSelfRef.top_tb__DOT__hut__DOT__f_insn),32);
    bufp->fullCData(oldp+43,((0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)),7);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 7U))),5);
    bufp->fullCData(oldp+45,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs1),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+47,((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+48,((7U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+49,((0x1fU & vlSelfRef.top_tb__DOT__hut__DOT__d_imm)),5);
    bufp->fullIData(oldp+50,(vlSelfRef.top_tb__DOT__hut__DOT__d_imm),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs1),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs2),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top_tb__DOT__hut__DOT__e_res),32);
    bufp->fullBit(oldp+55,(((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                            & ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                    : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                : ((~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 0xdU)) & 
                                   ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                     : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq)))))));
    bufp->fullIData(oldp+56,(vlSelfRef.top_tb__DOT__hut__DOT__m_data_o),32);
    bufp->fullCData(oldp+57,((3U & (((0x23U == (0x7fU 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                     | (3U == (0x7fU 
                                               & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                     ? (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)
                                     : (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                        >> 0xcU)))),2);
    bufp->fullCData(oldp+58,(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3),3);
    bufp->fullIData(oldp+59,(((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                               ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                               : ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                                   ? vlSelfRef.top_tb__DOT__hut__DOT__m_data_o
                                   : ((2U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)
                                       : ((3U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                                           ? vlSelfRef.top_tb__DOT__hut__DOT__d_imm
                                           : 0U))))),32);
    bufp->fullIData(oldp+60,(((((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 6U)) && (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 4U))) 
                                                       && ((8U 
                                                            & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                                            : 
                                                           ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 2U)) 
                                                            && ((1U 
                                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))) 
                               | ((0x63U == (0x7fU 
                                             & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                  & ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                      ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                          ? (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                          : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                      : ((~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                             >> 0xdU)) 
                                         & ((0x1000U 
                                             & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                             ? (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                             : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))))))
                               ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                               : ((IData)(4U) + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))),32);
    bufp->fullBit(oldp+61,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq));
    bufp->fullBit(oldp+62,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt));
    bufp->fullIData(oldp+63,((vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                              - (IData)(0x1000000U))),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top_tb__DOT__hut__DOT__f_pc),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc),32);
    bufp->fullIData(oldp+66,((vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc 
                              - (IData)(0x1000000U))),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+68,(vlSelfRef.top_tb__DOT__clk));
    bufp->fullBit(oldp+69,(vlSelfRef.top_tb__DOT__rst));
    bufp->fullIData(oldp+70,(vlSelfRef.top_tb__DOT__insn),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top_tb__DOT__index),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                             [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]),32);
}
