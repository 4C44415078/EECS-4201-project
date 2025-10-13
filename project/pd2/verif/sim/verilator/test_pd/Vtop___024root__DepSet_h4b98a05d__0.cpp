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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

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
    // Body
    vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct = 1U;
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
    } else {
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0x79U >= (0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][1U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][2U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][3U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[3U];
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
        if ((0x79U >= (0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][4U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][5U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][6U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0x7fU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][7U];
        } else {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[3U] 
                = Vtop__ConstPool__CONST_h9e67c271_0[7U];
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
                    != vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc) 
                   | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode) 
                      != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))) 
                  | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd) 
                     != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd))) 
                 | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1) 
                    != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1))) 
                | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2) 
                   != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2))) 
               | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3) 
                  != (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                            >> 0xcU)))) | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7) 
                                           != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))) 
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
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc,
                          7,(0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn),
                          5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd),
                          5,vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1,
                          5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2),
                          3,(7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                   >> 0xcU)),7,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7),
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
        if (VL_LIKELY((vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct))) {
            if (VL_UNLIKELY(((0x79U == vlSelfRef.top__DOT__genblk3__DOT__tick)))) {
                VL_WRITEF_NX("Check passed\n",0);
                VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/pattern_check.h", 28, "");
            }
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: pattern_check.h:25: Assertion failed in %Ntop.genblk3.tick_check\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/pattern_check.h", 25, "", false);
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick = ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__genblk3__DOT__tick);
    }
}
