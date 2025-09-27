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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v1;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v2;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v3;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v3 = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelfRef.top__DOT__clkg__DOT__counter;
    __VdlySet__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i)))) {
        if (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))) {
                __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0 
                    = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i);
                __VdlySet__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0 = 1U;
                __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v1 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i 
                                >> 8U));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v2 
                    = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i 
                                >> 0x10U));
                __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v3 
                    = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i 
                       >> 0x18U);
            }
        }
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[0U] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v0;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[1U] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v1;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[2U] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v2;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[3U] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory__v3;
    }
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelfRef.top__DOT__clkg__DOT__counter);
    vlSelfRef.top__DOT__reset = VL_GTS_III(32, 5U, vlSelfRef.top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY(((0xc350U == vlSelfRef.top__DOT__clkg__DOT__counter)))) {
        VL_FINISH_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/clockgen.sv", 31, "");
    }
    vlSelfRef.top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_o = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))) {
            if (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_o 
                    = (((vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                         [3U] << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                                           [2U] << 0x10U)) 
                       | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                           [1U] << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                          [0U]));
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))))) {
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[0U] = 0U;
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[1U] = 0U;
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[2U] = 0U;
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[3U] = 0U;
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[0U] 
            = (IData)((0x1000000ULL | ((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_o)) 
                                       << 0x20U)));
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[1U] 
            = (IData)(((0x1000000ULL | ((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_o)) 
                                        << 0x20U)) 
                       >> 0x20U));
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump[0U] 
            = vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[0U];
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump[1U] 
            = vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[1U];
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump[2U] 
            = vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[2U];
        vlSelfRef.top__DOT__genblk2__DOT__pattern_dump[3U] 
            = vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage[3U];
        VL_FWRITEF_NX(vlSelfRef.top__DOT__genblk2__DOT_____05Fdump_fd,"%0x\n",0,
                      128,vlSelfRef.top__DOT__genblk2__DOT__pattern_dump.data());
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
            VL_FATAL_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/test_pd.sv", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/test_pd.sv", 4, "", "Active region did not converge.");
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
