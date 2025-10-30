// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vigen_tb.h for the primary calling header

#include "Vigen_tb__pch.h"
#include "Vigen_tb___024root.h"

VL_ATTR_COLD void Vigen_tb___024root___eval_static(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_static\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__igen_tb__DOT__clk__0 
        = vlSelfRef.igen_tb__DOT__clk;
}

VL_ATTR_COLD void Vigen_tb___024root___eval_initial__TOP(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_initial__TOP\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.igen_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vigen_tb___024root___eval_final(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_final\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__stl(Vigen_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vigen_tb___024root___eval_phase__stl(Vigen_tb___024root* vlSelf);

VL_ATTR_COLD void Vigen_tb___024root___eval_settle(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_settle\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vigen_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("igen_tb.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vigen_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__stl(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___dump_triggers__stl\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vigen_tb___024root___act_sequent__TOP__0(Vigen_tb___024root* vlSelf);

VL_ATTR_COLD void Vigen_tb___024root___eval_stl(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_stl\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vigen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vigen_tb___024root___eval_triggers__stl(Vigen_tb___024root* vlSelf);

VL_ATTR_COLD bool Vigen_tb___024root___eval_phase__stl(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_phase__stl\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vigen_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vigen_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__act(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___dump_triggers__act\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge igen_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__nba(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___dump_triggers__nba\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge igen_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vigen_tb___024root___ctor_var_reset(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___ctor_var_reset\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->igen_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8908486262537899327ull);
    vlSelf->igen_tb__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13549658015018988001ull);
    vlSelf->igen_tb__DOT__insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15860094164353665654ull);
    vlSelf->igen_tb__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13772973456117665158ull);
    vlSelf->igen_tb__DOT__dut__DOT__btype_imm = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11603439539628205111ull);
    vlSelf->__Vtrigprevexpr___TOP__igen_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4054823007468974688ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
