// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.top__DOT__clock = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__clock)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, (IData)(vlSelfRef.__Vdpi_export_trigger));
    vlSelfRef.__Vdpi_export_trigger = 0U;
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.top__DOT__clock)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.top__DOT__clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__genblk3__DOT__tick_check__DOT__correct;
    top__DOT__genblk3__DOT__tick_check__DOT__correct = 0;
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__msg);
    IData/*31:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx = 0;
    CData/*0:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__res;
    __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__res = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__msg;
    VL_ZERO_W(4096, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__msg);
    // Body
    top__DOT__genblk3__DOT__tick_check__DOT__correct = 1U;
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i = 0x1000000U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i = 1U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))) {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx 
                = vlSelfRef.top__DOT__genblk3__DOT__tick;
            if ((0x7eU >= (0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx))) {
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[0U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx)][0U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[1U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx)][1U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[2U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx)][2U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[3U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__idx)][3U];
            } else {
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[0U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[1U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[2U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[3U] = 0U;
            }
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__addr 
                = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__data 
                = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p[1U];
            if (((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__addr 
                  != vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i) 
                 | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__data 
                    != vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o))) {
                VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__msg
                              ,"[MEM READ 1] stage mismatch: expected ADDR=%x, DATA=%x, got ADDR=%x, DATA=%x",0,
                              32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__addr,
                              32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__data,
                              32,vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i,
                              32,vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o);
                __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__res = 0U;
            } else {
                __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__res = 1U;
            }
            vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
                = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__res;
            VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__0__msg);
        }
        if ((1U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i;
        }
        if ((2U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))) {
            __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx 
                = vlSelfRef.top__DOT__genblk3__DOT__tick;
            if ((0x7eU >= (0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx))) {
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[0U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx)][0U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[1U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx)][1U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[2U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx)][2U];
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[3U] 
                    = vlSelfRef.top__DOT__genblk3__DOT__pattern
                    [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__idx)][3U];
            } else {
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[0U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[1U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[2U] = 0U;
                vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[3U] = 0U;
            }
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr 
                = vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p[0U];
            if (((vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr 
                  != vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i) 
                 | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr 
                    != vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o))) {
                VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__msg
                              ,"[MEM READ 2] stage mismatch: expected ADDR=%x, DATA=%x, got ADDR=%x, DATA=%x",0,
                              32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr,
                              32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr,
                              32,vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i,
                              32,vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o);
                __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__res = 0U;
            } else {
                __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__res = 1U;
            }
            vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res 
                = __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__res;
            VL_ASSIGN_W(4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg, __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__1__msg);
        }
        top__DOT__genblk3__DOT__tick_check__DOT__correct 
            = ((IData)(top__DOT__genblk3__DOT__tick_check__DOT__correct) 
               & (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res)))))) {
            VL_WRITEF_NX("%0s\n",0,4096,vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg.data());
        }
        if (VL_LIKELY((top__DOT__genblk3__DOT__tick_check__DOT__correct))) {
            if ((0x7eU == vlSelfRef.top__DOT__genblk3__DOT__tick)) {
                if ((0U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))) {
                    vlSelfRef.top__DOT__genblk3__DOT__state = 1U;
                    vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i = 0x1000000U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i = 1U;
                } else if ((1U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))) {
                    vlSelfRef.top__DOT__genblk3__DOT__state = 2U;
                    vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i = 0x1000000U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i = 0U;
                } else if (VL_UNLIKELY(((2U == (IData)(vlSelfRef.top__DOT__genblk3__DOT__state))))) {
                    VL_WRITEF_NX("************* CHECK PASSED **************\n",0);
                    VL_FINISH_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/pattern_check.h", 53, "");
                }
            }
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: pattern_check.h:35: Assertion failed in %Ntop.genblk3.tick_check\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/pattern_check.h", 35, "", false);
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick = ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__genblk3__DOT__tick);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i 
            = ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_data_i 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_addr_i;
    }
}
