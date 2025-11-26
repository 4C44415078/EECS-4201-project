// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__clk;
    CData/*0:0*/ top_tb__DOT__rst;
    CData/*0:0*/ top_tb__DOT__hut__DOT__c_immsel;
    CData/*0:0*/ top_tb__DOT__hut__DOT__c_regwren;
    CData/*0:0*/ top_tb__DOT__hut__DOT__c_rs1sel;
    CData/*1:0*/ top_tb__DOT__hut__DOT__c_wbsel;
    CData/*3:0*/ top_tb__DOT__hut__DOT__c_alusel;
    CData/*4:0*/ top_tb__DOT__hut__DOT__d_rs1;
    CData/*4:0*/ top_tb__DOT__hut__DOT__d_rs2;
    CData/*6:0*/ top_tb__DOT__hut__DOT__d_reg_opcode;
    CData/*4:0*/ top_tb__DOT__hut__DOT__d_reg_rd;
    CData/*4:0*/ top_tb__DOT__hut__DOT__d_reg_rs1;
    CData/*4:0*/ top_tb__DOT__hut__DOT__d_reg_rs2;
    CData/*6:0*/ top_tb__DOT__hut__DOT__d_reg_funct7;
    CData/*2:0*/ top_tb__DOT__hut__DOT__d_reg_funct3;
    CData/*0:0*/ top_tb__DOT__hut__DOT__e_brtaken;
    CData/*6:0*/ top_tb__DOT__hut__DOT__e_reg_opcode;
    CData/*2:0*/ top_tb__DOT__hut__DOT__e_reg_funct3;
    CData/*4:0*/ top_tb__DOT__hut__DOT__e_reg_rd;
    CData/*0:0*/ top_tb__DOT__hut__DOT__e_reg_brtaken;
    CData/*2:0*/ top_tb__DOT__hut__DOT__m_funct3;
    CData/*4:0*/ top_tb__DOT__hut__DOT__m_reg_rd;
    CData/*4:0*/ top_tb__DOT__hut__DOT__wb_reg_rd;
    CData/*0:0*/ top_tb__DOT__hut__DOT__is_program;
    CData/*0:0*/ top_tb__DOT__hut__DOT__e_alu1__DOT__breq;
    CData/*0:0*/ top_tb__DOT__hut__DOT__e_alu1__DOT__brlt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top_tb__DOT__counter;
    IData/*31:0*/ top_tb__DOT__hut__DOT__f_pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__f_insn;
    IData/*31:0*/ top_tb__DOT__hut__DOT__f_reg_pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__f_reg_insn;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_imm;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_reg_insn;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_reg_imm;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_reg_pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_reg_rs1data;
    IData/*31:0*/ top_tb__DOT__hut__DOT__d_reg_rs2data;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_rs1;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_rs2;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_res;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_reg_pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_reg_imm;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_reg_res;
    IData/*31:0*/ top_tb__DOT__hut__DOT__e_reg_rs2data;
    IData/*31:0*/ top_tb__DOT__hut__DOT__m_data_o;
    IData/*31:0*/ top_tb__DOT__hut__DOT__m_reg_pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__m_reg_res;
    IData/*31:0*/ top_tb__DOT__hut__DOT__m_reg_data;
    IData/*31:0*/ top_tb__DOT__hut__DOT__m_reg_imm;
    IData/*31:0*/ top_tb__DOT__hut__DOT__wb_reg_data;
    IData/*31:0*/ top_tb__DOT__hut__DOT__fetch1__DOT__insn_o;
    IData/*31:0*/ top_tb__DOT__hut__DOT__fetch1__DOT__pc;
    IData/*31:0*/ top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top_tb__DOT__hut__DOT__memory1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*12:0*/, 3> top_tb__DOT__hut__DOT__ctrl_reg;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__hut__DOT__register_file1__DOT__x;
    VlUnpacked<CData/*7:0*/, 1048576> top_tb__DOT__hut__DOT__memory1__DOT__main_memory;
    VlUnpacked<IData/*31:0*/, 14> top_tb__DOT__hut__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
