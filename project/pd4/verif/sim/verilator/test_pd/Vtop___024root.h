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
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_immsel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_regwren;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_rs1sel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__c_memwren;
    CData/*1:0*/ top__DOT__dut__DOT__core__DOT__c_wbsel;
    CData/*3:0*/ top__DOT__dut__DOT__core__DOT__c_alusel;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__d_rs1;
    CData/*2:0*/ top__DOT__dut__DOT__core__DOT__m_funct3;
    CData/*1:0*/ top__DOT__dut__DOT__core__DOT__wb_wbsel;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__is_program;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__genblk2__DOT_____05Fdump_fd;
    VlWide<24>/*767:0*/ top__DOT__genblk2__DOT__pattern_dump;
    VlWide<4>/*127:0*/ top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage;
    IData/*31:0*/ top__DOT__clkg__DOT__counter;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__c_insn;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__d_imm;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__r_rddata;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__e_rs1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__e_rs2;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__e_res;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__m_pc;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__m_addr;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__m_data_o;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__m_data_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__fetch1__DOT__insn_o;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__core__DOT__register_file1__DOT__x;
    VlUnpacked<IData/*31:0*/, 154> top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory;
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
