// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clkg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"c_pcsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"c_immsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"c_regwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"c_rs1sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"c_rs2sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"c_memren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"c_memwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"c_wbsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"c_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("ctrl_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"f_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"f_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"f_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"f_reg_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"d_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"d_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"d_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"d_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"d_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"d_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"igen_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"r_rs1data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"r_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"d_reg_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"d_reg_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"d_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"d_reg_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"d_reg_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"d_reg_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"d_reg_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"d_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"d_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"d_reg_rs1data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"d_reg_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"e_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"e_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"e_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"e_brtaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"e_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"e_reg_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+62,0,"e_reg_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"e_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"e_reg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"e_reg_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"e_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+67,0,"e_reg_brtaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"m_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"insn_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"m_size_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"m_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"m_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"m_reg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"m_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"m_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"m_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"wb_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"wb_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+121,0,"is_program",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"pcsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"immsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"regwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rs1sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rs2sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"memren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"memwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"wbsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"alusel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rs1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rs2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"shamt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("e_alu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+53,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"alusel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"brtaken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"breq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"brlt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+51,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"breq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"brlt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+153,0,"BASEADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("igen1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+155,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+82,0,"memren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"memwren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"insn_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"program_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("temp_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 14; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+15,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+85,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_file1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"datawb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"regwren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"rs1data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"rs2data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+87+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_wb1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+151,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+71,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"memory_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"wbsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"writeback_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+122,0,"pattern_dump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 767,0);
    tracep->pushPrefix("pattern_dump_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+146,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+157,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+151,(0x20U),32);
    bufp->fullBit(oldp+152,(1U));
    bufp->fullIData(oldp+153,(0x1000000U),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__insn_o),32);
    bufp->fullIData(oldp+155,(0x1000000U),32);
    bufp->fullIData(oldp+156,(0x100000U),32);
    bufp->fullIData(oldp+157,(0U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i),32);
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__reset));
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__clkg__DOT__counter),32);
    bufp->fullBit(oldp+18,(((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                   >> 6U)) && ((1U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 4U))) 
                                                   && ((8U 
                                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel));
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren));
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel));
    bufp->fullBit(oldp+22,(((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                             ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))
                             : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                       >> 4U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
    bufp->fullBit(oldp+23,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 5U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
    bufp->fullBit(oldp+24,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
    bufp->fullCData(oldp+25,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel),2);
    bufp->fullCData(oldp+26,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel),4);
    bufp->fullSData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[0]),13);
    bufp->fullSData(oldp+28,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[1]),13);
    bufp->fullSData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[2]),13);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn),32);
    bufp->fullCData(oldp+35,((0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)),7);
    bufp->fullCData(oldp+36,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd),5);
    bufp->fullCData(oldp+37,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),5);
    bufp->fullCData(oldp+38,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2),5);
    bufp->fullCData(oldp+39,((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+40,((7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+41,((0x1fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)),5);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_insn),32);
    bufp->fullCData(oldp+46,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode),7);
    bufp->fullCData(oldp+47,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rd),5);
    bufp->fullCData(oldp+48,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1),5);
    bufp->fullCData(oldp+49,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2),5);
    bufp->fullCData(oldp+50,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct7),7);
    bufp->fullCData(oldp+51,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3),3);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1data),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res),32);
    bufp->fullBit(oldp+59,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken));
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc),32);
    bufp->fullCData(oldp+61,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode),7);
    bufp->fullCData(oldp+62,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3),3);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_imm),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data),32);
    bufp->fullCData(oldp+66,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd),5);
    bufp->fullBit(oldp+67,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_brtaken));
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o),32);
    bufp->fullCData(oldp+69,((3U & (((0x23U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode)) 
                                     | (3U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode)))
                                     ? (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3)
                                     : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3)))),2);
    bufp->fullCData(oldp+70,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3),3);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_pc),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_res),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_data),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_imm),32);
    bufp->fullCData(oldp+75,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_rd),5);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_data),32);
    bufp->fullCData(oldp+78,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_rd),5);
    bufp->fullCData(oldp+79,((0xfU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                      [0U] >> 9U))),4);
    bufp->fullBit(oldp+80,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq));
    bufp->fullBit(oldp+81,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt));
    bufp->fullBit(oldp+82,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                  [1U] >> 5U))));
    bufp->fullBit(oldp+83,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                  [1U] >> 6U))));
    bufp->fullIData(oldp+84,((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc 
                              - (IData)(0x1000000U))),32);
    bufp->fullIData(oldp+85,((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res 
                              - (IData)(0x1000000U))),32);
    bufp->fullBit(oldp+86,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                  [2U] >> 2U))));
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[10]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[11]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[12]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[13]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[14]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[15]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[16]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[17]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[18]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[19]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[20]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[21]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[22]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[23]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[24]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[25]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[26]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[27]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[28]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[29]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[30]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[31]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+120,((3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                     [2U] >> 7U))),2);
    bufp->fullBit(oldp+121,(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program));
    bufp->fullWData(oldp+122,(vlSelfRef.top__DOT__genblk2__DOT__pattern_dump),768);
    bufp->fullWData(oldp+146,(vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage),128);
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__clock));
}
