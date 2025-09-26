// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__counter),32);
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__reset_done));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__reset_neg));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__reset_reg));
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__reset_counter),32);
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__assign_xor_op1));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__assign_xor_op2));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__assign_xor_res));
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__alu_sel),2);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__alu_op1),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__alu_op2),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__alu_res),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__reg_rst_inp),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__reg_rst_out),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__tsp_op1),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__tsp_op2),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__tsp_out),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__clkg__DOT__counter),32);
        bufp->chgBit(oldp+19,((1U & vlSelfRef.top__DOT__counter)));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.top__DOT__counter 
                                     >> 1U))));
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.top__DOT__counter 
                                     ^ (vlSelfRef.top__DOT__counter 
                                        >> 1U)))));
        bufp->chgCData(oldp+22,((3U & vlSelfRef.top__DOT__counter)),2);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2),32);
        bufp->chgIData(oldp+24,(((0U == (3U & vlSelfRef.top__DOT__counter))
                                  ? (vlSelfRef.top__DOT__counter 
                                     + vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                  : ((1U == (3U & vlSelfRef.top__DOT__counter))
                                      ? (vlSelfRef.top__DOT__counter 
                                         - vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                      : ((2U == (3U 
                                                 & vlSelfRef.top__DOT__counter))
                                          ? (vlSelfRef.top__DOT__counter 
                                             & vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                          : (vlSelfRef.top__DOT__counter 
                                             | vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2))))),32);
        bufp->chgBit(oldp+25,((((0U == (3U & vlSelfRef.top__DOT__counter))
                                 ? (vlSelfRef.top__DOT__counter 
                                    + vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                 : ((1U == (3U & vlSelfRef.top__DOT__counter))
                                     ? (vlSelfRef.top__DOT__counter 
                                        - vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                     : ((2U == (3U 
                                                & vlSelfRef.top__DOT__counter))
                                         ? (vlSelfRef.top__DOT__counter 
                                            & vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                         : (vlSelfRef.top__DOT__counter 
                                            | vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)))) 
                               >> 0x1fU)));
        bufp->chgBit(oldp+26,((1U & (~ (0U != ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__counter))
                                                ? (vlSelfRef.top__DOT__counter 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.top__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.top__DOT__counter 
                                                    - vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.top__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.top__DOT__counter 
                                                     & vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)
                                                     : 
                                                    (vlSelfRef.top__DOT__counter 
                                                     | vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2)))))))));
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__core__DOT__reg_rst_out),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_op2),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_res),32);
        bufp->chgCData(oldp+30,(((2U & ((~ (0U != vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (0U 
                                                       != vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add))))),2);
        bufp->chgCData(oldp+31,(((2U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub 
                                        >> 0x1eU)) 
                                 | (vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add 
                                    >> 0x1fU))),2);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg1),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg2),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage2_reg1),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage2_reg2),32);
        bufp->chgBit(oldp+38,((1U & (~ (0U != vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add)))));
        bufp->chgBit(oldp+39,((vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add 
                               >> 0x1fU)));
        bufp->chgBit(oldp+40,((1U & (~ (0U != vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub)))));
        bufp->chgBit(oldp+41,((vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub 
                               >> 0x1fU)));
    }
    bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__clock));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
