// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__insn),32);
        bufp->chgCData(oldp+1,((7U & (vlSelfRef.top_tb__DOT__insn 
                                      >> 0xcU))),3);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__pc),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP____024unit.jtype_insn__Vstatic__imm_jtype),21);
        bufp->chgIData(oldp+4,(vlSymsp->TOP____024unit.check_control_signal__Vstatic__unnamedblk1__DOT__control_fail),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+5,(vlSelfRef.top_tb__DOT__imm),32);
        bufp->chgCData(oldp+6,(vlSelfRef.top_tb__DOT__funct7),7);
        bufp->chgBit(oldp+7,(vlSelfRef.top_tb__DOT__pcsel));
        bufp->chgBit(oldp+8,(vlSelfRef.top_tb__DOT__immsel));
        bufp->chgBit(oldp+9,(vlSelfRef.top_tb__DOT__regwren));
        bufp->chgBit(oldp+10,(vlSelfRef.top_tb__DOT__rs1sel));
        bufp->chgBit(oldp+11,(vlSelfRef.top_tb__DOT__rs2sel));
        bufp->chgBit(oldp+12,(vlSelfRef.top_tb__DOT__memren));
        bufp->chgBit(oldp+13,(vlSelfRef.top_tb__DOT__memwren));
        bufp->chgCData(oldp+14,(vlSelfRef.top_tb__DOT__wbsel),2);
        bufp->chgCData(oldp+15,(vlSelfRef.top_tb__DOT__alusel),4);
        bufp->chgCData(oldp+16,((((((IData)(vlSelfRef.top_tb__DOT__pcsel) 
                                    << 6U) | ((IData)(vlSelfRef.top_tb__DOT__immsel) 
                                              << 5U)) 
                                  | (((IData)(vlSelfRef.top_tb__DOT__regwren) 
                                      << 4U) | ((IData)(vlSelfRef.top_tb__DOT__rs1sel) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.top_tb__DOT__rs2sel) 
                                     << 2U) | (((IData)(vlSelfRef.top_tb__DOT__memren) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.top_tb__DOT__memwren))))),7);
    }
    bufp->chgBit(oldp+17,(vlSelfRef.top_tb__DOT__clk));
    bufp->chgCData(oldp+18,(vlSelfRef.top_tb__DOT__opcode),7);
    bufp->chgCData(oldp+19,((((0x23U != (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                              & (0x63U != (IData)(vlSelfRef.top_tb__DOT__opcode)))
                              ? (0x1fU & (vlSelfRef.top_tb__DOT__insn 
                                          >> 7U)) : 0U)),5);
    bufp->chgCData(oldp+20,((((0x17U != (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                              & ((0x37U != (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                                 & (0x6fU != (IData)(vlSelfRef.top_tb__DOT__opcode))))
                              ? (0x1fU & (vlSelfRef.top_tb__DOT__insn 
                                          >> 0xfU))
                              : 0U)),5);
    bufp->chgCData(oldp+21,((((0x33U == (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                              | ((0x23U == (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                                 | (0x63U == (IData)(vlSelfRef.top_tb__DOT__opcode))))
                              ? (0x1fU & (vlSelfRef.top_tb__DOT__insn 
                                          >> 0x14U))
                              : 0U)),5);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
