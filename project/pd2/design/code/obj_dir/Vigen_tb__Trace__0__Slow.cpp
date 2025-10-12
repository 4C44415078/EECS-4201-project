// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vigen_tb__Syms.h"


VL_ATTR_COLD void Vigen_tb___024root__trace_init_sub__TOP____024unit__0(Vigen_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vigen_tb___024root__trace_init_sub__TOP__0(Vigen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_init_sub__TOP__0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vigen_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("igen_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+2,0,"insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"itype_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+4,0,"stype_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+9,0,"btype_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+5,0,"utype_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"jtype_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vigen_tb___024root__trace_init_sub__TOP____024unit__0(Vigen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+11,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"jtype_insn__Vstatic__imm_jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_init_top(Vigen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_init_top\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vigen_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vigen_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vigen_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vigen_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vigen_tb___024root__trace_register(Vigen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_register\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vigen_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vigen_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vigen_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vigen_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_const_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vigen_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_const_0\n"); );
    // Init
    Vigen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vigen_tb___024root*>(voidSelf);
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vigen_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_const_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_const_0_sub_0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+10,(0x20U),32);
    bufp->fullIData(oldp+11,(0U),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP____024unit.__PVT__jtype_insn__Vstatic__imm_jtype),21);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_full_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vigen_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_full_0\n"); );
    // Init
    Vigen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vigen_tb___024root*>(voidSelf);
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vigen_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vigen_tb___024root__trace_full_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_full_0_sub_0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.igen_tb__DOT__opcode),7);
    bufp->fullIData(oldp+2,(vlSelfRef.igen_tb__DOT__insn),32);
    bufp->fullSData(oldp+3,((vlSelfRef.igen_tb__DOT__insn 
                             >> 0x14U)),12);
    bufp->fullSData(oldp+4,(((0xfe0U & (vlSelfRef.igen_tb__DOT__insn 
                                        >> 0x14U)) 
                             | (0x1fU & (vlSelfRef.igen_tb__DOT__insn 
                                         >> 7U)))),12);
    bufp->fullIData(oldp+5,((vlSelfRef.igen_tb__DOT__insn 
                             >> 0xcU)),20);
    bufp->fullIData(oldp+6,(((0x80000U & (vlSelfRef.igen_tb__DOT__insn 
                                          >> 0xcU)) 
                             | ((0x7f800U & (vlSelfRef.igen_tb__DOT__insn 
                                             >> 1U)) 
                                | ((0x400U & (vlSelfRef.igen_tb__DOT__insn 
                                              >> 0xaU)) 
                                   | (0x3ffU & (vlSelfRef.igen_tb__DOT__insn 
                                                >> 0x15U)))))),20);
    bufp->fullBit(oldp+7,(vlSelfRef.igen_tb__DOT__clk));
    bufp->fullIData(oldp+8,(vlSelfRef.igen_tb__DOT__imm),32);
    bufp->fullSData(oldp+9,(vlSelfRef.igen_tb__DOT__dut__DOT__btype_imm),13);
}
