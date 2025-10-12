// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vigen_tb__Syms.h"


void Vigen_tb___024root__trace_chg_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vigen_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_chg_0\n"); );
    // Init
    Vigen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vigen_tb___024root*>(voidSelf);
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vigen_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vigen_tb___024root__trace_chg_0_sub_0(Vigen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_chg_0_sub_0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.igen_tb__DOT__opcode),7);
        bufp->chgIData(oldp+1,(vlSelfRef.igen_tb__DOT__insn),32);
        bufp->chgSData(oldp+2,((vlSelfRef.igen_tb__DOT__insn 
                                >> 0x14U)),12);
        bufp->chgSData(oldp+3,(((0xfe0U & (vlSelfRef.igen_tb__DOT__insn 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelfRef.igen_tb__DOT__insn 
                                            >> 7U)))),12);
        bufp->chgIData(oldp+4,((vlSelfRef.igen_tb__DOT__insn 
                                >> 0xcU)),20);
        bufp->chgIData(oldp+5,(((0x80000U & (vlSelfRef.igen_tb__DOT__insn 
                                             >> 0xcU)) 
                                | ((0x7f800U & (vlSelfRef.igen_tb__DOT__insn 
                                                >> 1U)) 
                                   | ((0x400U & (vlSelfRef.igen_tb__DOT__insn 
                                                 >> 0xaU)) 
                                      | (0x3ffU & (vlSelfRef.igen_tb__DOT__insn 
                                                   >> 0x15U)))))),20);
    }
    bufp->chgBit(oldp+6,(vlSelfRef.igen_tb__DOT__clk));
    bufp->chgIData(oldp+7,(vlSelfRef.igen_tb__DOT__imm),32);
    bufp->chgSData(oldp+8,(vlSelfRef.igen_tb__DOT__dut__DOT__btype_imm),13);
}

void Vigen_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root__trace_cleanup\n"); );
    // Init
    Vigen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vigen_tb___024root*>(voidSelf);
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
