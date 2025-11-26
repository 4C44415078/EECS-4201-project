// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x705f7462U;
    __Vtemp_1[2U] = 0x746fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.top_tb__DOT__clk = 1U;
    vlSelfRef.top_tb__DOT__rst = 1U;
    (void)VL_SYSTEM_II(0x64617465U);
    __Vtemp_2[0U] = 0x6c6c2e78U;
    __Vtemp_2[1U] = 0x5f737461U;
    __Vtemp_2[2U] = 0x7462U;
    VL_READMEM_N(true, 32, 14, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x40000U, vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)) {
        if (VL_GTS_III(32, 0xeU, vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)) {
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))] 
                = ((0xdU >= (0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))
                    ? (0xffU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory
                       [(0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)])
                    : 0U);
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] 
                = (0xffU & (((0xdU >= (0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))
                              ? vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory
                             [(0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)]
                              : 0U) >> 8U));
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(2U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] 
                = (0xffU & (((0xdU >= (0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))
                              ? vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory
                             [(0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)]
                              : 0U) >> 0x10U));
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] 
                = (((0xdU >= (0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))
                     ? vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory
                    [(0xfU & vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)]
                     : 0U) >> 0x18U);
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i))] = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(2U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                        & ((IData)(3U) 
                                                                           + 
                                                                           VL_MULS_III(32, (IData)(4U), vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i)))] = 0U;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
