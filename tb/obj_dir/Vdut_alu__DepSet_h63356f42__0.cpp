// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_alu.h"

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffeU & vlSelf->__Vtogcov__IMM) 
                                  | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffdU & vlSelf->__Vtogcov__IMM) 
                                  | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffbU & vlSelf->__Vtogcov__IMM) 
                                  | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffff7U & vlSelf->__Vtogcov__IMM) 
                                  | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffefU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffdfU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffbfU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffff7fU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffeffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffdffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffbffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffff7ffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffefffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffdfffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffbfffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffff7fffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffeffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffdffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffbffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfff7ffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffefffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffdfffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffbfffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xff7fffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfeffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x1000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfdffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x2000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfbffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x4000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xf7ffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x8000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xefffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xdfffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xbfffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
          ^ vlSelf->__Vtogcov__IMM) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0x7fffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2421]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2422]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2420]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2419]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2413]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2417]);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2414]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2418]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2416]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2415]);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2412]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2411]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2409]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2410]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            ++(vlSymsp->__Vcoverage[2427]);
        }
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2425]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2423]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2426]);
                    }
                }
            }
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2424]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1eU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1dU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1bU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x17U & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                  ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0xfU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (0x10U 
                                             & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffeU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffdU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffbU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfff7U & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffefU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffdfU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x20U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffbfU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x40U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xff7fU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x80U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfeffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x100U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfdffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x200U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfbffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x400U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x800U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xefffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x1000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xdfffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x2000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xbfffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x4000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0x7fffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x8000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__1\n"); );
    // Body
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2))))));
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__0(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2421]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2422]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2420]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2419]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2413]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2417]);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2414]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2418]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2416]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2415]);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2412]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2411]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2409]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2410]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            ++(vlSymsp->__Vcoverage[2427]);
        }
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2425]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2423]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2426]);
                    }
                }
            }
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2424]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}

