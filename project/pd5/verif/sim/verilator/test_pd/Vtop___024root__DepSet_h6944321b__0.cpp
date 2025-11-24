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
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
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
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelfRef.top__DOT__clkg__DOT__counter;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 0U;
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = 0x1000000U;
        __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v0 = 1U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_data = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_res = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_imm = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_pc = 0U;
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
            = ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc);
        if (((vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
              [2U] >> 2U) & (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_rd)))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_data;
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_rd;
            __VdlySet__top__DOT__dut__DOT__core__DOT__register_file1__DOT__x__v33 = 1U;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_data 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_res 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_imm 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_imm;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_pc 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc;
    }
    if ((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
         [1U])) {
        if (((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res) 
             & (0x1100000U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 
                    = (0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v0 = 1U;
            } else if ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 
                    = (0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v1 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v2 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
            } else if ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 
                    = (0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v3 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v4 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                                >> 0x10U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v5 
                    = (0xfffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 
                    = (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                       >> 0x18U);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v6 
                    = (0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
            } else {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 
                    = (0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res);
                __VdlySet__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v7 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                                >> 8U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v8 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                                >> 0x10U));
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v9 
                    = (0xfffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 
                    = (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
                       >> 0x18U);
                __VdlyDim0__top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory__v10 
                    = (0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res));
            }
        }
    }
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
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/verif/tests/clockgen.sv", 26, "");
    }
    vlSelfRef.top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
}

