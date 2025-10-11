// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = 0x1000000U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

extern const VlWide<23>/*735:0*/ Vtop__ConstPool__CONST_haa494016_0;
extern const VlWide<21>/*671:0*/ Vtop__ConstPool__CONST_hcabfd9e1_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 = 0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 = 0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 = 0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 = 0;
    // Body
    VL_READMEM_N(true, 256, 39, 0, VL_CVT_PACK_STR_NW(23, Vtop__ConstPool__CONST_haa494016_0)
                 ,  &(vlSelfRef.top__DOT__genblk3__DOT__pattern)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    VL_READMEM_N(true, 32, 39, 0, VL_CVT_PACK_STR_NW(21, Vtop__ConstPool__CONST_hcabfd9e1_0)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[1U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[2U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[3U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [1U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[4U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [1U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[5U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [1U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[6U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [1U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[7U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [2U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[8U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [2U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[9U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [2U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xaU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [2U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xbU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [3U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xcU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [3U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xdU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [3U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xeU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [3U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0xfU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [4U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x10U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [4U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x11U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [4U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x12U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [4U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x13U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [5U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x14U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [5U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x15U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [5U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x16U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [5U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x17U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [6U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x18U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [6U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x19U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [6U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [6U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [7U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [7U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [7U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [7U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x1fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [8U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x20U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [8U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x21U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [8U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x22U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [8U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x23U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [9U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x24U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [9U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x25U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [9U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x26U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [9U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x27U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xaU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x28U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xaU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x29U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xaU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xaU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xbU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xbU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xbU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xbU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x2fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xcU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x30U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xcU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x31U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xcU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x32U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xcU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x33U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xdU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x34U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xdU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x35U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xdU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x36U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xdU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x37U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xeU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x38U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xeU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x39U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xeU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xeU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xfU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xfU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0xfU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0xfU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x3fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x10U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x40U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x10U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x41U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x10U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x42U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x10U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x43U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x11U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x44U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x11U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x45U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x11U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x46U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x11U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x47U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x12U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x48U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x12U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x49U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x12U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x12U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x13U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x13U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x13U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x13U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x4fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x14U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x50U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x14U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x51U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x14U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x52U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x14U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x53U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x15U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x54U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x15U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x55U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x15U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x56U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x15U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x57U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x16U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x58U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x16U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x59U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x16U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x16U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x17U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x17U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x17U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x17U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x5fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x18U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x60U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x18U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x61U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x18U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x62U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x18U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x63U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x19U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x64U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x19U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x65U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x19U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x66U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x19U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x67U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x68U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x69U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x6fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x70U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x71U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x72U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x73U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x74U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x75U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x76U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x77U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x78U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x79U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x1fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x1fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x7fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x20U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x80U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x20U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x81U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x20U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x82U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x20U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x83U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x21U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x84U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x21U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x85U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x21U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x86U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x21U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x87U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x22U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x88U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x22U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x89U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x22U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x22U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x23U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8cU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x23U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8dU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x23U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8eU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x23U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x8fU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x24U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x90U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x24U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x91U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x24U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x92U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x24U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x93U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x25U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x94U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x25U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x95U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x25U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x96U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x25U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x97U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0 
        = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x26U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x98U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98405d95__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x26U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x99U] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a25bb8e__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0 
        = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [0x26U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x9aU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a260a52__0;
    top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
           [0x26U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[0x9bU] 
        = top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h6a2466e0__0;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i = 0x27U;
    VL_WRITEF_NX("IMEMORY: Loaded 39 32-bit words from /Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/data/test2.x\n",0);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/test_pd.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_6;
    __VdfgRegularize_h038a369a_0_6 = 0;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_7;
    __VdfgRegularize_h038a369a_0_7 = 0;
    // Body
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    if (VL_LIKELY((((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
                    & (0x100009cU > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc)))))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
            = (((((0x9bU >= (0xffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                   ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                  [(0xffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                   : 0U) << 0x18U) | (((0x9bU >= (0xffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                       [(0xffU & ((IData)(2U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                                        : 0U) << 0x10U)) 
               | ((((0x9bU >= (0xffU & ((IData)(1U) 
                                        + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                     ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                    [(0xffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                     : 0U) << 8U) | ((0x9bU >= (0xffU 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))
                                      ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                     [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)]
                                      : 0U)));
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn = 0xdeadbeefU;
        VL_WRITEF_NX("IMEMORY: OOB read @0x%08x (mapped 0x%08x)\n",0,
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                     32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
                         - (IData)(0x1000000U)));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd = 
        (((0x23U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
          & (0x63U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
          ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 7U)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1 
        = (((0x17U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
            & ((0x37U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
               & (0x6fU != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0xfU)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2 
        = (((0x33U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
            | ((0x23U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
               | (0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0x14U)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7 
        = ((0x33U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
            ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
               >> 0x19U) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__igen1__DOT__btype_imm 
        = (((0x1000U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0x13U)) | (0x800U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                << 4U))) 
           | ((0x7e0U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 0x14U)) | (0x1eU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 7U))));
    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            __VdfgRegularize_h038a369a_0_6 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                      >> 0xcU))))
                                               ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn, 0x14U)
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h038a369a_0_7 = (0xfffff000U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn);
        } else {
            __VdfgRegularize_h038a369a_0_6 = 0U;
            __VdfgRegularize_h038a369a_0_7 = 0U;
        }
    } else {
        __VdfgRegularize_h038a369a_0_6 = 0U;
        __VdfgRegularize_h038a369a_0_7 = 0U;
    }
    if ((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
                                       : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
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
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
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
                    = __VdfgRegularize_h038a369a_0_6;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                            = (((6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                              >> 0xcU))) 
                                | (7U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 0xcU))))
                                ? (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__igen1__DOT__btype_imm)
                                : (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 0x1fU))) 
                                    << 0xdU) | (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__igen1__DOT__btype_imm)));
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
    } else if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? 3U : 0U) : 0U);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h038a369a_0_7;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                     ? ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
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
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))));
    } else if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h038a369a_0_7;
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                   ? 5U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                    ? 0U
                                                    : 1U))))
                        : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h038a369a_0_6;
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
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
                = __VdfgRegularize_h038a369a_0_6;
        }
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top.clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->top__DOT__genblk3__DOT__pattern[__Vi0], __VscopeHash, 3437997641832917168ull);
    }
    vlSelf->top__DOT__genblk3__DOT__pre_check__DOT__res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1735463621253742542ull);
    vlSelf->top__DOT__genblk3__DOT__tick = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5871079935339220110ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__res = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8827944293140434767ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8733703144478527002ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__correct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16716393228917976635ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__msg, __VscopeHash, 10781803541736536694ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4618406083856990165ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17726925785358468471ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p, __VscopeHash, 10859367052700800039ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16364527408957267321ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16893219986236333547ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 934801074271333149ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6379340201662160556ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2415813836848899253ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15058807011594405173ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10988990796387366310ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4821697813978879619ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7680416473058256975ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p, __VscopeHash, 14766141647906589766ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__t, __VscopeHash, 12136630823209822727ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13360777589716865042ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6861737920208188584ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12048714892135156921ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__f_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7374491624312029756ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7539987492366306364ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13883393208245219622ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10226454370625851069ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14863550246305528578ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5636778193619115238ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_immsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11319820169683274787ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_regwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4613316192809712570ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_rs1sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13111688551968865359ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_wbsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14310046240291742116ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_alusel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15290493732143631569ull);
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1463922315813575142ull);
    }
    for (int __Vi0 = 0; __Vi0 < 156; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11844625093970627893ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14244068164273144251ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__igen1__DOT__btype_imm = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13568952570205462391ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
