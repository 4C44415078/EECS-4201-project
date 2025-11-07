// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__d_pc_o;
    top__DOT__dut__DOT__core__DOT__d_pc_o = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__e_rs1;
    top__DOT__dut__DOT__core__DOT__e_rs1 = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__e_rs2;
    top__DOT__dut__DOT__core__DOT__e_rs2 = 0;
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelfRef.top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0U;
    if (VL_UNLIKELY(((0x73U == vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/design/code/pd4.sv", 283, "");
    }
    if ((0x8067U == vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program = 1U;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program) 
                      & (0x1100000U == vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                         [2U]))))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/design/code/pd4.sv", 286, "");
    }
    if (vlSelfRef.top__DOT__reset) {
        __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = 0x1000000U;
        __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0 = 1U;
    } else {
        __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
            = ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc);
        if (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren) 
             & (0U != (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                >> 7U))))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 
                = ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_wbsel))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res
                    : ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_wbsel))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o
                        : ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_wbsel))
                            ? vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc
                            : ((3U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_wbsel))
                                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__igen_imm
                                : 0U))));
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 
                = (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                            >> 7U));
            __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 1U;
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
        = __Vdly__top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xaU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xbU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xcU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xdU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xeU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xfU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x10U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x11U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x12U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x13U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x14U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x15U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x16U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x17U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x18U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x19U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1aU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1bU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1cU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1dU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1eU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1fU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2U] = 0x1100000U;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[__VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33;
    }
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_memwren) {
        if (((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res) 
             & (0x1020000U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 
                    = (0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 1U;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 
                    = (0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
            } else if ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 
                    = (0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                                >> 0x10U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 
                    = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 
                    = (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                       >> 0x18U);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 
                    = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
            } else {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 
                    = (0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                                >> 0x10U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 
                    = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 
                    = (vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
                       >> 0x18U);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 
                    = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res));
            }
        }
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10;
    }
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelfRef.top__DOT__clkg__DOT__counter);
    vlSelfRef.top__DOT__reset = VL_GTS_III(32, 5U, vlSelfRef.top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY(((0xc350U == vlSelfRef.top__DOT__clkg__DOT__counter)))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/clockgen.sv", 26, "");
    }
    top__DOT__dut__DOT__core__DOT__d_pc_o = vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
        [(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                   >> 0x14U))];
    top__DOT__dut__DOT__core__DOT__e_rs2 = (((0x40U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                              ? ((1U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 5U)) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                          >> 4U))) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                              >> 3U))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                  >> 2U))) 
                                                             && ((1U 
                                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                     >> 1U)) 
                                                                 && (1U 
                                                                     & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))))
                                              : ((1U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 5U)) 
                                                 && ((1U 
                                                      & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                         >> 4U)) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                              >> 3U))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                  >> 2U))) 
                                                             && ((1U 
                                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                     >> 1U)) 
                                                                 && (1U 
                                                                     & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))))))
                                             ? vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                                            [(0x1fU 
                                              & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 0x14U))]
                                             : vlSelfRef.top__DOT__dut__DOT__core__DOT__igen_imm);
    top__DOT__dut__DOT__core__DOT__e_rs1 = ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel)
                                             ? vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                                            [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1]
                                             : vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc);
    vlSelfRef.top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
    if ((8U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res = 0U;
        } else if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res = 0U;
        } else if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (top__DOT__dut__DOT__core__DOT__e_rs1 
                   < top__DOT__dut__DOT__core__DOT__e_rs2);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0xfffffffeU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res) 
                   | (((top__DOT__dut__DOT__core__DOT__e_rs1 
                        >> 0x1fU) > (top__DOT__dut__DOT__core__DOT__e_rs2 
                                     >> 0x1fU)) | (
                                                   ((top__DOT__dut__DOT__core__DOT__e_rs1 
                                                     >> 0x1fU) 
                                                    >= 
                                                    (top__DOT__dut__DOT__core__DOT__e_rs2 
                                                     >> 0x1fU)) 
                                                   & ((1U 
                                                       & (top__DOT__dut__DOT__core__DOT__e_rs1 
                                                          >> 0x1eU)) 
                                                      < 
                                                      (1U 
                                                       & (top__DOT__dut__DOT__core__DOT__e_rs2 
                                                          >> 0x1eU))))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
            = ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                ? ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? VL_SHIFTR_III(32,32,32, top__DOT__dut__DOT__core__DOT__e_rs1, top__DOT__dut__DOT__core__DOT__e_rs2)
                        : VL_SHIFTR_III(32,32,32, top__DOT__dut__DOT__core__DOT__e_rs1, top__DOT__dut__DOT__core__DOT__e_rs2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? VL_SHIFTL_III(32,32,32, top__DOT__dut__DOT__core__DOT__e_rs1, top__DOT__dut__DOT__core__DOT__e_rs2)
                        : (top__DOT__dut__DOT__core__DOT__e_rs1 
                           ^ top__DOT__dut__DOT__core__DOT__e_rs2)))
                : ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? (top__DOT__dut__DOT__core__DOT__e_rs1 
                           | top__DOT__dut__DOT__core__DOT__e_rs2)
                        : (top__DOT__dut__DOT__core__DOT__e_rs1 
                           & top__DOT__dut__DOT__core__DOT__e_rs2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? (top__DOT__dut__DOT__core__DOT__e_rs1 
                           - top__DOT__dut__DOT__core__DOT__e_rs2)
                        : ((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                            ? (top__DOT__dut__DOT__core__DOT__d_pc_o 
                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__igen_imm)
                            : (top__DOT__dut__DOT__core__DOT__e_rs1 
                               + top__DOT__dut__DOT__core__DOT__e_rs2)))));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o = 0U;
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_memwren) {
        if (((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res) 
             & (0x1020000U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                = ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                    ? ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                                 ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                                        >> 7U)))) 
                                         << 0x10U) 
                                        | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                            << 8U) 
                                           | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                           [(0x1ffffU 
                                             & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                                     : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                         << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                        [(0x1ffffU 
                                          & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                                 : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)] 
                                                        >> 7U)))) 
                                         << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                        [(0x1ffffU 
                                          & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])
                                     : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                    [(0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])))
                    : ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                            ? 0U : (((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                      << 0x18U) | (
                                                   vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                                   << 0x10U)) 
                                    | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                        << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                       [(0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])))
                        : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                            ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                                   >> 7U)))) 
                                    << 0x10U) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                                  << 8U) 
                                                 | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                 [(0x1ffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                                : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                    [(0x1ffffU & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                    << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                   [(0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                            : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)] 
                                                   >> 7U)))) 
                                    << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                   [(0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])
                                : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                               [(0x1ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))));
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o = 0U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/test_pd.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/test_pd.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
