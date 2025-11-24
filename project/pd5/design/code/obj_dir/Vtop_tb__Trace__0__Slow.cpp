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
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+12,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("hut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"c_pcsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"c_immsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"c_regwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"c_rs1sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"c_rs2sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"c_memren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"c_memwren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"c_wbsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"c_alusel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("ctrl_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+62+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+111,0,"f_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"f_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"f_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"f_reg_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+68,0,"d_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"d_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"d_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"d_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+72,0,"d_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"d_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"d_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"d_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"igen_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"r_rs1data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"r_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"d_reg_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"d_reg_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+77,0,"d_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"d_reg_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"d_reg_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"d_reg_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+81,0,"d_reg_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+82,0,"d_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"d_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"d_reg_rs1data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"d_reg_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"e_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"e_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"e_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"e_brtaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"e_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"e_reg_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+92,0,"e_reg_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"e_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"e_reg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"e_reg_rs2data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"e_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+97,0,"e_reg_brtaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"m_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"insn_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"m_size_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"m_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"m_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"m_reg_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"m_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"m_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"wb_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"wb_reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+102,0,"is_program",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+66,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+71,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+72,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"pcsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"immsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"regwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"rs1sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"rs2sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"memren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"memwren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"wbsel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"alusel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+68,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"rs1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"rs2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"funct7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+72,0,"funct3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"shamt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("e_alu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+76,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+82,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"alusel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"brtaken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"breq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"brlt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+81,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"breq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"brlt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+121,0,"BASEADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("igen1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+67,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+75,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+123,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"memren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"memwren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"insn_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"program_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("temp_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+108,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_file1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"datawb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"regwren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"rs1data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"rs2data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_wb1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+119,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"memory_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"wbsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"writeback_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->declBus(c+125,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullIData(oldp+119,(0x20U),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top_tb__DOT__hut__DOT__d_pc),32);
    bufp->fullIData(oldp+121,(0x1000000U),32);
    bufp->fullIData(oldp+122,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__insn_o),32);
    bufp->fullIData(oldp+123,(0x1000000U),32);
    bufp->fullIData(oldp+124,(0x100000U),32);
    bufp->fullIData(oldp+125,(0U),32);
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
    bufp->fullIData(oldp+1,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i),32);
    bufp->fullBit(oldp+11,(vlSelfRef.top_tb__DOT__rst));
    bufp->fullIData(oldp+12,(vlSelfRef.top_tb__DOT__counter),32);
    bufp->fullIData(oldp+13,(((IData)(vlSelfRef.top_tb__DOT__rst)
                               ? 0U : vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)),32);
    bufp->fullBit(oldp+14,((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst)))));
    bufp->fullIData(oldp+15,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_pc),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_res),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_data),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_imm),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[1]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[3]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[4]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[5]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[6]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[7]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[8]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[9]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[10]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[11]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[12]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[13]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[14]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[15]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[16]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[17]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[18]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[19]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[20]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[21]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[22]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[23]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[24]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[25]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[26]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[27]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[28]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[29]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[30]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[31]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+53,(((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                   >> 6U)) && ((1U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                   >> 5U)) 
                                               && ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                        >> 4U))) 
                                                   && ((8U 
                                                        & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
    bufp->fullBit(oldp+54,(vlSelfRef.top_tb__DOT__hut__DOT__c_immsel));
    bufp->fullBit(oldp+55,(vlSelfRef.top_tb__DOT__hut__DOT__c_regwren));
    bufp->fullBit(oldp+56,(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel));
    bufp->fullBit(oldp+57,(((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)
                             ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn))))))
                             : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                       >> 4U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
    bufp->fullBit(oldp+58,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                        >> 5U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
    bufp->fullBit(oldp+59,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                      >> 6U))) && (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 4U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 3U))) 
                                                           && ((1U 
                                                                & (~ 
                                                                   (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                    >> 2U))) 
                                                               && ((1U 
                                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                       >> 1U)) 
                                                                   && (1U 
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
    bufp->fullCData(oldp+60,(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel),2);
    bufp->fullCData(oldp+61,(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel),4);
    bufp->fullSData(oldp+62,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[0]),13);
    bufp->fullSData(oldp+63,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[1]),13);
    bufp->fullSData(oldp+64,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[2]),13);
    bufp->fullIData(oldp+65,(vlSelfRef.top_tb__DOT__hut__DOT__f_reg_pc),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn),32);
    bufp->fullCData(oldp+67,((0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)),7);
    bufp->fullCData(oldp+68,((((0x23U != (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)) 
                               & (0x63U != (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))
                               ? (0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+69,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs1),5);
    bufp->fullCData(oldp+70,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs2),5);
    bufp->fullCData(oldp+71,((vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+72,((7U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+73,((0x1fU & vlSelfRef.top_tb__DOT__hut__DOT__d_imm)),5);
    bufp->fullIData(oldp+74,(vlSelfRef.top_tb__DOT__hut__DOT__d_imm),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn),32);
    bufp->fullCData(oldp+76,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode),7);
    bufp->fullCData(oldp+77,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rd),5);
    bufp->fullCData(oldp+78,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs1),5);
    bufp->fullCData(oldp+79,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs2),5);
    bufp->fullCData(oldp+80,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct7),7);
    bufp->fullCData(oldp+81,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3),3);
    bufp->fullIData(oldp+82,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_imm),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_pc),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs1data),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs2data),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs1),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs2),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top_tb__DOT__hut__DOT__e_res),32);
    bufp->fullBit(oldp+89,(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken));
    bufp->fullIData(oldp+90,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_pc),32);
    bufp->fullCData(oldp+91,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode),7);
    bufp->fullCData(oldp+92,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_funct3),3);
    bufp->fullIData(oldp+93,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_imm),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_rs2data),32);
    bufp->fullCData(oldp+96,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_rd),5);
    bufp->fullBit(oldp+97,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_brtaken));
    bufp->fullCData(oldp+98,((3U & (((0x23U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode)) 
                                     | (3U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode)))
                                     ? (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)
                                     : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_funct3)))),2);
    bufp->fullCData(oldp+99,(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3),3);
    bufp->fullIData(oldp+100,(vlSelfRef.top_tb__DOT__hut__DOT__wb_reg_data),32);
    bufp->fullCData(oldp+101,(vlSelfRef.top_tb__DOT__hut__DOT__wb_reg_rd),5);
    bufp->fullBit(oldp+102,(vlSelfRef.top_tb__DOT__hut__DOT__is_program));
    bufp->fullCData(oldp+103,((0xfU & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                       [0U] >> 9U))),4);
    bufp->fullBit(oldp+104,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq));
    bufp->fullBit(oldp+105,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt));
    bufp->fullBit(oldp+106,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                   [1U] >> 5U))));
    bufp->fullBit(oldp+107,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                   [1U] >> 6U))));
    bufp->fullIData(oldp+108,((vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res 
                               - (IData)(0x1000000U))),32);
    bufp->fullBit(oldp+109,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                   [2U] >> 2U))));
    bufp->fullCData(oldp+110,((3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                     [2U] >> 7U))),2);
    bufp->fullIData(oldp+111,(vlSelfRef.top_tb__DOT__hut__DOT__f_pc),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top_tb__DOT__hut__DOT__f_insn),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top_tb__DOT__hut__DOT__m_data_o),32);
    bufp->fullIData(oldp+114,((vlSelfRef.top_tb__DOT__hut__DOT__f_pc 
                               - (IData)(0x1000000U))),32);
    bufp->fullBit(oldp+115,(vlSelfRef.top_tb__DOT__clk));
    bufp->fullIData(oldp+116,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                              [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                              [vlSelfRef.top_tb__DOT__hut__DOT__d_rs2]),32);
    bufp->fullIData(oldp+118,(((0U == (3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                             [2U] >> 7U)))
                                ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_res
                                : ((1U == (3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                 [2U] 
                                                 >> 7U)))
                                    ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_data
                                    : ((2U == (3U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                [2U] 
                                                >> 7U)))
                                        ? ((IData)(4U) 
                                           + vlSelfRef.top_tb__DOT__hut__DOT__m_reg_pc)
                                        : ((3U == (3U 
                                                   & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                      [2U] 
                                                      >> 7U)))
                                            ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_imm
                                            : 0U))))),32);
}
