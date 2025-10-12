// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vigen_tb.h for the primary calling header

#include "Vigen_tb__pch.h"
#include "Vigen_tb___024unit.h"

VL_ATTR_COLD void Vigen_tb___024unit___ctor_var_reset(Vigen_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vigen_tb___024unit___ctor_var_reset\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__jtype_insn__Vstatic__imm_jtype = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2235738810215965023ull);
}
