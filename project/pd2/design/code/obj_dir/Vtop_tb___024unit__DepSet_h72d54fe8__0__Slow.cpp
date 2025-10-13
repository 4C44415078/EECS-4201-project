// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024unit.h"

VL_ATTR_COLD void Vtop_tb___024unit___eval_static__TOP____024unit(Vtop_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb___024unit___eval_static__TOP____024unit\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.signal_name[6U] = std::string{"pcsel"};
    vlSelfRef.signal_name[5U] = std::string{"immsel"};
    vlSelfRef.signal_name[4U] = std::string{"regwren"};
    vlSelfRef.signal_name[3U] = std::string{"rs1sel"};
    vlSelfRef.signal_name[2U] = std::string{"rs2sel"};
    vlSelfRef.signal_name[1U] = std::string{"memren"};
    vlSelfRef.signal_name[0U] = std::string{"memwren"};
    vlSelfRef.check_control_signal__Vstatic__unnamedblk1__DOT__control_fail = 0U;
}

VL_ATTR_COLD void Vtop_tb___024unit___ctor_var_reset(Vtop_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_tb___024unit___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->jtype_insn__Vstatic__imm_jtype = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2235738810215965023ull);
    vlSelf->check_control_signal__Vstatic__unnamedblk1__DOT__control_fail = 0;
}
