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
    // Body
    vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct = 1U;
    if (vlSelfRef.top__DOT__reset) {
        vlSelfRef.top__DOT__genblk3__DOT__tick = 0U;
    } else {
        __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx 
            = vlSelfRef.top__DOT__genblk3__DOT__tick;
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][0U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][1U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][2U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__idx)][3U];
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
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_F__0__msg
                          ,"F stage mismatch: expected PC=%x, INSN=%x, got PC=%x, INSN=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o);
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
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][4U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][5U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][6U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_D__1__idx)][7U];
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
                    != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
                   | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode) 
                      != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))) 
                  | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd) 
                     != (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                  >> 7U)))) | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1) 
                                               != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1))) 
                | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2) 
                   != (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                >> 0x14U)))) | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3) 
                                                != 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                    >> 0xcU)))) 
              | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7) 
                 != (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                     >> 0x19U))) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm 
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
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                          7,(0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o),
                          5,(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                      >> 7U)),5,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),
                          5,(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                      >> 0x14U)),3,
                          (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                 >> 0xcU)),7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
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
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][8U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][9U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][0xaU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_R__2__idx)][0xbU];
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
                  != (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                               >> 0x14U)))) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data 
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
                          5,(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                      >> 0x14U)),32,
                          vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data,
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
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xcU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xdU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xeU];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__idx)][0xfU];
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
               != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
              | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res 
                 != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)) 
             | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken) 
                != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken)))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_E__3__msg
                          ,"E stage mismatch: expected PC=%x, ALU_RES=%x, BR_TAKEN=%x, got PC=%x, ALU_RES=%x, BR_TAKEN=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res,
                          1,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken),
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
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
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x10U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x11U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x12U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__idx)][0x13U];
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
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
               | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address 
                  != vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)) 
              | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded) 
                 != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded))) 
             | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data 
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_M__4__msg
                          ,"M stage mismatch: expected PC=%x, ADDRESS=%x, SIZE_ENCODED=%x, DATA=%x, got PC=%x, ADDRESS=%x, SIZE_ENCODED=%x, DATA=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address,
                          2,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded),
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res,
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
        if ((0xce1U >= (0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx))) {
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[0U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x14U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[1U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x15U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[2U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x16U];
            vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p[3U] 
                = vlSelfRef.top__DOT__genblk3__DOT__pattern
                [(0xfffU & __Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__idx)][0x17U];
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
                != vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
               | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable) 
                  != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren))) 
              | ((IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination) 
                 != (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                              >> 7U)))) | (vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data 
                                           != vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data))) {
            VL_SFORMAT_NX(4096,__Vtask_top__DOT__genblk3__DOT__genblk3__DOT__check_W__5__msg
                          ,"W stage mismatch: expected PC=%x, ENABLE=%x, DESTINATION=%x, DATA=%x, got PC=%x, ENABLE=%x, DESTINATION=%x, DATA=%x",0,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc,
                          1,(IData)(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable),
                          5,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination,
                          32,vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data,
                          32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                          1,(IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren),
                          5,(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                      >> 7U)),32,vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data);
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
        if (VL_LIKELY((vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct))) {
            if (VL_UNLIKELY(((0xce1U == vlSelfRef.top__DOT__genblk3__DOT__tick)))) {
                VL_WRITEF_NX("Check passed\n",0);
                VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/pattern_check.h", 48, "");
            }
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: pattern_check.h:45: Assertion failed in %Ntop.genblk3.tick_check\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/pattern_check.h", 45, "", false);
        }
        vlSelfRef.top__DOT__genblk3__DOT__tick = ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__genblk3__DOT__tick);
    }
}
