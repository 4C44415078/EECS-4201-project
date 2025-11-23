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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__reset));
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__clkg__DOT__counter),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc),32);
        bufp->chgIData(oldp+6,((vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
                                - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[10]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[11]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[12]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[13]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[14]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[15]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[16]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[17]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[18]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[19]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[20]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[21]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[22]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[23]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[24]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[25]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[26]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[27]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[28]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[29]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[30]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[31]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+40,(((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel));
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren));
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel));
        bufp->chgBit(oldp+44,(((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))
                                : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 5U)) && 
                                   ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
        bufp->chgBit(oldp+45,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
        bufp->chgBit(oldp+46,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))))))));
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel),2);
        bufp->chgCData(oldp+48,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel),4);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_pc),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn),32);
        bufp->chgCData(oldp+51,((0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)),7);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 7U))),5);
        bufp->chgCData(oldp+53,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+55,((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+56,((7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+57,((0x1fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)),5);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm),32);
        bufp->chgCData(oldp+59,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_opcode),7);
        bufp->chgCData(oldp+60,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rd),5);
        bufp->chgCData(oldp+61,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1),5);
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2),5);
        bufp->chgCData(oldp+63,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct7),7);
        bufp->chgCData(oldp+64,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_funct3),3);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_imm),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_pc),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs1data),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_reg_rs2data),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2),32);
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res),32);
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken));
        bufp->chgIData(oldp+73,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc),32);
        bufp->chgCData(oldp+74,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_funct3),3);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_imm),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_rs2data),32);
        bufp->chgBit(oldp+78,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_brtaken));
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded),2);
        bufp->chgCData(oldp+80,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3),3);
        bufp->chgIData(oldp+81,(((((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                          >> 6U)) && 
                                   ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                           >> 5U)) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                  >> 4U))) 
                                        && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)
                                             ? ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 2U)) 
                                                && ((1U 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn)))
                                             : ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                    >> 2U)) 
                                                && ((1U 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_reg_insn))))))) 
                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_brtaken))
                                  ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res
                                  : ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_pc))),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_data),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_reg_nextPC),32);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt));
        bufp->chgIData(oldp+87,((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_reg_res 
                                 - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__genblk3__DOT__tick),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc),32);
        bufp->chgCData(oldp+90,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode),7);
        bufp->chgCData(oldp+91,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd),5);
        bufp->chgCData(oldp+92,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1),5);
        bufp->chgCData(oldp+93,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2),5);
        bufp->chgCData(oldp+94,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3),3);
        bufp->chgCData(oldp+95,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7),7);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm),32);
        bufp->chgWData(oldp+97,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p),128);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res),32);
        bufp->chgBit(oldp+103,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken));
        bufp->chgWData(oldp+104,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p),128);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn),32);
        bufp->chgWData(oldp+110,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p),128);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address),32);
        bufp->chgCData(oldp+116,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded),2);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data),32);
        bufp->chgWData(oldp+118,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p),128);
        bufp->chgCData(oldp+122,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1),5);
        bufp->chgCData(oldp+123,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2),5);
        bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data),32);
        bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data),32);
        bufp->chgWData(oldp+126,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p),128);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc),32);
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable));
        bufp->chgCData(oldp+132,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination),5);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data),32);
        bufp->chgWData(oldp+134,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p),128);
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        bufp->chgBit(oldp+139,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct));
        bufp->chgWData(oldp+140,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg),4096);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+268,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data),32);
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data),32);
        bufp->chgIData(oldp+270,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o),32);
        bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data),32);
    }
    bufp->chgBit(oldp+272,(vlSelfRef.top__DOT__clock));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