VL_INLINE_OPT void Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__1(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop2) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop2) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop2) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
               ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop2) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                  ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                   ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                    ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                     ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__ALUop2 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                      ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__ALUop2 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__ALUop2 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                       ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__ALUop2 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__ALUop2 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__ALUop2 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
                        ^ vlSelf->__Vtogcov__ALUop2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__ALUop2 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
          ^ vlSelf->__Vtogcov__ALUop2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__ALUop2 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop2) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffeU & vlSelf->__Vtogcov__ALUop1) 
                                     | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffdU & vlSelf->__Vtogcov__ALUop1) 
                                     | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffffbU & vlSelf->__Vtogcov__ALUop1) 
                                     | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
               ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffff7U & vlSelf->__Vtogcov__ALUop1) 
                                     | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffefU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffdfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffffbfU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                  ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffff7fU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffeffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffdffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffffbffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                   ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffff7ffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffefffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffdfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffffbfffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                    ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffff7fffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffeffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffdffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfffbffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                     ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfff7ffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffefffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffdfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__ALUop1 = ((0xffbfffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                      ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__ALUop1 = ((0xff7fffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfeffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x1000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfdffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x2000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__ALUop1 = ((0xfbffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x4000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                       ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__ALUop1 = ((0xf7ffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x8000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__ALUop1 = ((0xefffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x10000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__ALUop1 = ((0xdfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x20000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                        ^ vlSelf->__Vtogcov__ALUop1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__ALUop1 = ((0xbfffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x40000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
          ^ vlSelf->__Vtogcov__ALUop1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__ALUop1 = ((0x7fffffffU & vlSelf->__Vtogcov__ALUop1) 
                                     | (0x80000000U 
                                        & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1));
    }
    vlSelf->Result = ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                       ? ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? 0U : 
                                           ((1U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1)
                                             ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                           ? 1U : 0U)
                                       : ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : 0U))) : 0U)
                       : ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                           ? ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? 0U : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                            ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                               << (0x1fU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                            : VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                           >> 0x1fU)
                                           ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1)
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                           < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                           ? vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1
                                           : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2))))
                           : ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                               ? ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1)
                                           ? 1U : 0U)
                                       : ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                           == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? ((0x1fU >= vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                           ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                              << vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                           : 0U) : 
                                      ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                        < vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                        ? 1U : 0U)))
                               : ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                   ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? VL_DIV_III(32, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1, vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                          * vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2))
                                   : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))
                                       ? (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                          - vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2)
                                       : (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
                                          + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2))))));
    if ((1U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->__Vtogcov__Result = ((0xfffffffeU & vlSelf->__Vtogcov__Result) 
                                     | (1U & vlSelf->Result));
    }
    if ((2U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->__Vtogcov__Result = ((0xfffffffdU & vlSelf->__Vtogcov__Result) 
                                     | (2U & vlSelf->Result));
    }
    if ((4U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->__Vtogcov__Result = ((0xfffffffbU & vlSelf->__Vtogcov__Result) 
                                     | (4U & vlSelf->Result));
    }
    if ((8U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->__Vtogcov__Result = ((0xfffffff7U & vlSelf->__Vtogcov__Result) 
                                     | (8U & vlSelf->Result));
    }
    if ((0x10U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->__Vtogcov__Result = ((0xffffffefU & vlSelf->__Vtogcov__Result) 
                                     | (0x10U & vlSelf->Result));
    }
    if ((0x20U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->__Vtogcov__Result = ((0xffffffdfU & vlSelf->__Vtogcov__Result) 
                                     | (0x20U & vlSelf->Result));
    }
    if ((0x40U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->__Vtogcov__Result = ((0xffffffbfU & vlSelf->__Vtogcov__Result) 
                                     | (0x40U & vlSelf->Result));
    }
    if ((0x80U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->__Vtogcov__Result = ((0xffffff7fU & vlSelf->__Vtogcov__Result) 
                                     | (0x80U & vlSelf->Result));
    }
    if ((0x100U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->__Vtogcov__Result = ((0xfffffeffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100U & vlSelf->Result));
    }
    if ((0x200U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->__Vtogcov__Result = ((0xfffffdffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200U & vlSelf->Result));
    }
    if ((0x400U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->__Vtogcov__Result = ((0xfffffbffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400U & vlSelf->Result));
    }
    if ((0x800U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->__Vtogcov__Result = ((0xfffff7ffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800U & vlSelf->Result));
    }
    if ((0x1000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->__Vtogcov__Result = ((0xffffefffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000U & vlSelf->Result));
    }
    if ((0x2000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->__Vtogcov__Result = ((0xffffdfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000U & vlSelf->Result));
    }
    if ((0x4000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->__Vtogcov__Result = ((0xffffbfffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000U & vlSelf->Result));
    }
    if ((0x8000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->__Vtogcov__Result = ((0xffff7fffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000U & vlSelf->Result));
    }
    if ((0x10000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->__Vtogcov__Result = ((0xfffeffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000U & vlSelf->Result));
    }
    if ((0x20000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->__Vtogcov__Result = ((0xfffdffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000U & vlSelf->Result));
    }
    if ((0x40000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->__Vtogcov__Result = ((0xfffbffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000U & vlSelf->Result));
    }
    if ((0x80000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->__Vtogcov__Result = ((0xfff7ffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000U & vlSelf->Result));
    }
    if ((0x100000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->__Vtogcov__Result = ((0xffefffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x100000U & vlSelf->Result));
    }
    if ((0x200000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->__Vtogcov__Result = ((0xffdfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x200000U & vlSelf->Result));
    }
    if ((0x400000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->__Vtogcov__Result = ((0xffbfffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x400000U & vlSelf->Result));
    }
    if ((0x800000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->__Vtogcov__Result = ((0xff7fffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x800000U & vlSelf->Result));
    }
    if ((0x1000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->__Vtogcov__Result = ((0xfeffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x1000000U 
                                        & vlSelf->Result));
    }
    if ((0x2000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->__Vtogcov__Result = ((0xfdffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x2000000U 
                                        & vlSelf->Result));
    }
    if ((0x4000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->__Vtogcov__Result = ((0xfbffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x4000000U 
                                        & vlSelf->Result));
    }
    if ((0x8000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->__Vtogcov__Result = ((0xf7ffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x8000000U 
                                        & vlSelf->Result));
    }
    if ((0x10000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->__Vtogcov__Result = ((0xefffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x10000000U 
                                        & vlSelf->Result));
    }
    if ((0x20000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->__Vtogcov__Result = ((0xdfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x20000000U 
                                        & vlSelf->Result));
    }
    if ((0x40000000U & (vlSelf->Result ^ vlSelf->__Vtogcov__Result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->__Vtogcov__Result = ((0xbfffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x40000000U 
                                        & vlSelf->Result));
    }
    if (((vlSelf->Result ^ vlSelf->__Vtogcov__Result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->__Vtogcov__Result = ((0x7fffffffU & vlSelf->__Vtogcov__Result) 
                                     | (0x80000000U 
                                        & vlSelf->Result));
    }
}
