// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__clock;
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__genblk3__DOT__tick_check__DOT__res;
    CData/*0:0*/ top__DOT__genblk3__DOT__tick_check__DOT__tick_ok;
    CData/*0:0*/ top__DOT__genblk3__DOT__tick_check__DOT__correct;
    CData/*6:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode;
    CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd;
    CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1;
    CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2;
    CData/*2:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3;
    CData/*6:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7;
    CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__shamt;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__d_rd;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__d_rs1;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__d_rs2;
    CData/*6:0*/ top__DOT__dut__DOT__core__DOT__d_funct7;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_immsel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_regwren;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_rs1sel;
    CData/*1:0*/ top__DOT__dut__DOT__core__DOT__c_wbsel;
    CData/*3:0*/ top__DOT__dut__DOT__core__DOT__c_alusel;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h68f8bd3e__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98eaf4c5__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98eb2256__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h98edb91e__0;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__genblk3__DOT__pre_check__DOT__res;
    IData/*31:0*/ top__DOT__genblk3__DOT__tick;
    VlWide<128>/*4095:0*/ top__DOT__genblk3__DOT__tick_check__DOT__msg;
    IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc;
    IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn;
    VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p;
    IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc;
    IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm;
    VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p;
    VlWide<7>/*223:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__t;
    IData/*31:0*/ top__DOT__clkg__DOT__counter;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__addr_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__f_pc;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__f_insn;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__d_imm;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<8>/*255:0*/, 122> top__DOT__genblk3__DOT__pattern;
    VlUnpacked<IData/*31:0*/, 127> top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 508> top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