extern const VlWide<24>/*767:0*/ Vtop__ConstPool__CONST_hda9269f3_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__msg);
    IData/*31:0*/ __VdfgRegularize_h9a3b41c9_0_4;
    __VdfgRegularize_h9a3b41c9_0_4 = 0;
    IData/*31:0*/ __VdfgRegularize_h9a3b41c9_0_5;
    __VdfgRegularize_h9a3b41c9_0_5 = 0;
    SData/*12:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v0;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v0 = 0;
    SData/*12:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v1;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v1 = 0;
    SData/*12:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v2;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v2 = 0;
    // Body
    if (VL_UNLIKELY(((0x73U == vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/design/code/pd5.sv", 380, "");
    }
    if ((0x8067U == vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program = 1U;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program) 
                      & (0x1100000U == vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                         [2U]))))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/design/code/pd5.sv", 383, "");
    }
    vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct = 1U;
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
    } else {
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][1U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][2U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][3U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[1U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[2U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[3U];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U];
        if (((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc 
              != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__msg
                          ,"F stage mismatch: expected PC=%x, INSN=%x, got PC=%x, INSN=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn);
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][4U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][5U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][6U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][7U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[4U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[5U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[6U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[7U];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode 
            = (0x7fU & vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U]);
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd 
            = (0x1fU & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                        >> 7U));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1 
            = (0x1fU & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                        >> 0xcU));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2 
            = (0x1fU & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                        >> 0x11U));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3 
            = (7U & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                     >> 0x16U));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7 
            = (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
               >> 0x19U);
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U];
        if (((((((((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc 
                    != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc) 
                   | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode) 
                      != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))) 
                  | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd) 
                     != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd))) 
                 | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1) 
                    != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1))) 
                | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2) 
                   != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2))) 
               | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3) 
                  != (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                            >> 0xcU)))) | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7) 
                                           != (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                               >> 0x19U))) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__msg
                          ,"D stage mismatch: expected PC=%x, OPCODE=%x, RD=%x, RS1=%x, RS2=%x, FUNCT3=%x, FUNCT7=%x, IMM=%x, got PC=%x, OPCODE=%x, RD=%x, RS1=%x, RS2=%x, FUNCT3=%x, FUNCT7=%x, IMM=%x ",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc,
                          7,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode),
                          5,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd,
                          5,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1),
                          5,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2,
                          3,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3),
                          7,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc,
                          7,(0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn),
                          5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd),
                          5,vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1,
                          5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2),
                          3,(7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                   >> 0xcU)),7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 0x19U),
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm);
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][8U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][9U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][0xaU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][0xbU];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[8U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[9U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xaU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xbU];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1 
            = (0x1fU & vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U]);
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2 
            = (0x1fU & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U] 
                        >> 5U));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data 
            = ((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[1U] 
                << 0x16U) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U] 
                             >> 0xaU));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data 
            = ((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[2U] 
                << 0x16U) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[1U] 
                             >> 0xaU));
        if ((((((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1) 
                != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1)) 
               | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2) 
                  != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2))) 
              | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data 
                 != vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data)) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__msg
                          ,"R stage mismatch: expected READ_RS1=%x, READ_RS2=%x, READ_RS1_DATA=%x, READ_RS2_DATA=%x, got READ_RS1=%x, READ_RS2=%x, READ_RS1_DATA=%x, READ_RS2_DATA=%x",0,
                          5,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1,
                          5,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2),
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data,
                          5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),
                          5,vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data);
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xcU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xdU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xeU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xfU];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xcU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xdU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xeU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0xfU];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[0U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[1U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken 
            = (1U & vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[2U]);
        if ((((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc 
               != vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc) 
              | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res 
                 != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)) 
             | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken) 
                != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken)))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__msg
                          ,"E stage mismatch: expected PC=%x, ALU_RES=%x, BR_TAKEN=%x, got PC=%x, ALU_RES=%x, BR_TAKEN=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res,
                          1,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken),
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res,
                          1,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken));
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x10U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x11U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x12U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x13U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x10U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x11U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x12U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x13U];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[0U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[1U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded 
            = (3U & vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[2U]);
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data 
            = ((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[3U] 
                << 0x1eU) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[2U] 
                             >> 2U));
        if (((((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc) 
               | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address 
                  != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)) 
              | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded) 
                 != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded))) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__msg
                          ,"M stage mismatch: expected PC=%x, ADDRESS=%x, SIZE_ENCODED=%x, DATA=%x, got PC=%x, ADDRESS=%x, SIZE_ENCODED=%x, DATA=%x%10#",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address,
                          1,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__rw),
                          2,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res,
                          2,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded),
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o);
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x55aU >= (0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x14U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x15U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x16U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7ffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x17U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x14U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x15U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x16U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_hda9269f3_0[0x17U];
        }
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc 
            = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[0U];
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable 
            = (1U & vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U]);
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination 
            = (0x1fU & (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U] 
                        >> 1U));
        vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data 
            = ((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[2U] 
                << 0x1aU) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U] 
                             >> 6U));
        if (((((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc) 
               | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable) 
                  != (1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                            [2U] >> 2U)))) | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination) 
                                              != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd))) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__msg
                          ,"W stage mismatch: expected PC=%x, ENABLE=%x, DESTINATION=%x, DATA=%x, got PC=%x, ENABLE=%x, DESTINATION=%x, DATA=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc,
                          1,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable),
                          5,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc,
                          1,(1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                   [2U] >> 2U)),5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd),
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data);
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__res = 0U;
        } else {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__res = 1U;
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
            = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__res;
        VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__msg);
        vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        if (vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct) {
            if (VL_UNLIKELY(((0x55aU == vlSelfRef.top__DOT__genblk3__DOT__tick)))) {
                VL_WRITEF_NX("Check passed\n",0);
                VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/verif/tests/pattern_check.h", 48, "");
            }
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick = ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__genblk3__DOT__tick);
    }
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1 = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2 = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1data = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct7 = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3 = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_data = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_rd = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_imm = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3 = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rd = 0U;
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1data 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct7 
            = (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
               >> 0x19U);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_data 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_rd 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_imm 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3 
            = (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                     >> 0xcU));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode 
            = (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rd 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rd;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rd 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd;
    }
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v0 
        = ((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel) 
             << 9U) | (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel) 
                        << 7U) | (((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                             >> 6U))) 
                                   && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                              >> 5U)) 
                                       && ((1U & (~ 
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
                                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))) 
                                  << 6U))) | (((((1U 
                                                  & (~ 
                                                     (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                      >> 6U))) 
                                                 && ((1U 
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
                                                                         & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))) 
                                                << 5U) 
                                               | ((((0x40U 
                                                     & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                     ? 
                                                    ((1U 
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
                                                                         & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))
                                                     : 
                                                    ((1U 
                                                      & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                         >> 5U)) 
                                                     && ((1U 
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
                                                                         & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel) 
                                                     << 1U) 
                                                    | ((1U 
                                                        & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                           >> 6U)) 
                                                       && ((1U 
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
                                                                            & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))))));
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v1 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
        [0U];
    __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v2 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
        [1U];
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_brtaken 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__reset))) 
           && (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[0U] 
        = __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v0;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[1U] 
        = __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v1;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[2U] 
        = __VdlyVal__top__DOT__dut__DOT__core__DOT__ctrl_reg__v2;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3 = 2U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded 
        = (3U & (((0x23U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode)) 
                  | (3U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_opcode)))
                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3)
                  : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3)));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
        = ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
            [0U]) ? vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data
            : vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
        = ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
            [0U]) ? vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1data
            : vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1 
        = (((0x17U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) 
            & (0x37U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                        >> 0xfU)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2 
        = (((0x33U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) 
            | ((0x23U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) 
               | (0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                        >> 0x14U)) : 0U);
    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            __VdfgRegularize_h9a3b41c9_0_4 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                      >> 0xcU))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h9a3b41c9_0_5 = (0xfffff000U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn);
        } else {
            __VdfgRegularize_h9a3b41c9_0_4 = 0U;
            __VdfgRegularize_h9a3b41c9_0_5 = 0U;
        }
    } else {
        __VdfgRegularize_h9a3b41c9_0_4 = 0U;
        __VdfgRegularize_h9a3b41c9_0_5 = 0U;
    }
    if ((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
                                       : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 4U))) 
                                  && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))));
        if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                   >> 0x14U))));
                        } else {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                        }
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                }
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h9a3b41c9_0_4;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                            = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                     >> 7U)))));
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
        if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                            ? 3U : 0U) : 0U);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h9a3b41c9_0_5;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                            ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                    ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                     ? ((0U == (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 0x19U))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                      >> 0x19U))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 7U))));
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))));
    } else if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_5;
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                        ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                            ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                     >> 0x19U))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                   ? 5U
                                                   : 0U)))
                        : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_4;
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))));
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            }
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_4;
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd = 
        (((0x23U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)) 
          & (0x63U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
          ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                      >> 7U)) : 0U);
    if ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
         [0U])) {
        if ((0x800U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
             [0U])) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0x37U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2
                    : 0U);
        } else if ((0x400U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                    [0U])) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0x37U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2
                    : 0U);
        } else if ((0x200U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                    [0U])) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                   < vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0xfffffffeU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res) 
                   | (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                        >> 0x1fU) > (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                     >> 0x1fU)) | (
                                                   ((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                     >> 0x1fU) 
                                                    >= 
                                                    (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                     >> 0x1fU)) 
                                                   & ((1U 
                                                       & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                          >> 0x1eU)) 
                                                      < 
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                          >> 0x1eU))))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
            = ((0x800U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                [0U]) ? ((0x400U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                          [0U]) ? ((0x200U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                    [0U]) ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                                    : VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))
                          : ((0x200U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                              [0U]) ? VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                              : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                 ^ vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)))
                : ((0x400U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                    [0U]) ? ((0x200U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                              [0U]) ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                       | vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                              : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                 & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))
                    : ((0x200U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                        [0U]) ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                 - vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                        : ((0x63U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode))
                            ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc 
                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm)
                            : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)))));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq 
        = ((0x63U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode)) 
           & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
              == vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt 
        = ((0x63U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode)) 
           & (((6U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3)) 
               | (7U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3)))
               ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                  < vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
               : (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                    >> 0x1fU) > (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                 >> 0x1fU)) | (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                 >> 0x1fU) 
                                                >= 
                                                (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                 >> 0x1fU)) 
                                               & ((0x7fffffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1) 
                                                  < 
                                                  (0x7fffffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken 
        = ((0x63U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode)) 
           & ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3))
               ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3))
                   ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt))
                   : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt))
               : ((~ ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3) 
                      >> 1U)) & ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3))
                                  ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq))
                                  : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data 
        = ((0U == (3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                         [2U] >> 7U))) ? vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_res
            : ((1U == (3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                             [2U] >> 7U))) ? vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_data
                : ((2U == (3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                 [2U] >> 7U))) ? ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_pc)
                    : ((3U == (3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                     [2U] >> 7U))) ? vlSelfRef.top__DOT__dut__DOT__core__DOT__m_reg_imm
                        : 0U))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o = 0U;
    if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
         [1U])) {
        if ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                    = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                            ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                                  >> 7U)))) 
                                << 0x10U) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                              << 8U) 
                                             | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                             [(0xfffffU 
                                               & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]))
                            : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                [(0xfffffU & ((IData)(1U) 
                                              + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                               [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]))
                        : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                            ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0xfffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)] 
                                                  >> 7U)))) 
                                << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                               [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)])
                            : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3)))) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                    = (((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                         [(0xfffffU & ((IData)(3U) 
                                       + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                         << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                      [(0xfffffU & 
                                        ((IData)(2U) 
                                         + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                      << 0x10U)) | 
                       ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                         [(0xfffffU & ((IData)(1U) 
                                       + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                         << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                        [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]));
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                    ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                              >> 7U)))) 
                            << 0x10U) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                                          << 8U) | 
                                         vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                         [(0xfffffU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]))
                        : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                            [(0xfffffU & ((IData)(1U) 
                                          + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res))] 
                            << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]))
                    : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)])
                        : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res)]));
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o = 0U;
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
        [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1];
    vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
        [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2];
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = 
        ((IData)(vlSelfRef.top__DOT__reset) ? 0U : 
         ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                 [1U] | (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken)))
           ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res
           : ((IData)(vlSelfRef.top__DOT__reset) ? 0U
               : vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
            = (((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
                & (0x1100000U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc)))
                ? (((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                     [(0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc))] 
                     << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                  [(0xfffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                [(0xfffffU 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc)]))
                : 0xdeadbeefU);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/verif/tests/test_pd.sv", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd5/verif/tests/test_pd.sv", 4, "", "Active region did not converge.");
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
