// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<33>/*1055:0*/ Vtop__ConstPool__CONST_hc3994f83_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i;
    top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.top__DOT__clock = 0U;
    VL_READMEM_N(true, 32, 1048576, 0, VL_CVT_PACK_STR_NW(33, Vtop__ConstPool__CONST_hc3994f83_0)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x7fU, top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i))] 
            = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
               [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
                        [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
                        >> 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
                        [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
                        >> 0x10U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
               [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
               >> 0x18U);
        top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 127 32-bit words from /Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/data/test1.x\n",0);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12322818067280580616ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16707294210780848022ull);
    }
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
}
