// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_floating_alu.h"

VL_INLINE_OPT void Vdut_floating_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst__0(Vdut_floating_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_floating_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst__0\n"); );
    // Body
    vlSelf->result = 0U;
    vlSelf->__PVT__op1_sign_bit = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
                                   >> 0x1fU);
    vlSelf->__PVT__op2_sign_bit = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2 
                                   >> 0x1fU);
    vlSelf->__PVT__op1_biased_exponent = (0xffU & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
                                                   >> 0x17U));
    vlSelf->__PVT__op2_biased_exponent = (0xffU & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2 
                                                   >> 0x17U));
    vlSelf->__PVT__op1_significand = (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1));
    vlSelf->__PVT__op2_significand = (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2));
    vlSelf->__PVT__exp_diff = 0U;
    vlSelf->__PVT__mantissa_shift_op1 = 0U;
    vlSelf->__PVT__mantissa_shift_op2 = 0U;
    vlSelf->__PVT__sum = 0U;
    vlSelf->__PVT__round_up = 0U;
    vlSelf->__PVT__rounded_sum = 0U;
    vlSelf->__PVT__product = 0ULL;
    vlSelf->__PVT__quotient = 0ULL;
    vlSelf->__PVT__result_exp = 0U;
    vlSelf->__PVT__result_sign_bit = 0U;
    vlSelf->__PVT__guard_bit = 0U;
    vlSelf->__PVT__round_bit = 0U;
    vlSelf->__PVT__numerator = 0ULL;
    vlSelf->__PVT__denominator = 0ULL;
    vlSelf->__PVT__sticky_bit = 0U;
    vlSelf->__PVT__shift_count = 0U;
    vlSelf->__PVT__op1_int = 0U;
    vlSelf->__PVT__op1_unbiased_exponent = 0U;
    vlSelf->__PVT__abs_op1 = 0U;
    vlSelf->__PVT__significant_one = 0U;
    vlSelf->__PVT__norm_exponent = 0U;
    vlSelf->__PVT__norm_mantissa = 0U;
    vlSelf->__PVT__intermediary_exponent = 0U;
    vlSelf->__PVT__shift = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[2986]);
                if ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1)) {
                    ++(vlSymsp->__Vcoverage[2984]);
                    vlSelf->result = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[2985]);
                    vlSelf->__PVT__abs_op1 = ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
                                               >> 0x1fU)
                                               ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1)
                                               : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1);
                    vlSelf->__PVT__significant_one = 0x1fU;
                    while ((VL_LTS_III(32, 0U, vlSelf->__PVT__significant_one) 
                            & (~ (vlSelf->__PVT__abs_op1 
                                  >> (0x1fU & vlSelf->__PVT__significant_one))))) {
                        vlSelf->__PVT__significant_one 
                            = (vlSelf->__PVT__significant_one 
                               - (IData)(1U));
                        ++(vlSymsp->__Vcoverage[2981]);
                    }
                    vlSelf->__PVT__op1_biased_exponent 
                        = (0xffU & ((IData)(0x7fU) 
                                    + vlSelf->__PVT__significant_one));
                    if (VL_LTES_III(32, 0x17U, vlSelf->__PVT__significant_one)) {
                        ++(vlSymsp->__Vcoverage[2982]);
                        vlSelf->__PVT__op1_significand 
                            = ((0x1fU >= (vlSelf->__PVT__significant_one 
                                          - (IData)(0x17U)))
                                ? (0xffffffU & (vlSelf->__PVT__abs_op1 
                                                >> 
                                                (vlSelf->__PVT__significant_one 
                                                 - (IData)(0x17U))))
                                : 0U);
                    } else {
                        ++(vlSymsp->__Vcoverage[2983]);
                        vlSelf->__PVT__op1_significand 
                            = ((0x1fU >= ((IData)(0x17U) 
                                          - vlSelf->__PVT__significant_one))
                                ? (0xffffffU & (vlSelf->__PVT__abs_op1 
                                                << 
                                                ((IData)(0x17U) 
                                                 - vlSelf->__PVT__significant_one)))
                                : 0U);
                    }
                    vlSelf->result = ((0x80000000U 
                                       & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1) 
                                      | (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__op1_significand)));
                }
            }
        } else if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2980]);
                    if ((0xffU == (IData)(vlSelf->__PVT__op1_biased_exponent))) {
                        ++(vlSymsp->__Vcoverage[2979]);
                        vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                           ? 0x80000000U
                                           : 0x7fffffffU);
                    } else if ((0U == (IData)(vlSelf->__PVT__op1_biased_exponent))) {
                        ++(vlSymsp->__Vcoverage[2977]);
                        vlSelf->result = 0U;
                    } else {
                        vlSelf->__PVT__op1_unbiased_exponent 
                            = (0xffU & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                        - (IData)(0x7fU)));
                        ++(vlSymsp->__Vcoverage[2978]);
                        if ((0x7fU < (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                            ++(vlSymsp->__Vcoverage[2976]);
                            vlSelf->result = 0U;
                        } else if ((0x1eU < (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                            ++(vlSymsp->__Vcoverage[2974]);
                            vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                               ? 0x80000000U
                                               : 0x7fffffffU);
                        } else {
                            if ((0x17U <= (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                                ++(vlSymsp->__Vcoverage[2972]);
                                vlSelf->__PVT__op1_int 
                                    = ((0x1fU >= ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                                                  - (IData)(0x17U)))
                                        ? (vlSelf->__PVT__op1_significand 
                                           << ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                                               - (IData)(0x17U)))
                                        : 0U);
                            } else {
                                ++(vlSymsp->__Vcoverage[2973]);
                                vlSelf->__PVT__op1_int 
                                    = ((0x1fU >= ((IData)(0x17U) 
                                                  - (IData)(vlSelf->__PVT__op1_unbiased_exponent)))
                                        ? (vlSelf->__PVT__op1_significand 
                                           >> ((IData)(0x17U) 
                                               - (IData)(vlSelf->__PVT__op1_unbiased_exponent)))
                                        : 0U);
                            }
                            ++(vlSymsp->__Vcoverage[2975]);
                            vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                               ? (- vlSelf->__PVT__op1_int)
                                               : vlSelf->__PVT__op1_int);
                        }
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[2970]);
                    vlSelf->result = (0x7fffffffU & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1);
                }
            } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[2971]);
                vlSelf->result = ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
                                   == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2)
                                   ? 1U : 0U);
            }
        } else if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2969]);
                vlSelf->result = (((~ (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
                                       >> 0x1fU)) << 0x1fU) 
                                  | (0x7fffffffU & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1));
            } else {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            }
        } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            vlSelf->__PVT__numerator = ((QData)((IData)(vlSelf->__PVT__op1_significand)) 
                                        << 0x18U);
            vlSelf->__PVT__denominator = (QData)((IData)(vlSelf->__PVT__op2_significand));
            vlSelf->__PVT__quotient = (0xffffffffffffULL 
                                       & VL_DIV_QQQ(48, vlSelf->__PVT__numerator, vlSelf->__PVT__denominator));
            vlSelf->__PVT__intermediary_exponent = 
                (0x1ffU & ((IData)(0x7fU) + ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                             - (IData)(vlSelf->__PVT__op2_biased_exponent))));
            vlSelf->__PVT__result_sign_bit = ((IData)(vlSelf->__PVT__op1_sign_bit) 
                                              ^ (IData)(vlSelf->__PVT__op2_sign_bit));
            if ((1U & (IData)((vlSelf->__PVT__quotient 
                               >> 0x19U)))) {
                vlSelf->__PVT__quotient = (0xffffffffffffULL 
                                           & (vlSelf->__PVT__quotient 
                                              >> 1U));
                ++(vlSymsp->__Vcoverage[2964]);
                vlSelf->__PVT__norm_exponent = (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__intermediary_exponent)));
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
            } else if ((1U & (IData)((vlSelf->__PVT__quotient 
                                      >> 0x18U)))) {
                ++(vlSymsp->__Vcoverage[2963]);
                vlSelf->__PVT__norm_exponent = vlSelf->__PVT__intermediary_exponent;
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
            } else {
                vlSelf->__PVT__shift = 0U;
                vlSelf->__PVT__unnamedblk1__DOT__i = 0x18U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__unnamedblk1__DOT__i)) {
                        if (((0x2fU >= (0x3fU & vlSelf->__PVT__unnamedblk1__DOT__i)) 
                             & (IData)((vlSelf->__PVT__quotient 
                                        >> (0x3fU & vlSelf->__PVT__unnamedblk1__DOT__i))))) {
                            goto __Vlabel13;
                        } else {
                            ++(vlSymsp->__Vcoverage[2960]);
                        }
                        vlSelf->__PVT__shift = (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__shift)));
                        ++(vlSymsp->__Vcoverage[2961]);
                        vlSelf->__PVT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel13: ;
                }
                vlSelf->__PVT__quotient = ((0x2fU >= (IData)(vlSelf->__PVT__shift))
                                            ? (0xffffffffffffULL 
                                               & (vlSelf->__PVT__quotient 
                                                  << (IData)(vlSelf->__PVT__shift)))
                                            : 0ULL);
                vlSelf->__PVT__norm_exponent = (0x1ffU 
                                                & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                                                   - (IData)(vlSelf->__PVT__shift)));
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
                ++(vlSymsp->__Vcoverage[2962]);
            }
            if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelf->__PVT__norm_exponent)))) {
                vlSelf->__PVT__norm_exponent = 0U;
                ++(vlSymsp->__Vcoverage[2967]);
            } else if (VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,9, (IData)(vlSelf->__PVT__norm_exponent)))) {
                vlSelf->__PVT__norm_exponent = 0xffU;
                ++(vlSymsp->__Vcoverage[2965]);
            } else {
                ++(vlSymsp->__Vcoverage[2966]);
            }
            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->__PVT__norm_exponent) 
                                                << 0x17U)) 
                                            | vlSelf->__PVT__norm_mantissa));
            ++(vlSymsp->__Vcoverage[2968]);
        } else {
            vlSelf->__PVT__product = (0xffffffffffffULL 
                                      & ((QData)((IData)(vlSelf->__PVT__op1_significand)) 
                                         * (QData)((IData)(vlSelf->__PVT__op2_significand))));
            if ((1U & (IData)((vlSelf->__PVT__product 
                               >> 0x2fU)))) {
                vlSelf->__PVT__result_exp = (0xffU 
                                             & ((IData)(1U) 
                                                + (
                                                   ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                    + (IData)(vlSelf->__PVT__op2_biased_exponent)) 
                                                   - (IData)(0x7fU))));
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x18U)));
                vlSelf->__PVT__guard_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x17U)));
                vlSelf->__PVT__round_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x16U)));
                vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                           & ((IData)(vlSelf->__PVT__round_bit) 
                                              | (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x15U))));
                ++(vlSymsp->__Vcoverage[2952]);
            } else {
                vlSelf->__PVT__result_exp = (0xffU 
                                             & (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                 + (IData)(vlSelf->__PVT__op2_biased_exponent)) 
                                                - (IData)(0x7fU)));
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x17U)));
                vlSelf->__PVT__guard_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x16U)));
                vlSelf->__PVT__round_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x15U)));
                vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                           & ((IData)(vlSelf->__PVT__round_bit) 
                                              | (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x14U))));
                ++(vlSymsp->__Vcoverage[2953]);
            }
            vlSelf->__PVT__result_sign_bit = ((IData)(vlSelf->__PVT__op1_sign_bit) 
                                              ^ (IData)(vlSelf->__PVT__op2_sign_bit));
            if (vlSelf->__PVT__round_up) {
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->__PVT__rounded_sum));
                if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                    vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->__PVT__result_exp) 
                                        << 0x17U) | 
                                       (0x7fffffU & vlSelf->__PVT__rounded_sum)));
                    ++(vlSymsp->__Vcoverage[2954]);
                } else {
                    vlSelf->__PVT__result_exp = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__result_exp)));
                    vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->__PVT__result_exp) 
                                        << 0x17U) | 
                                       (0x7fffffU & 
                                        (vlSelf->__PVT__rounded_sum 
                                         >> 1U))));
                    ++(vlSymsp->__Vcoverage[2955]);
                }
                ++(vlSymsp->__Vcoverage[2956]);
            } else {
                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                   << 0x1fU) | (((IData)(vlSelf->__PVT__result_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSelf->__PVT__rounded_sum)));
                ++(vlSymsp->__Vcoverage[2957]);
            }
            ++(vlSymsp->__Vcoverage[2958]);
        }
    } else if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((0xfU == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    vlSelf->__PVT__op2_sign_bit = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__op2_sign_bit)));
                    ++(vlSymsp->__Vcoverage[2929]);
                } else {
                    ++(vlSymsp->__Vcoverage[2930]);
                }
                if (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                     > (IData)(vlSelf->__PVT__op2_biased_exponent))) {
                    vlSelf->__PVT__exp_diff = (0xffU 
                                               & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                  - (IData)(vlSelf->__PVT__op2_biased_exponent)));
                    vlSelf->__PVT__mantissa_shift_op1 
                        = vlSelf->__PVT__op1_significand;
                    vlSelf->__PVT__mantissa_shift_op2 
                        = ((0x18U >= (IData)(vlSelf->__PVT__exp_diff))
                            ? (0x1ffffffU & (vlSelf->__PVT__op2_significand 
                                             >> (IData)(vlSelf->__PVT__exp_diff)))
                            : 0U);
                    vlSelf->__PVT__result_exp = vlSelf->__PVT__op1_biased_exponent;
                    vlSelf->__PVT__result_sign_bit 
                        = vlSelf->__PVT__op1_sign_bit;
                    ++(vlSymsp->__Vcoverage[2931]);
                } else {
                    vlSelf->__PVT__exp_diff = (0xffU 
                                               & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                                                  - (IData)(vlSelf->__PVT__op1_biased_exponent)));
                    vlSelf->__PVT__mantissa_shift_op1 
                        = ((0x18U >= (IData)(vlSelf->__PVT__exp_diff))
                            ? (0x1ffffffU & (vlSelf->__PVT__op1_significand 
                                             >> (IData)(vlSelf->__PVT__exp_diff)))
                            : 0U);
                    vlSelf->__PVT__mantissa_shift_op2 
                        = vlSelf->__PVT__op2_significand;
                    vlSelf->__PVT__result_exp = vlSelf->__PVT__op2_biased_exponent;
                    vlSelf->__PVT__result_sign_bit 
                        = vlSelf->__PVT__op2_sign_bit;
                    ++(vlSymsp->__Vcoverage[2932]);
                }
                if (((IData)(vlSelf->__PVT__op1_sign_bit) 
                     == (IData)(vlSelf->__PVT__op2_sign_bit))) {
                    vlSelf->__PVT__sum = (0x1ffffffU 
                                          & (vlSelf->__PVT__mantissa_shift_op1 
                                             + vlSelf->__PVT__mantissa_shift_op2));
                    if ((0x1000000U & vlSelf->__PVT__sum)) {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__sum 
                                                 >> 1U));
                        vlSelf->__PVT__result_exp = 
                            (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__result_exp)));
                        ++(vlSymsp->__Vcoverage[2934]);
                    } else {
                        while (((~ (vlSelf->__PVT__sum 
                                    >> 0x17U)) & (0U 
                                                  < (IData)(vlSelf->__PVT__result_exp)))) {
                            vlSelf->__PVT__sum = (0x1ffffffU 
                                                  & (vlSelf->__PVT__sum 
                                                     << 1U));
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(vlSelf->__PVT__result_exp) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[2933]);
                        }
                        ++(vlSymsp->__Vcoverage[2935]);
                    }
                    vlSelf->__PVT__guard_bit = (1U 
                                                & (vlSelf->__PVT__sum 
                                                   >> 1U));
                    vlSelf->__PVT__round_bit = (1U 
                                                & vlSelf->__PVT__sum);
                    vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                               & ((IData)(vlSelf->__PVT__round_bit) 
                                                  | (vlSelf->__PVT__sum 
                                                     >> 2U)));
                    if (vlSelf->__PVT__round_up) {
                        vlSelf->__PVT__rounded_sum 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->__PVT__sum));
                        if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__rounded_sum)));
                            ++(vlSymsp->__Vcoverage[2936]);
                        } else {
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__result_exp)));
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (vlSelf->__PVT__rounded_sum 
                                                       >> 1U))));
                            ++(vlSymsp->__Vcoverage[2937]);
                        }
                        ++(vlSymsp->__Vcoverage[2938]);
                    } else {
                        vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelf->__PVT__result_exp) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->__PVT__sum)));
                        ++(vlSymsp->__Vcoverage[2939]);
                    }
                    ++(vlSymsp->__Vcoverage[2949]);
                } else {
                    if ((vlSelf->__PVT__mantissa_shift_op1 
                         >= vlSelf->__PVT__mantissa_shift_op2)) {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__mantissa_shift_op1 
                                                 - vlSelf->__PVT__mantissa_shift_op2));
                        vlSelf->__PVT__result_sign_bit 
                            = vlSelf->__PVT__op1_sign_bit;
                        ++(vlSymsp->__Vcoverage[2940]);
                    } else {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__mantissa_shift_op2 
                                                 - vlSelf->__PVT__mantissa_shift_op1));
                        vlSelf->__PVT__result_sign_bit 
                            = vlSelf->__PVT__op2_sign_bit;
                        ++(vlSymsp->__Vcoverage[2941]);
                    }
                    if ((0U == vlSelf->__PVT__sum)) {
                        vlSelf->result = 0U;
                        ++(vlSymsp->__Vcoverage[2947]);
                    } else {
                        while (((~ (vlSelf->__PVT__sum 
                                    >> 0x17U)) & (0U 
                                                  < (IData)(vlSelf->__PVT__result_exp)))) {
                            vlSelf->__PVT__sum = (0x1ffffffU 
                                                  & (vlSelf->__PVT__sum 
                                                     << 1U));
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(vlSelf->__PVT__result_exp) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[2942]);
                        }
                        vlSelf->__PVT__guard_bit = 
                            (1U & (vlSelf->__PVT__sum 
                                   >> 1U));
                        vlSelf->__PVT__round_bit = 
                            (1U & vlSelf->__PVT__sum);
                        vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                                   & ((IData)(vlSelf->__PVT__round_bit) 
                                                      | (vlSelf->__PVT__sum 
                                                         >> 2U)));
                        if (vlSelf->__PVT__round_up) {
                            vlSelf->__PVT__rounded_sum 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelf->__PVT__sum));
                            if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__result_exp) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & vlSelf->__PVT__rounded_sum)));
                                ++(vlSymsp->__Vcoverage[2943]);
                            } else {
                                vlSelf->__PVT__result_exp 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__result_exp)));
                                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__result_exp) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & (vlSelf->__PVT__rounded_sum 
                                                           >> 1U))));
                                ++(vlSymsp->__Vcoverage[2944]);
                            }
                            ++(vlSymsp->__Vcoverage[2945]);
                        } else {
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__sum)));
                            ++(vlSymsp->__Vcoverage[2946]);
                        }
                        ++(vlSymsp->__Vcoverage[2948]);
                    }
                    ++(vlSymsp->__Vcoverage[2950]);
                }
                ++(vlSymsp->__Vcoverage[2951]);
            } else {
                vlSelf->result = 0U;
                ++(vlSymsp->__Vcoverage[2987]);
            }
        } else {
            vlSelf->result = 0U;
            ++(vlSymsp->__Vcoverage[2987]);
        }
    } else {
        vlSelf->result = 0U;
        ++(vlSymsp->__Vcoverage[2987]);
    }
    ++(vlSymsp->__Vcoverage[2988]);
    if (((IData)(vlSelf->__PVT__op1_sign_bit) ^ (IData)(vlSelf->__Vtogcov__op1_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->__Vtogcov__op1_sign_bit = vlSelf->__PVT__op1_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__op2_sign_bit) ^ (IData)(vlSelf->__Vtogcov__op2_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->__Vtogcov__op2_sign_bit = vlSelf->__PVT__op2_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__round_up) ^ (IData)(vlSelf->__Vtogcov__round_up))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->__Vtogcov__round_up = vlSelf->__PVT__round_up;
    }
    if (((IData)(vlSelf->__PVT__result_sign_bit) ^ (IData)(vlSelf->__Vtogcov__result_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->__Vtogcov__result_sign_bit = vlSelf->__PVT__result_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__guard_bit) ^ (IData)(vlSelf->__Vtogcov__guard_bit))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->__Vtogcov__guard_bit = vlSelf->__PVT__guard_bit;
    }
    if (((IData)(vlSelf->__PVT__round_bit) ^ (IData)(vlSelf->__Vtogcov__round_bit))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->__Vtogcov__round_bit = vlSelf->__PVT__round_bit;
    }
    if (vlSelf->__Vtogcov__sticky_bit) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->__Vtogcov__sticky_bit = vlSelf->__PVT__sticky_bit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfeU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfdU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfbU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xf7U 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xefU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xdfU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xbfU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0x7fU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfeU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfdU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfbU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xf7U 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xefU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xdfU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xbfU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0x7fU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->__Vtogcov__exp_diff = ((0xfeU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (1U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->__Vtogcov__exp_diff = ((0xfdU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (2U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->__Vtogcov__exp_diff = ((0xfbU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (4U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->__Vtogcov__exp_diff = ((0xf7U & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (8U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->__Vtogcov__exp_diff = ((0xefU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x10U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->__Vtogcov__exp_diff = ((0xdfU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x20U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->__Vtogcov__exp_diff = ((0xbfU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x40U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->__Vtogcov__exp_diff = ((0x7fU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x80U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->__Vtogcov__result_exp = ((0xfeU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (1U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->__Vtogcov__result_exp = ((0xfdU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (2U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->__Vtogcov__result_exp = ((0xfbU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (4U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->__Vtogcov__result_exp = ((0xf7U & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (8U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->__Vtogcov__result_exp = ((0xefU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x10U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->__Vtogcov__result_exp = ((0xdfU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x20U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->__Vtogcov__result_exp = ((0xbfU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x40U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->__Vtogcov__result_exp = ((0x7fU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x80U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfeU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (1U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfdU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (2U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfbU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (4U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xf7U & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (8U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xefU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x10U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xdfU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x20U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xbfU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x40U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0x7fU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x80U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1feU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (1U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1fdU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (2U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1fbU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (4U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1f7U 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (8U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1efU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x10U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1dfU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x20U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1bfU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x40U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->__Vtogcov__norm_exponent = ((0x17fU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x80U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__norm_exponent) 
                   ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->__Vtogcov__norm_exponent = ((0xffU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x100U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1feU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (1U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1fdU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (2U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1fbU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (4U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1f7U & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (8U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1efU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x10U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1dfU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x20U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1bfU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x40U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x17fU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x80U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                   ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0xffU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x100U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->__Vtogcov__shift = ((0x1feU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (1U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->__Vtogcov__shift = ((0x1fdU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (2U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->__Vtogcov__shift = ((0x1fbU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (4U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->__Vtogcov__shift = ((0x1f7U & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (8U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->__Vtogcov__shift = ((0x1efU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->__Vtogcov__shift = ((0x1dfU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->__Vtogcov__shift = ((0x1bfU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->__Vtogcov__shift = ((0x17fU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->__Vtogcov__shift = ((0xffU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((1U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffeU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (1U & vlSelf->__PVT__norm_mantissa));
    }
    if ((2U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffdU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (2U & vlSelf->__PVT__norm_mantissa));
    }
    if ((4U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffbU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (4U & vlSelf->__PVT__norm_mantissa));
    }
    if ((8U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffff7U 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (8U & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x10U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffefU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x10U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x20U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffdfU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x20U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x40U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffbfU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x40U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x80U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fff7fU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x80U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x100U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffeffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x100U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x200U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffdffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x200U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x400U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffbffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x400U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x800U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ff7ffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x800U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x1000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fefffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x1000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x2000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fdfffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x2000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x4000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fbfffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x4000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x8000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7f7fffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x8000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x10000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7effffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x10000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x20000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7dffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x20000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x40000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7bffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x40000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x80000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x77ffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x80000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x100000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x6fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x100000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x200000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x5fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x200000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x400000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x3fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x400000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((1U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffeU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (1U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((2U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffdU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (2U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((4U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffbU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (4U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((8U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffff7U 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (8U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x10U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffefU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x20U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffdfU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x40U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffbfU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x80U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->__Vtogcov__op1_significand = ((0xffff7fU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x100U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffeffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x200U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffdffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x400U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffbffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x800U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->__Vtogcov__op1_significand = ((0xfff7ffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x1000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->__Vtogcov__op1_significand = ((0xffefffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x2000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->__Vtogcov__op1_significand = ((0xffdfffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x4000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->__Vtogcov__op1_significand = ((0xffbfffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x8000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->__Vtogcov__op1_significand = ((0xff7fffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x10000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->__Vtogcov__op1_significand = ((0xfeffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x20000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->__Vtogcov__op1_significand = ((0xfdffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x40000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->__Vtogcov__op1_significand = ((0xfbffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x80000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->__Vtogcov__op1_significand = ((0xf7ffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x100000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->__Vtogcov__op1_significand = ((0xefffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x200000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->__Vtogcov__op1_significand = ((0xdfffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x400000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->__Vtogcov__op1_significand = ((0xbfffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x800000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->__Vtogcov__op1_significand = ((0x7fffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((1U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffeU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (1U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((2U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffdU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (2U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((4U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffbU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (4U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((8U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffff7U 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (8U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x10U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffefU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x20U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffdfU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x40U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffbfU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x80U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->__Vtogcov__op2_significand = ((0xffff7fU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x100U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffeffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x200U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffdffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x400U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffbffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x800U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->__Vtogcov__op2_significand = ((0xfff7ffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x1000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->__Vtogcov__op2_significand = ((0xffefffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x2000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->__Vtogcov__op2_significand = ((0xffdfffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x4000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->__Vtogcov__op2_significand = ((0xffbfffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x8000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->__Vtogcov__op2_significand = ((0xff7fffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x10000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->__Vtogcov__op2_significand = ((0xfeffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x20000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->__Vtogcov__op2_significand = ((0xfdffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x40000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->__Vtogcov__op2_significand = ((0xfbffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x80000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->__Vtogcov__op2_significand = ((0xf7ffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x100000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->__Vtogcov__op2_significand = ((0xefffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x200000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->__Vtogcov__op2_significand = ((0xdfffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x400000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->__Vtogcov__op2_significand = ((0xbfffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x800000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->__Vtogcov__op2_significand = ((0x7fffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((1U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffeU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (1U & vlSelf->__PVT__rounded_sum));
    }
    if ((2U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffdU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (2U & vlSelf->__PVT__rounded_sum));
    }
    if ((4U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffbU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (4U & vlSelf->__PVT__rounded_sum));
    }
    if ((8U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffff7U 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (8U & vlSelf->__PVT__rounded_sum));
    }
    if ((0x10U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffefU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x10U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x20U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffdfU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x20U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x40U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffbfU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x40U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x80U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffff7fU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x80U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x100U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffeffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x100U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x200U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffdffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x200U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x400U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffbffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x400U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x800U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfff7ffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x800U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x1000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffefffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x1000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x2000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffdfffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x2000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x4000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffbfffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x4000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x8000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->__Vtogcov__rounded_sum = ((0xff7fffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x8000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x10000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfeffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x10000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x20000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfdffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x20000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x40000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfbffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x40000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x80000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->__Vtogcov__rounded_sum = ((0xf7ffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x80000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x100000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->__Vtogcov__rounded_sum = ((0xefffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x100000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x200000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->__Vtogcov__rounded_sum = ((0xdfffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x200000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x400000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->__Vtogcov__rounded_sum = ((0xbfffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x400000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x800000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->__Vtogcov__rounded_sum = ((0x7fffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x800000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((1U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffeU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (1U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((2U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffdU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (2U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((4U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffbU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (4U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((8U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffff7U 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (8U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x10U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffefU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x10U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x20U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffdfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x20U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x40U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffbfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x40U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x80U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffff7fU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x80U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x100U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffeffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x100U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x200U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffdffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x200U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x400U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffbffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x400U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x800U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fff7ffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x800U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffefffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x1000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffdfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x2000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffbfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x4000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ff7fffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x8000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1feffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x10000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fdffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x20000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fbffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x40000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1f7ffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x80000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1efffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x100000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1dfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x200000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1bfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x400000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x17fffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x800000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__mantissa_shift_op1 
                       ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0xffffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x1000000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((1U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffeU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (1U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((2U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffdU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (2U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((4U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffbU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (4U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((8U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffff7U 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (8U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x10U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffefU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x10U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x20U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffdfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x20U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x40U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffbfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x40U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x80U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffff7fU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x80U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x100U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffeffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x100U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x200U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffdffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x200U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x400U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffbffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x400U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x800U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fff7ffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x800U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffefffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x1000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffdfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x2000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffbfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x4000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ff7fffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x8000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1feffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x10000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fdffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x20000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fbffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x40000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1f7ffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x80000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1efffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x100000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1dfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x200000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1bfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x400000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x17fffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x800000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__mantissa_shift_op2 
                       ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0xffffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x1000000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((1U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->__Vtogcov__sum = ((0x1fffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__sum));
    }
    if ((2U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->__Vtogcov__sum = ((0x1fffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__sum));
    }
    if ((4U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->__Vtogcov__sum = ((0x1fffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__sum));
    }
    if ((8U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->__Vtogcov__sum = ((0x1fffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__sum));
    }
    if ((0x10U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->__Vtogcov__sum = ((0x1ffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__sum));
    }
    if ((0x20U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->__Vtogcov__sum = ((0x1ffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__sum));
    }
    if ((0x40U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->__Vtogcov__sum = ((0x1ffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__sum));
    }
    if ((0x80U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->__Vtogcov__sum = ((0x1ffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__sum));
    }
    if ((0x100U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->__Vtogcov__sum = ((0x1fffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__sum));
    }
    if ((0x200U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->__Vtogcov__sum = ((0x1fffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__sum));
    }
    if ((0x400U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->__Vtogcov__sum = ((0x1fffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__sum));
    }
    if ((0x800U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->__Vtogcov__sum = ((0x1fff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__sum));
    }
    if ((0x1000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->__Vtogcov__sum = ((0x1ffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__sum));
    }
    if ((0x2000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->__Vtogcov__sum = ((0x1ffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__sum));
    }
    if ((0x4000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->__Vtogcov__sum = ((0x1ffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__sum));
    }
    if ((0x8000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->__Vtogcov__sum = ((0x1ff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__sum));
    }
    if ((0x10000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->__Vtogcov__sum = ((0x1feffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__sum));
    }
    if ((0x20000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->__Vtogcov__sum = ((0x1fdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__sum));
    }
    if ((0x40000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->__Vtogcov__sum = ((0x1fbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__sum));
    }
    if ((0x80000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->__Vtogcov__sum = ((0x1f7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__sum));
    }
    if ((0x100000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->__Vtogcov__sum = ((0x1efffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__sum));
    }
    if ((0x200000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->__Vtogcov__sum = ((0x1dfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__sum));
    }
    if ((0x400000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->__Vtogcov__sum = ((0x1bfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__sum));
    }
    if ((0x800000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->__Vtogcov__sum = ((0x17fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__sum));
    }
    if ((0x1000000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->__Vtogcov__sum = ((0xffffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000000U & vlSelf->__PVT__sum));
    }
    if ((1U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (1U & vlSelf->__PVT__op1_int));
    }
    if ((2U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (2U & vlSelf->__PVT__op1_int));
    }
    if ((4U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (4U & vlSelf->__PVT__op1_int));
    }
    if ((8U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (8U & vlSelf->__PVT__op1_int));
    }
    if ((0x10U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10U & vlSelf->__PVT__op1_int));
    }
    if ((0x20U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20U & vlSelf->__PVT__op1_int));
    }
    if ((0x40U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40U & vlSelf->__PVT__op1_int));
    }
    if ((0x80U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->__Vtogcov__op1_int = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80U & vlSelf->__PVT__op1_int));
    }
    if ((0x100U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x100U & vlSelf->__PVT__op1_int));
    }
    if ((0x200U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x200U & vlSelf->__PVT__op1_int));
    }
    if ((0x400U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x400U & vlSelf->__PVT__op1_int));
    }
    if ((0x800U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->__Vtogcov__op1_int = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x800U & vlSelf->__PVT__op1_int));
    }
    if ((0x1000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->__Vtogcov__op1_int = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x1000U & vlSelf->__PVT__op1_int));
    }
    if ((0x2000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->__Vtogcov__op1_int = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x2000U & vlSelf->__PVT__op1_int));
    }
    if ((0x4000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->__Vtogcov__op1_int = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x4000U & vlSelf->__PVT__op1_int));
    }
    if ((0x8000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->__Vtogcov__op1_int = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x8000U & vlSelf->__PVT__op1_int));
    }
    if ((0x10000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->__Vtogcov__op1_int = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10000U & vlSelf->__PVT__op1_int));
    }
    if ((0x20000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->__Vtogcov__op1_int = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20000U & vlSelf->__PVT__op1_int));
    }
    if ((0x40000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->__Vtogcov__op1_int = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40000U & vlSelf->__PVT__op1_int));
    }
    if ((0x80000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->__Vtogcov__op1_int = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80000U & vlSelf->__PVT__op1_int));
    }
    if ((0x100000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->__Vtogcov__op1_int = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x200000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->__Vtogcov__op1_int = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x400000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->__Vtogcov__op1_int = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x800000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->__Vtogcov__op1_int = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x1000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->__Vtogcov__op1_int = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x2000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->__Vtogcov__op1_int = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x4000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->__Vtogcov__op1_int = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x8000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->__Vtogcov__op1_int = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x10000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->__Vtogcov__op1_int = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x20000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->__Vtogcov__op1_int = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x40000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->__Vtogcov__op1_int = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if (((vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->__Vtogcov__op1_int = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((1U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (1U & vlSelf->__PVT__abs_op1));
    }
    if ((2U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (2U & vlSelf->__PVT__abs_op1));
    }
    if ((4U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (4U & vlSelf->__PVT__abs_op1));
    }
    if ((8U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (8U & vlSelf->__PVT__abs_op1));
    }
    if ((0x10U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10U & vlSelf->__PVT__abs_op1));
    }
    if ((0x20U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20U & vlSelf->__PVT__abs_op1));
    }
    if ((0x40U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40U & vlSelf->__PVT__abs_op1));
    }
    if ((0x80U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80U & vlSelf->__PVT__abs_op1));
    }
    if ((0x100U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x100U & vlSelf->__PVT__abs_op1));
    }
    if ((0x200U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x200U & vlSelf->__PVT__abs_op1));
    }
    if ((0x400U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x400U & vlSelf->__PVT__abs_op1));
    }
    if ((0x800U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x800U & vlSelf->__PVT__abs_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x1000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x2000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x4000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x8000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->__Vtogcov__abs_op1 = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->__Vtogcov__abs_op1 = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->__Vtogcov__abs_op1 = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->__Vtogcov__abs_op1 = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->__Vtogcov__abs_op1 = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if (((vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->__Vtogcov__abs_op1 = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((1U & ((IData)(vlSelf->__PVT__product) ^ (IData)(vlSelf->__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffeULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | (IData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__product)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffdULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 1U))))) 
                                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffbULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 2U))))) 
                                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->__Vtogcov__product = ((0xfffffffffff7ULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 3U))))) 
                                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->__Vtogcov__product = ((0xffffffffffefULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 4U))))) 
                                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->__Vtogcov__product = ((0xffffffffffdfULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 5U))))) 
                                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->__Vtogcov__product = ((0xffffffffffbfULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 6U))))) 
                                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->__Vtogcov__product = ((0xffffffffff7fULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 7U))))) 
                                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->__Vtogcov__product = ((0xfffffffffeffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 8U))))) 
                                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->__Vtogcov__product = ((0xfffffffffdffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 9U))))) 
                                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->__Vtogcov__product = ((0xfffffffffbffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xaU))))) 
                                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->__Vtogcov__product = ((0xfffffffff7ffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xbU))))) 
                                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->__Vtogcov__product = ((0xffffffffefffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xcU))))) 
                                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->__Vtogcov__product = ((0xffffffffdfffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xdU))))) 
                                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->__Vtogcov__product = ((0xffffffffbfffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xeU))))) 
                                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->__Vtogcov__product = ((0xffffffff7fffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xfU))))) 
                                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->__Vtogcov__product = ((0xfffffffeffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x10U))))) 
                                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->__Vtogcov__product = ((0xfffffffdffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x11U))))) 
                                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->__Vtogcov__product = ((0xfffffffbffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x12U))))) 
                                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->__Vtogcov__product = ((0xfffffff7ffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x13U))))) 
                                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->__Vtogcov__product = ((0xffffffefffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x14U))))) 
                                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->__Vtogcov__product = ((0xffffffdfffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x15U))))) 
                                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->__Vtogcov__product = ((0xffffffbfffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x16U))))) 
                                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->__Vtogcov__product = ((0xffffff7fffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x17U))))) 
                                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->__Vtogcov__product = ((0xfffffeffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x18U))))) 
                                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->__Vtogcov__product = ((0xfffffdffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x19U))))) 
                                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->__Vtogcov__product = ((0xfffffbffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1aU))))) 
                                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->__Vtogcov__product = ((0xfffff7ffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1bU))))) 
                                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->__Vtogcov__product = ((0xffffefffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1cU))))) 
                                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->__Vtogcov__product = ((0xffffdfffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1dU))))) 
                                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->__Vtogcov__product = ((0xffffbfffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1eU))))) 
                                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->__Vtogcov__product = ((0xffff7fffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1fU))))) 
                                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->__Vtogcov__product = ((0xfffeffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x20U))))) 
                                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->__Vtogcov__product = ((0xfffdffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x21U))))) 
                                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->__Vtogcov__product = ((0xfffbffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x22U))))) 
                                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->__Vtogcov__product = ((0xfff7ffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x23U))))) 
                                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->__Vtogcov__product = ((0xffefffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x24U))))) 
                                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->__Vtogcov__product = ((0xffdfffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x25U))))) 
                                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->__Vtogcov__product = ((0xffbfffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x26U))))) 
                                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->__Vtogcov__product = ((0xff7fffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x27U))))) 
                                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->__Vtogcov__product = ((0xfeffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x28U))))) 
                                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->__Vtogcov__product = ((0xfdffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x29U))))) 
                                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->__Vtogcov__product = ((0xfbffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2aU))))) 
                                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->__Vtogcov__product = ((0xf7ffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->__Vtogcov__product = ((0xefffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2cU))))) 
                                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->__Vtogcov__product = ((0xdfffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2dU))))) 
                                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->__Vtogcov__product = ((0xbfffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2eU))))) 
                                         << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__product ^ vlSelf->__Vtogcov__product) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->__Vtogcov__product = ((0x7fffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2fU))))) 
                                         << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__quotient) ^ (IData)(vlSelf->__Vtogcov__quotient)))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffeULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__quotient)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffdULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 1U))))) 
                                          << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffbULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 2U))))) 
                                          << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffff7ULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 3U))))) 
                                          << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffefULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 4U))))) 
                                          << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffdfULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 5U))))) 
                                          << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffbfULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 6U))))) 
                                          << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffff7fULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 7U))))) 
                                          << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffeffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 8U))))) 
                                          << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffdffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 9U))))) 
                                          << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffbffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xaU))))) 
                                          << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffff7ffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xbU))))) 
                                          << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffefffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xcU))))) 
                                          << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffdfffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xdU))))) 
                                          << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffbfffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xeU))))) 
                                          << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->__Vtogcov__quotient = ((0xffffffff7fffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xfU))))) 
                                          << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffeffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x10U))))) 
                                          << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffdffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x11U))))) 
                                          << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffbffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x12U))))) 
                                          << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->__Vtogcov__quotient = ((0xfffffff7ffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x13U))))) 
                                          << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->__Vtogcov__quotient = ((0xffffffefffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x14U))))) 
                                          << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->__Vtogcov__quotient = ((0xffffffdfffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x15U))))) 
                                          << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->__Vtogcov__quotient = ((0xffffffbfffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x16U))))) 
                                          << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->__Vtogcov__quotient = ((0xffffff7fffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x17U))))) 
                                          << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->__Vtogcov__quotient = ((0xfffffeffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x18U))))) 
                                          << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->__Vtogcov__quotient = ((0xfffffdffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x19U))))) 
                                          << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->__Vtogcov__quotient = ((0xfffffbffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1aU))))) 
                                          << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->__Vtogcov__quotient = ((0xfffff7ffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1bU))))) 
                                          << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->__Vtogcov__quotient = ((0xffffefffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1cU))))) 
                                          << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->__Vtogcov__quotient = ((0xffffdfffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1dU))))) 
                                          << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->__Vtogcov__quotient = ((0xffffbfffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1eU))))) 
                                          << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->__Vtogcov__quotient = ((0xffff7fffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1fU))))) 
                                          << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->__Vtogcov__quotient = ((0xfffeffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x20U))))) 
                                          << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->__Vtogcov__quotient = ((0xfffdffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x21U))))) 
                                          << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->__Vtogcov__quotient = ((0xfffbffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x22U))))) 
                                          << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->__Vtogcov__quotient = ((0xfff7ffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x23U))))) 
                                          << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->__Vtogcov__quotient = ((0xffefffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x24U))))) 
                                          << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->__Vtogcov__quotient = ((0xffdfffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x25U))))) 
                                          << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->__Vtogcov__quotient = ((0xffbfffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x26U))))) 
                                          << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->__Vtogcov__quotient = ((0xff7fffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x27U))))) 
                                          << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->__Vtogcov__quotient = ((0xfeffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x28U))))) 
                                          << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->__Vtogcov__quotient = ((0xfdffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x29U))))) 
                                          << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->__Vtogcov__quotient = ((0xfbffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2aU))))) 
                                          << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->__Vtogcov__quotient = ((0xf7ffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2bU))))) 
                                          << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->__Vtogcov__quotient = ((0xefffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2cU))))) 
                                          << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->__Vtogcov__quotient = ((0xdfffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2dU))))) 
                                          << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->__Vtogcov__quotient = ((0xbfffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2eU))))) 
                                          << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__quotient ^ vlSelf->__Vtogcov__quotient) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->__Vtogcov__quotient = ((0x7fffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2fU))))) 
                                          << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__numerator) ^ (IData)(vlSelf->__Vtogcov__numerator)))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffeULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__numerator)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffdULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffbULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffff7ULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffefULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffdfULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffbfULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffff7fULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffeffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffdffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffbffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffff7ffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffefffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffdfffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffbfffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->__Vtogcov__numerator = ((0xffffffff7fffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffeffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffdffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffbffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->__Vtogcov__numerator = ((0xfffffff7ffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->__Vtogcov__numerator = ((0xffffffefffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->__Vtogcov__numerator = ((0xffffffdfffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->__Vtogcov__numerator = ((0xffffffbfffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->__Vtogcov__numerator = ((0xffffff7fffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->__Vtogcov__numerator = ((0xfffffeffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->__Vtogcov__numerator = ((0xfffffdffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->__Vtogcov__numerator = ((0xfffffbffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->__Vtogcov__numerator = ((0xfffff7ffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->__Vtogcov__numerator = ((0xffffefffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->__Vtogcov__numerator = ((0xffffdfffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->__Vtogcov__numerator = ((0xffffbfffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->__Vtogcov__numerator = ((0xffff7fffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->__Vtogcov__numerator = ((0xfffeffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->__Vtogcov__numerator = ((0xfffdffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->__Vtogcov__numerator = ((0xfffbffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->__Vtogcov__numerator = ((0xfff7ffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->__Vtogcov__numerator = ((0xffefffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->__Vtogcov__numerator = ((0xffdfffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->__Vtogcov__numerator = ((0xffbfffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->__Vtogcov__numerator = ((0xff7fffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->__Vtogcov__numerator = ((0xfeffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->__Vtogcov__numerator = ((0xfdffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->__Vtogcov__numerator = ((0xfbffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->__Vtogcov__numerator = ((0xf7ffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->__Vtogcov__numerator = ((0xefffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->__Vtogcov__numerator = ((0xdfffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->__Vtogcov__numerator = ((0xbfffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__numerator ^ vlSelf->__Vtogcov__numerator) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->__Vtogcov__numerator = ((0x7fffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__denominator) 
               ^ (IData)(vlSelf->__Vtogcov__denominator)))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffeULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->__PVT__denominator)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 1U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffdULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 1U))))) 
                                             << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 2U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffbULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 2U))))) 
                                             << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 3U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffff7ULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 3U))))) 
                                             << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 4U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffefULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 4U))))) 
                                             << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 5U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffdfULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 5U))))) 
                                             << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 6U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffbfULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 6U))))) 
                                             << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 7U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffff7fULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 7U))))) 
                                             << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 8U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffeffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 8U))))) 
                                             << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 9U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffdffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 9U))))) 
                                             << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xaU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffbffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xaU))))) 
                                             << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xbU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffff7ffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xbU))))) 
                                             << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xcU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffefffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xcU))))) 
                                             << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xdU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffdfffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xdU))))) 
                                             << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xeU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffbfffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xeU))))) 
                                             << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xfU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->__Vtogcov__denominator = ((0xffffffff7fffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xfU))))) 
                                             << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x10U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffeffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x10U))))) 
                                             << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x11U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffdffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x11U))))) 
                                             << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x12U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffbffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x12U))))) 
                                             << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x13U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->__Vtogcov__denominator = ((0xfffffff7ffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x13U))))) 
                                             << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x14U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->__Vtogcov__denominator = ((0xffffffefffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x14U))))) 
                                             << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x15U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->__Vtogcov__denominator = ((0xffffffdfffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x15U))))) 
                                             << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x16U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->__Vtogcov__denominator = ((0xffffffbfffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x16U))))) 
                                             << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x17U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->__Vtogcov__denominator = ((0xffffff7fffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x17U))))) 
                                             << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x18U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->__Vtogcov__denominator = ((0xfffffeffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x18U))))) 
                                             << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x19U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->__Vtogcov__denominator = ((0xfffffdffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x19U))))) 
                                             << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1aU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->__Vtogcov__denominator = ((0xfffffbffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1aU))))) 
                                             << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1bU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->__Vtogcov__denominator = ((0xfffff7ffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1bU))))) 
                                             << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1cU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->__Vtogcov__denominator = ((0xffffefffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1cU))))) 
                                             << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1dU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->__Vtogcov__denominator = ((0xffffdfffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1dU))))) 
                                             << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1eU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->__Vtogcov__denominator = ((0xffffbfffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1eU))))) 
                                             << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1fU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->__Vtogcov__denominator = ((0xffff7fffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1fU))))) 
                                             << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x20U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->__Vtogcov__denominator = ((0xfffeffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x20U))))) 
                                             << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x21U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->__Vtogcov__denominator = ((0xfffdffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x21U))))) 
                                             << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x22U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->__Vtogcov__denominator = ((0xfffbffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x22U))))) 
                                             << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x23U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->__Vtogcov__denominator = ((0xfff7ffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x23U))))) 
                                             << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x24U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->__Vtogcov__denominator = ((0xffefffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x24U))))) 
                                             << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x25U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->__Vtogcov__denominator = ((0xffdfffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x25U))))) 
                                             << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x26U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->__Vtogcov__denominator = ((0xffbfffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x26U))))) 
                                             << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x27U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->__Vtogcov__denominator = ((0xff7fffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x27U))))) 
                                             << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x28U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->__Vtogcov__denominator = ((0xfeffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x28U))))) 
                                             << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x29U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->__Vtogcov__denominator = ((0xfdffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x29U))))) 
                                             << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2aU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->__Vtogcov__denominator = ((0xfbffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2aU))))) 
                                             << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2bU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->__Vtogcov__denominator = ((0xf7ffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2bU))))) 
                                             << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2cU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->__Vtogcov__denominator = ((0xefffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2cU))))) 
                                             << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2dU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->__Vtogcov__denominator = ((0xdfffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2dU))))) 
                                             << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2eU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->__Vtogcov__denominator = ((0xbfffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2eU))))) 
                                             << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__denominator ^ vlSelf->__Vtogcov__denominator) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->__Vtogcov__denominator = ((0x7fffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2fU))))) 
                                             << 0x2fU));
    }
    if ((1U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->__Vtogcov__result = ((0xfffffffeU & vlSelf->__Vtogcov__result) 
                                     | (1U & vlSelf->result));
    }
    if ((2U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->__Vtogcov__result = ((0xfffffffdU & vlSelf->__Vtogcov__result) 
                                     | (2U & vlSelf->result));
    }
    if ((4U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->__Vtogcov__result = ((0xfffffffbU & vlSelf->__Vtogcov__result) 
                                     | (4U & vlSelf->result));
    }
    if ((8U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->__Vtogcov__result = ((0xfffffff7U & vlSelf->__Vtogcov__result) 
                                     | (8U & vlSelf->result));
    }
    if ((0x10U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->__Vtogcov__result = ((0xffffffefU & vlSelf->__Vtogcov__result) 
                                     | (0x10U & vlSelf->result));
    }
    if ((0x20U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->__Vtogcov__result = ((0xffffffdfU & vlSelf->__Vtogcov__result) 
                                     | (0x20U & vlSelf->result));
    }
    if ((0x40U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->__Vtogcov__result = ((0xffffffbfU & vlSelf->__Vtogcov__result) 
                                     | (0x40U & vlSelf->result));
    }
    if ((0x80U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->__Vtogcov__result = ((0xffffff7fU & vlSelf->__Vtogcov__result) 
                                     | (0x80U & vlSelf->result));
    }
    if ((0x100U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->__Vtogcov__result = ((0xfffffeffU & vlSelf->__Vtogcov__result) 
                                     | (0x100U & vlSelf->result));
    }
    if ((0x200U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->__Vtogcov__result = ((0xfffffdffU & vlSelf->__Vtogcov__result) 
                                     | (0x200U & vlSelf->result));
    }
    if ((0x400U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->__Vtogcov__result = ((0xfffffbffU & vlSelf->__Vtogcov__result) 
                                     | (0x400U & vlSelf->result));
    }
    if ((0x800U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->__Vtogcov__result = ((0xfffff7ffU & vlSelf->__Vtogcov__result) 
                                     | (0x800U & vlSelf->result));
    }
    if ((0x1000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->__Vtogcov__result = ((0xffffefffU & vlSelf->__Vtogcov__result) 
                                     | (0x1000U & vlSelf->result));
    }
    if ((0x2000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->__Vtogcov__result = ((0xffffdfffU & vlSelf->__Vtogcov__result) 
                                     | (0x2000U & vlSelf->result));
    }
    if ((0x4000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->__Vtogcov__result = ((0xffffbfffU & vlSelf->__Vtogcov__result) 
                                     | (0x4000U & vlSelf->result));
    }
    if ((0x8000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->__Vtogcov__result = ((0xffff7fffU & vlSelf->__Vtogcov__result) 
                                     | (0x8000U & vlSelf->result));
    }
    if ((0x10000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->__Vtogcov__result = ((0xfffeffffU & vlSelf->__Vtogcov__result) 
                                     | (0x10000U & vlSelf->result));
    }
    if ((0x20000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->__Vtogcov__result = ((0xfffdffffU & vlSelf->__Vtogcov__result) 
                                     | (0x20000U & vlSelf->result));
    }
    if ((0x40000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->__Vtogcov__result = ((0xfffbffffU & vlSelf->__Vtogcov__result) 
                                     | (0x40000U & vlSelf->result));
    }
    if ((0x80000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->__Vtogcov__result = ((0xfff7ffffU & vlSelf->__Vtogcov__result) 
                                     | (0x80000U & vlSelf->result));
    }
    if ((0x100000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->__Vtogcov__result = ((0xffefffffU & vlSelf->__Vtogcov__result) 
                                     | (0x100000U & vlSelf->result));
    }
    if ((0x200000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->__Vtogcov__result = ((0xffdfffffU & vlSelf->__Vtogcov__result) 
                                     | (0x200000U & vlSelf->result));
    }
    if ((0x400000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->__Vtogcov__result = ((0xffbfffffU & vlSelf->__Vtogcov__result) 
                                     | (0x400000U & vlSelf->result));
    }
    if ((0x800000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->__Vtogcov__result = ((0xff7fffffU & vlSelf->__Vtogcov__result) 
                                     | (0x800000U & vlSelf->result));
    }
    if ((0x1000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->__Vtogcov__result = ((0xfeffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x1000000U 
                                        & vlSelf->result));
    }
    if ((0x2000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->__Vtogcov__result = ((0xfdffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x2000000U 
                                        & vlSelf->result));
    }
    if ((0x4000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->__Vtogcov__result = ((0xfbffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x4000000U 
                                        & vlSelf->result));
    }
    if ((0x8000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->__Vtogcov__result = ((0xf7ffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x8000000U 
                                        & vlSelf->result));
    }
    if ((0x10000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->__Vtogcov__result = ((0xefffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x10000000U 
                                        & vlSelf->result));
    }
    if ((0x20000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->__Vtogcov__result = ((0xdfffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x20000000U 
                                        & vlSelf->result));
    }
    if ((0x40000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->__Vtogcov__result = ((0xbfffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x40000000U 
                                        & vlSelf->result));
    }
    if (((vlSelf->result ^ vlSelf->__Vtogcov__result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->__Vtogcov__result = ((0x7fffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x80000000U 
                                        & vlSelf->result));
    }
}

VL_INLINE_OPT void Vdut_floating_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst__0(Vdut_floating_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_floating_alu___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst__0\n"); );
    // Body
    vlSelf->result = 0U;
    vlSelf->__PVT__op1_sign_bit = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
                                   >> 0x1fU);
    vlSelf->__PVT__op2_sign_bit = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2 
                                   >> 0x1fU);
    vlSelf->__PVT__op1_biased_exponent = (0xffU & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
                                                   >> 0x17U));
    vlSelf->__PVT__op2_biased_exponent = (0xffU & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2 
                                                   >> 0x17U));
    vlSelf->__PVT__op1_significand = (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1));
    vlSelf->__PVT__op2_significand = (0x800000U | (0x7fffffU 
                                                   & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2));
    vlSelf->__PVT__exp_diff = 0U;
    vlSelf->__PVT__mantissa_shift_op1 = 0U;
    vlSelf->__PVT__mantissa_shift_op2 = 0U;
    vlSelf->__PVT__sum = 0U;
    vlSelf->__PVT__round_up = 0U;
    vlSelf->__PVT__rounded_sum = 0U;
    vlSelf->__PVT__product = 0ULL;
    vlSelf->__PVT__quotient = 0ULL;
    vlSelf->__PVT__result_exp = 0U;
    vlSelf->__PVT__result_sign_bit = 0U;
    vlSelf->__PVT__guard_bit = 0U;
    vlSelf->__PVT__round_bit = 0U;
    vlSelf->__PVT__numerator = 0ULL;
    vlSelf->__PVT__denominator = 0ULL;
    vlSelf->__PVT__sticky_bit = 0U;
    vlSelf->__PVT__shift_count = 0U;
    vlSelf->__PVT__op1_int = 0U;
    vlSelf->__PVT__op1_unbiased_exponent = 0U;
    vlSelf->__PVT__abs_op1 = 0U;
    vlSelf->__PVT__significant_one = 0U;
    vlSelf->__PVT__norm_exponent = 0U;
    vlSelf->__PVT__norm_mantissa = 0U;
    vlSelf->__PVT__intermediary_exponent = 0U;
    vlSelf->__PVT__shift = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[2986]);
                if ((0U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1)) {
                    ++(vlSymsp->__Vcoverage[2984]);
                    vlSelf->result = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[2985]);
                    vlSelf->__PVT__abs_op1 = ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
                                               >> 0x1fU)
                                               ? (- vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1)
                                               : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1);
                    vlSelf->__PVT__significant_one = 0x1fU;
                    while ((VL_LTS_III(32, 0U, vlSelf->__PVT__significant_one) 
                            & (~ (vlSelf->__PVT__abs_op1 
                                  >> (0x1fU & vlSelf->__PVT__significant_one))))) {
                        vlSelf->__PVT__significant_one 
                            = (vlSelf->__PVT__significant_one 
                               - (IData)(1U));
                        ++(vlSymsp->__Vcoverage[2981]);
                    }
                    vlSelf->__PVT__op1_biased_exponent 
                        = (0xffU & ((IData)(0x7fU) 
                                    + vlSelf->__PVT__significant_one));
                    if (VL_LTES_III(32, 0x17U, vlSelf->__PVT__significant_one)) {
                        ++(vlSymsp->__Vcoverage[2982]);
                        vlSelf->__PVT__op1_significand 
                            = ((0x1fU >= (vlSelf->__PVT__significant_one 
                                          - (IData)(0x17U)))
                                ? (0xffffffU & (vlSelf->__PVT__abs_op1 
                                                >> 
                                                (vlSelf->__PVT__significant_one 
                                                 - (IData)(0x17U))))
                                : 0U);
                    } else {
                        ++(vlSymsp->__Vcoverage[2983]);
                        vlSelf->__PVT__op1_significand 
                            = ((0x1fU >= ((IData)(0x17U) 
                                          - vlSelf->__PVT__significant_one))
                                ? (0xffffffU & (vlSelf->__PVT__abs_op1 
                                                << 
                                                ((IData)(0x17U) 
                                                 - vlSelf->__PVT__significant_one)))
                                : 0U);
                    }
                    vlSelf->result = ((0x80000000U 
                                       & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1) 
                                      | (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSelf->__PVT__op1_significand)));
                }
            }
        } else if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2980]);
                    if ((0xffU == (IData)(vlSelf->__PVT__op1_biased_exponent))) {
                        ++(vlSymsp->__Vcoverage[2979]);
                        vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                           ? 0x80000000U
                                           : 0x7fffffffU);
                    } else if ((0U == (IData)(vlSelf->__PVT__op1_biased_exponent))) {
                        ++(vlSymsp->__Vcoverage[2977]);
                        vlSelf->result = 0U;
                    } else {
                        vlSelf->__PVT__op1_unbiased_exponent 
                            = (0xffU & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                        - (IData)(0x7fU)));
                        ++(vlSymsp->__Vcoverage[2978]);
                        if ((0x7fU < (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                            ++(vlSymsp->__Vcoverage[2976]);
                            vlSelf->result = 0U;
                        } else if ((0x1eU < (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                            ++(vlSymsp->__Vcoverage[2974]);
                            vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                               ? 0x80000000U
                                               : 0x7fffffffU);
                        } else {
                            if ((0x17U <= (IData)(vlSelf->__PVT__op1_unbiased_exponent))) {
                                ++(vlSymsp->__Vcoverage[2972]);
                                vlSelf->__PVT__op1_int 
                                    = ((0x1fU >= ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                                                  - (IData)(0x17U)))
                                        ? (vlSelf->__PVT__op1_significand 
                                           << ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                                               - (IData)(0x17U)))
                                        : 0U);
                            } else {
                                ++(vlSymsp->__Vcoverage[2973]);
                                vlSelf->__PVT__op1_int 
                                    = ((0x1fU >= ((IData)(0x17U) 
                                                  - (IData)(vlSelf->__PVT__op1_unbiased_exponent)))
                                        ? (vlSelf->__PVT__op1_significand 
                                           >> ((IData)(0x17U) 
                                               - (IData)(vlSelf->__PVT__op1_unbiased_exponent)))
                                        : 0U);
                            }
                            ++(vlSymsp->__Vcoverage[2975]);
                            vlSelf->result = ((IData)(vlSelf->__PVT__op1_sign_bit)
                                               ? (- vlSelf->__PVT__op1_int)
                                               : vlSelf->__PVT__op1_int);
                        }
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[2970]);
                    vlSelf->result = (0x7fffffffU & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1);
                }
            } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[2971]);
                vlSelf->result = ((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
                                   == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2)
                                   ? 1U : 0U);
            }
        } else if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                ++(vlSymsp->__Vcoverage[2969]);
                vlSelf->result = (((~ (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
                                       >> 0x1fU)) << 0x1fU) 
                                  | (0x7fffffffU & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1));
            } else {
                ++(vlSymsp->__Vcoverage[2987]);
                vlSelf->result = 0U;
            }
        } else if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            vlSelf->__PVT__numerator = ((QData)((IData)(vlSelf->__PVT__op1_significand)) 
                                        << 0x18U);
            vlSelf->__PVT__denominator = (QData)((IData)(vlSelf->__PVT__op2_significand));
            vlSelf->__PVT__quotient = (0xffffffffffffULL 
                                       & VL_DIV_QQQ(48, vlSelf->__PVT__numerator, vlSelf->__PVT__denominator));
            vlSelf->__PVT__intermediary_exponent = 
                (0x1ffU & ((IData)(0x7fU) + ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                             - (IData)(vlSelf->__PVT__op2_biased_exponent))));
            vlSelf->__PVT__result_sign_bit = ((IData)(vlSelf->__PVT__op1_sign_bit) 
                                              ^ (IData)(vlSelf->__PVT__op2_sign_bit));
            if ((1U & (IData)((vlSelf->__PVT__quotient 
                               >> 0x19U)))) {
                vlSelf->__PVT__quotient = (0xffffffffffffULL 
                                           & (vlSelf->__PVT__quotient 
                                              >> 1U));
                ++(vlSymsp->__Vcoverage[2964]);
                vlSelf->__PVT__norm_exponent = (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__intermediary_exponent)));
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
            } else if ((1U & (IData)((vlSelf->__PVT__quotient 
                                      >> 0x18U)))) {
                ++(vlSymsp->__Vcoverage[2963]);
                vlSelf->__PVT__norm_exponent = vlSelf->__PVT__intermediary_exponent;
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
            } else {
                vlSelf->__PVT__shift = 0U;
                vlSelf->__PVT__unnamedblk1__DOT__i = 0x18U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__unnamedblk1__DOT__i)) {
                        if (((0x2fU >= (0x3fU & vlSelf->__PVT__unnamedblk1__DOT__i)) 
                             & (IData)((vlSelf->__PVT__quotient 
                                        >> (0x3fU & vlSelf->__PVT__unnamedblk1__DOT__i))))) {
                            goto __Vlabel14;
                        } else {
                            ++(vlSymsp->__Vcoverage[2960]);
                        }
                        vlSelf->__PVT__shift = (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__shift)));
                        ++(vlSymsp->__Vcoverage[2961]);
                        vlSelf->__PVT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel14: ;
                }
                vlSelf->__PVT__quotient = ((0x2fU >= (IData)(vlSelf->__PVT__shift))
                                            ? (0xffffffffffffULL 
                                               & (vlSelf->__PVT__quotient 
                                                  << (IData)(vlSelf->__PVT__shift)))
                                            : 0ULL);
                vlSelf->__PVT__norm_exponent = (0x1ffU 
                                                & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                                                   - (IData)(vlSelf->__PVT__shift)));
                vlSelf->__PVT__norm_mantissa = (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__quotient 
                                                           >> 1U)));
                ++(vlSymsp->__Vcoverage[2962]);
            }
            if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelf->__PVT__norm_exponent)))) {
                vlSelf->__PVT__norm_exponent = 0U;
                ++(vlSymsp->__Vcoverage[2967]);
            } else if (VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,9, (IData)(vlSelf->__PVT__norm_exponent)))) {
                vlSelf->__PVT__norm_exponent = 0xffU;
                ++(vlSymsp->__Vcoverage[2965]);
            } else {
                ++(vlSymsp->__Vcoverage[2966]);
            }
            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                               << 0x1fU) | ((0x7f800000U 
                                             & ((IData)(vlSelf->__PVT__norm_exponent) 
                                                << 0x17U)) 
                                            | vlSelf->__PVT__norm_mantissa));
            ++(vlSymsp->__Vcoverage[2968]);
        } else {
            vlSelf->__PVT__product = (0xffffffffffffULL 
                                      & ((QData)((IData)(vlSelf->__PVT__op1_significand)) 
                                         * (QData)((IData)(vlSelf->__PVT__op2_significand))));
            if ((1U & (IData)((vlSelf->__PVT__product 
                               >> 0x2fU)))) {
                vlSelf->__PVT__result_exp = (0xffU 
                                             & ((IData)(1U) 
                                                + (
                                                   ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                    + (IData)(vlSelf->__PVT__op2_biased_exponent)) 
                                                   - (IData)(0x7fU))));
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x18U)));
                vlSelf->__PVT__guard_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x17U)));
                vlSelf->__PVT__round_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x16U)));
                vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                           & ((IData)(vlSelf->__PVT__round_bit) 
                                              | (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x15U))));
                ++(vlSymsp->__Vcoverage[2952]);
            } else {
                vlSelf->__PVT__result_exp = (0xffU 
                                             & (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                 + (IData)(vlSelf->__PVT__op2_biased_exponent)) 
                                                - (IData)(0x7fU)));
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x17U)));
                vlSelf->__PVT__guard_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x16U)));
                vlSelf->__PVT__round_bit = (1U & (IData)(
                                                         (vlSelf->__PVT__product 
                                                          >> 0x15U)));
                vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                           & ((IData)(vlSelf->__PVT__round_bit) 
                                              | (IData)(
                                                        (vlSelf->__PVT__product 
                                                         >> 0x14U))));
                ++(vlSymsp->__Vcoverage[2953]);
            }
            vlSelf->__PVT__result_sign_bit = ((IData)(vlSelf->__PVT__op1_sign_bit) 
                                              ^ (IData)(vlSelf->__PVT__op2_sign_bit));
            if (vlSelf->__PVT__round_up) {
                vlSelf->__PVT__rounded_sum = (0xffffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->__PVT__rounded_sum));
                if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                    vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->__PVT__result_exp) 
                                        << 0x17U) | 
                                       (0x7fffffU & vlSelf->__PVT__rounded_sum)));
                    ++(vlSymsp->__Vcoverage[2954]);
                } else {
                    vlSelf->__PVT__result_exp = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__result_exp)));
                    vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->__PVT__result_exp) 
                                        << 0x17U) | 
                                       (0x7fffffU & 
                                        (vlSelf->__PVT__rounded_sum 
                                         >> 1U))));
                    ++(vlSymsp->__Vcoverage[2955]);
                }
                ++(vlSymsp->__Vcoverage[2956]);
            } else {
                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                   << 0x1fU) | (((IData)(vlSelf->__PVT__result_exp) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & vlSelf->__PVT__rounded_sum)));
                ++(vlSymsp->__Vcoverage[2957]);
            }
            ++(vlSymsp->__Vcoverage[2958]);
        }
    } else if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((0xfU == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    vlSelf->__PVT__op2_sign_bit = (1U 
                                                   & (~ (IData)(vlSelf->__PVT__op2_sign_bit)));
                    ++(vlSymsp->__Vcoverage[2929]);
                } else {
                    ++(vlSymsp->__Vcoverage[2930]);
                }
                if (((IData)(vlSelf->__PVT__op1_biased_exponent) 
                     > (IData)(vlSelf->__PVT__op2_biased_exponent))) {
                    vlSelf->__PVT__exp_diff = (0xffU 
                                               & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                                                  - (IData)(vlSelf->__PVT__op2_biased_exponent)));
                    vlSelf->__PVT__mantissa_shift_op1 
                        = vlSelf->__PVT__op1_significand;
                    vlSelf->__PVT__mantissa_shift_op2 
                        = ((0x18U >= (IData)(vlSelf->__PVT__exp_diff))
                            ? (0x1ffffffU & (vlSelf->__PVT__op2_significand 
                                             >> (IData)(vlSelf->__PVT__exp_diff)))
                            : 0U);
                    vlSelf->__PVT__result_exp = vlSelf->__PVT__op1_biased_exponent;
                    vlSelf->__PVT__result_sign_bit 
                        = vlSelf->__PVT__op1_sign_bit;
                    ++(vlSymsp->__Vcoverage[2931]);
                } else {
                    vlSelf->__PVT__exp_diff = (0xffU 
                                               & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                                                  - (IData)(vlSelf->__PVT__op1_biased_exponent)));
                    vlSelf->__PVT__mantissa_shift_op1 
                        = ((0x18U >= (IData)(vlSelf->__PVT__exp_diff))
                            ? (0x1ffffffU & (vlSelf->__PVT__op1_significand 
                                             >> (IData)(vlSelf->__PVT__exp_diff)))
                            : 0U);
                    vlSelf->__PVT__mantissa_shift_op2 
                        = vlSelf->__PVT__op2_significand;
                    vlSelf->__PVT__result_exp = vlSelf->__PVT__op2_biased_exponent;
                    vlSelf->__PVT__result_sign_bit 
                        = vlSelf->__PVT__op2_sign_bit;
                    ++(vlSymsp->__Vcoverage[2932]);
                }
                if (((IData)(vlSelf->__PVT__op1_sign_bit) 
                     == (IData)(vlSelf->__PVT__op2_sign_bit))) {
                    vlSelf->__PVT__sum = (0x1ffffffU 
                                          & (vlSelf->__PVT__mantissa_shift_op1 
                                             + vlSelf->__PVT__mantissa_shift_op2));
                    if ((0x1000000U & vlSelf->__PVT__sum)) {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__sum 
                                                 >> 1U));
                        vlSelf->__PVT__result_exp = 
                            (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__result_exp)));
                        ++(vlSymsp->__Vcoverage[2934]);
                    } else {
                        while (((~ (vlSelf->__PVT__sum 
                                    >> 0x17U)) & (0U 
                                                  < (IData)(vlSelf->__PVT__result_exp)))) {
                            vlSelf->__PVT__sum = (0x1ffffffU 
                                                  & (vlSelf->__PVT__sum 
                                                     << 1U));
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(vlSelf->__PVT__result_exp) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[2933]);
                        }
                        ++(vlSymsp->__Vcoverage[2935]);
                    }
                    vlSelf->__PVT__guard_bit = (1U 
                                                & (vlSelf->__PVT__sum 
                                                   >> 1U));
                    vlSelf->__PVT__round_bit = (1U 
                                                & vlSelf->__PVT__sum);
                    vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                               & ((IData)(vlSelf->__PVT__round_bit) 
                                                  | (vlSelf->__PVT__sum 
                                                     >> 2U)));
                    if (vlSelf->__PVT__round_up) {
                        vlSelf->__PVT__rounded_sum 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->__PVT__sum));
                        if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__rounded_sum)));
                            ++(vlSymsp->__Vcoverage[2936]);
                        } else {
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__result_exp)));
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (vlSelf->__PVT__rounded_sum 
                                                       >> 1U))));
                            ++(vlSymsp->__Vcoverage[2937]);
                        }
                        ++(vlSymsp->__Vcoverage[2938]);
                    } else {
                        vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelf->__PVT__result_exp) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->__PVT__sum)));
                        ++(vlSymsp->__Vcoverage[2939]);
                    }
                    ++(vlSymsp->__Vcoverage[2949]);
                } else {
                    if ((vlSelf->__PVT__mantissa_shift_op1 
                         >= vlSelf->__PVT__mantissa_shift_op2)) {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__mantissa_shift_op1 
                                                 - vlSelf->__PVT__mantissa_shift_op2));
                        vlSelf->__PVT__result_sign_bit 
                            = vlSelf->__PVT__op1_sign_bit;
                        ++(vlSymsp->__Vcoverage[2940]);
                    } else {
                        vlSelf->__PVT__sum = (0x1ffffffU 
                                              & (vlSelf->__PVT__mantissa_shift_op2 
                                                 - vlSelf->__PVT__mantissa_shift_op1));
                        vlSelf->__PVT__result_sign_bit 
                            = vlSelf->__PVT__op2_sign_bit;
                        ++(vlSymsp->__Vcoverage[2941]);
                    }
                    if ((0U == vlSelf->__PVT__sum)) {
                        vlSelf->result = 0U;
                        ++(vlSymsp->__Vcoverage[2947]);
                    } else {
                        while (((~ (vlSelf->__PVT__sum 
                                    >> 0x17U)) & (0U 
                                                  < (IData)(vlSelf->__PVT__result_exp)))) {
                            vlSelf->__PVT__sum = (0x1ffffffU 
                                                  & (vlSelf->__PVT__sum 
                                                     << 1U));
                            vlSelf->__PVT__result_exp 
                                = (0xffU & ((IData)(vlSelf->__PVT__result_exp) 
                                            - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[2942]);
                        }
                        vlSelf->__PVT__guard_bit = 
                            (1U & (vlSelf->__PVT__sum 
                                   >> 1U));
                        vlSelf->__PVT__round_bit = 
                            (1U & vlSelf->__PVT__sum);
                        vlSelf->__PVT__round_up = ((IData)(vlSelf->__PVT__guard_bit) 
                                                   & ((IData)(vlSelf->__PVT__round_bit) 
                                                      | (vlSelf->__PVT__sum 
                                                         >> 2U)));
                        if (vlSelf->__PVT__round_up) {
                            vlSelf->__PVT__rounded_sum 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelf->__PVT__sum));
                            if ((0x800000U & vlSelf->__PVT__rounded_sum)) {
                                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__result_exp) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & vlSelf->__PVT__rounded_sum)));
                                ++(vlSymsp->__Vcoverage[2943]);
                            } else {
                                vlSelf->__PVT__result_exp 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__result_exp)));
                                vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__result_exp) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & (vlSelf->__PVT__rounded_sum 
                                                           >> 1U))));
                                ++(vlSymsp->__Vcoverage[2944]);
                            }
                            ++(vlSymsp->__Vcoverage[2945]);
                        } else {
                            vlSelf->result = (((IData)(vlSelf->__PVT__result_sign_bit) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelf->__PVT__result_exp) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__sum)));
                            ++(vlSymsp->__Vcoverage[2946]);
                        }
                        ++(vlSymsp->__Vcoverage[2948]);
                    }
                    ++(vlSymsp->__Vcoverage[2950]);
                }
                ++(vlSymsp->__Vcoverage[2951]);
            } else {
                vlSelf->result = 0U;
                ++(vlSymsp->__Vcoverage[2987]);
            }
        } else {
            vlSelf->result = 0U;
            ++(vlSymsp->__Vcoverage[2987]);
        }
    } else {
        vlSelf->result = 0U;
        ++(vlSymsp->__Vcoverage[2987]);
    }
    ++(vlSymsp->__Vcoverage[2988]);
    if (((IData)(vlSelf->__PVT__op1_sign_bit) ^ (IData)(vlSelf->__Vtogcov__op1_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->__Vtogcov__op1_sign_bit = vlSelf->__PVT__op1_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__op2_sign_bit) ^ (IData)(vlSelf->__Vtogcov__op2_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->__Vtogcov__op2_sign_bit = vlSelf->__PVT__op2_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__round_up) ^ (IData)(vlSelf->__Vtogcov__round_up))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->__Vtogcov__round_up = vlSelf->__PVT__round_up;
    }
    if (((IData)(vlSelf->__PVT__result_sign_bit) ^ (IData)(vlSelf->__Vtogcov__result_sign_bit))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->__Vtogcov__result_sign_bit = vlSelf->__PVT__result_sign_bit;
    }
    if (((IData)(vlSelf->__PVT__guard_bit) ^ (IData)(vlSelf->__Vtogcov__guard_bit))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->__Vtogcov__guard_bit = vlSelf->__PVT__guard_bit;
    }
    if (((IData)(vlSelf->__PVT__round_bit) ^ (IData)(vlSelf->__Vtogcov__round_bit))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->__Vtogcov__round_bit = vlSelf->__PVT__round_bit;
    }
    if (vlSelf->__Vtogcov__sticky_bit) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->__Vtogcov__sticky_bit = vlSelf->__PVT__sticky_bit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfeU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfdU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xfbU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xf7U 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xefU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xdfU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0xbfU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op1_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->__Vtogcov__op1_biased_exponent = ((0x7fU 
                                                   & (IData)(vlSelf->__Vtogcov__op1_biased_exponent)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->__PVT__op1_biased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfeU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfdU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xfbU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xf7U 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xefU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xdfU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0xbfU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op2_biased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op2_biased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->__Vtogcov__op2_biased_exponent = ((0x7fU 
                                                   & (IData)(vlSelf->__Vtogcov__op2_biased_exponent)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->__PVT__op2_biased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->__Vtogcov__exp_diff = ((0xfeU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (1U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->__Vtogcov__exp_diff = ((0xfdU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (2U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->__Vtogcov__exp_diff = ((0xfbU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (4U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__exp_diff) ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->__Vtogcov__exp_diff = ((0xf7U & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (8U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->__Vtogcov__exp_diff = ((0xefU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x10U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->__Vtogcov__exp_diff = ((0xdfU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x20U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->__Vtogcov__exp_diff = ((0xbfU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x40U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__exp_diff) 
                  ^ (IData)(vlSelf->__Vtogcov__exp_diff)))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->__Vtogcov__exp_diff = ((0x7fU & (IData)(vlSelf->__Vtogcov__exp_diff)) 
                                       | (0x80U & (IData)(vlSelf->__PVT__exp_diff)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->__Vtogcov__result_exp = ((0xfeU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (1U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->__Vtogcov__result_exp = ((0xfdU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (2U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->__Vtogcov__result_exp = ((0xfbU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (4U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__result_exp) ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->__Vtogcov__result_exp = ((0xf7U & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (8U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->__Vtogcov__result_exp = ((0xefU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x10U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->__Vtogcov__result_exp = ((0xdfU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x20U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->__Vtogcov__result_exp = ((0xbfU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x40U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__result_exp) 
                  ^ (IData)(vlSelf->__Vtogcov__result_exp)))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->__Vtogcov__result_exp = ((0x7fU & (IData)(vlSelf->__Vtogcov__result_exp)) 
                                         | (0x80U & (IData)(vlSelf->__PVT__result_exp)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfeU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (1U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfdU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (2U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xfbU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (4U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xf7U & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (8U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xefU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x10U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xdfU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x20U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0xbfU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x40U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__op1_unbiased_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->__Vtogcov__op1_unbiased_exponent = 
            ((0x7fU & (IData)(vlSelf->__Vtogcov__op1_unbiased_exponent)) 
             | (0x80U & (IData)(vlSelf->__PVT__op1_unbiased_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1feU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (1U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1fdU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (2U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1fbU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (4U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__norm_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1f7U 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (8U & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1efU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x10U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1dfU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x20U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->__Vtogcov__norm_exponent = ((0x1bfU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x40U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__norm_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->__Vtogcov__norm_exponent = ((0x17fU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x80U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__norm_exponent) 
                   ^ (IData)(vlSelf->__Vtogcov__norm_exponent)))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->__Vtogcov__norm_exponent = ((0xffU 
                                             & (IData)(vlSelf->__Vtogcov__norm_exponent)) 
                                            | (0x100U 
                                               & (IData)(vlSelf->__PVT__norm_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1feU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (1U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1fdU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (2U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1fbU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (4U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
               ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1f7U & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (8U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1efU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x10U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1dfU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x20U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x1bfU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x40U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                  ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0x17fU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x80U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__intermediary_exponent) 
                   ^ (IData)(vlSelf->__Vtogcov__intermediary_exponent)))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->__Vtogcov__intermediary_exponent = 
            ((0xffU & (IData)(vlSelf->__Vtogcov__intermediary_exponent)) 
             | (0x100U & (IData)(vlSelf->__PVT__intermediary_exponent)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->__Vtogcov__shift = ((0x1feU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (1U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->__Vtogcov__shift = ((0x1fdU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (2U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->__Vtogcov__shift = ((0x1fbU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (4U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->__Vtogcov__shift = ((0x1f7U & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (8U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->__Vtogcov__shift = ((0x1efU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x10U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->__Vtogcov__shift = ((0x1dfU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x20U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->__Vtogcov__shift = ((0x1bfU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x40U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->__Vtogcov__shift = ((0x17fU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x80U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__shift) ^ (IData)(vlSelf->__Vtogcov__shift)))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->__Vtogcov__shift = ((0xffU & (IData)(vlSelf->__Vtogcov__shift)) 
                                    | (0x100U & (IData)(vlSelf->__PVT__shift)));
    }
    if ((1U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffeU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (1U & vlSelf->__PVT__norm_mantissa));
    }
    if ((2U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffdU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (2U & vlSelf->__PVT__norm_mantissa));
    }
    if ((4U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffffbU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (4U & vlSelf->__PVT__norm_mantissa));
    }
    if ((8U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffff7U 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (8U & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x10U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffefU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x10U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x20U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffdfU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x20U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x40U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fffbfU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x40U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x80U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fff7fU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x80U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x100U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffeffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x100U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x200U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffdffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x200U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x400U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ffbffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x400U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x800U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7ff7ffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x800U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x1000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fefffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x1000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x2000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fdfffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x2000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x4000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7fbfffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x4000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x8000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7f7fffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x8000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x10000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7effffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x10000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x20000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7dffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x20000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x40000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x7bffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x40000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x80000U & (vlSelf->__PVT__norm_mantissa ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x77ffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x80000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x100000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x6fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x100000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x200000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x5fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x200000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((0x400000U & (vlSelf->__PVT__norm_mantissa 
                      ^ vlSelf->__Vtogcov__norm_mantissa))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->__Vtogcov__norm_mantissa = ((0x3fffffU 
                                             & vlSelf->__Vtogcov__norm_mantissa) 
                                            | (0x400000U 
                                               & vlSelf->__PVT__norm_mantissa));
    }
    if ((1U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffeU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (1U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((2U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffdU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (2U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((4U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffffbU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (4U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((8U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffff7U 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (8U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x10U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffefU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x20U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffdfU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x40U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->__Vtogcov__op1_significand = ((0xffffbfU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x80U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->__Vtogcov__op1_significand = ((0xffff7fU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x100U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffeffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x200U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffdffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x400U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->__Vtogcov__op1_significand = ((0xfffbffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x800U & (vlSelf->__PVT__op1_significand ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->__Vtogcov__op1_significand = ((0xfff7ffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x1000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->__Vtogcov__op1_significand = ((0xffefffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x2000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->__Vtogcov__op1_significand = ((0xffdfffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x4000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->__Vtogcov__op1_significand = ((0xffbfffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x8000U & (vlSelf->__PVT__op1_significand 
                    ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->__Vtogcov__op1_significand = ((0xff7fffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x10000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->__Vtogcov__op1_significand = ((0xfeffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x20000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->__Vtogcov__op1_significand = ((0xfdffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x40000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->__Vtogcov__op1_significand = ((0xfbffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x80000U & (vlSelf->__PVT__op1_significand 
                     ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->__Vtogcov__op1_significand = ((0xf7ffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x100000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->__Vtogcov__op1_significand = ((0xefffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x200000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->__Vtogcov__op1_significand = ((0xdfffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x400000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->__Vtogcov__op1_significand = ((0xbfffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((0x800000U & (vlSelf->__PVT__op1_significand 
                      ^ vlSelf->__Vtogcov__op1_significand))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->__Vtogcov__op1_significand = ((0x7fffffU 
                                               & vlSelf->__Vtogcov__op1_significand) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__op1_significand));
    }
    if ((1U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffeU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (1U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((2U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffdU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (2U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((4U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffffbU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (4U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((8U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffff7U 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (8U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x10U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffefU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x20U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffdfU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x40U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->__Vtogcov__op2_significand = ((0xffffbfU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x80U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->__Vtogcov__op2_significand = ((0xffff7fU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x100U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffeffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x200U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffdffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x400U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->__Vtogcov__op2_significand = ((0xfffbffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x800U & (vlSelf->__PVT__op2_significand ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->__Vtogcov__op2_significand = ((0xfff7ffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x1000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->__Vtogcov__op2_significand = ((0xffefffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x2000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->__Vtogcov__op2_significand = ((0xffdfffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x4000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->__Vtogcov__op2_significand = ((0xffbfffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x8000U & (vlSelf->__PVT__op2_significand 
                    ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->__Vtogcov__op2_significand = ((0xff7fffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x10000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->__Vtogcov__op2_significand = ((0xfeffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x20000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->__Vtogcov__op2_significand = ((0xfdffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x40000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->__Vtogcov__op2_significand = ((0xfbffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x80000U & (vlSelf->__PVT__op2_significand 
                     ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->__Vtogcov__op2_significand = ((0xf7ffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x100000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->__Vtogcov__op2_significand = ((0xefffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x200000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->__Vtogcov__op2_significand = ((0xdfffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x400000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->__Vtogcov__op2_significand = ((0xbfffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((0x800000U & (vlSelf->__PVT__op2_significand 
                      ^ vlSelf->__Vtogcov__op2_significand))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->__Vtogcov__op2_significand = ((0x7fffffU 
                                               & vlSelf->__Vtogcov__op2_significand) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__op2_significand));
    }
    if ((1U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffeU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (1U & vlSelf->__PVT__rounded_sum));
    }
    if ((2U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffdU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (2U & vlSelf->__PVT__rounded_sum));
    }
    if ((4U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffffbU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (4U & vlSelf->__PVT__rounded_sum));
    }
    if ((8U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffff7U 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (8U & vlSelf->__PVT__rounded_sum));
    }
    if ((0x10U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffefU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x10U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x20U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffdfU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x20U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x40U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffffbfU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x40U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x80U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffff7fU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x80U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x100U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffeffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x100U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x200U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffdffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x200U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x400U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfffbffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x400U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x800U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfff7ffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x800U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x1000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffefffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x1000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x2000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffdfffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x2000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x4000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->__Vtogcov__rounded_sum = ((0xffbfffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x4000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x8000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->__Vtogcov__rounded_sum = ((0xff7fffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x8000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x10000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfeffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x10000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x20000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfdffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x20000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x40000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->__Vtogcov__rounded_sum = ((0xfbffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x40000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x80000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->__Vtogcov__rounded_sum = ((0xf7ffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x80000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x100000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->__Vtogcov__rounded_sum = ((0xefffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x100000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x200000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->__Vtogcov__rounded_sum = ((0xdfffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x200000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x400000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->__Vtogcov__rounded_sum = ((0xbfffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x400000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((0x800000U & (vlSelf->__PVT__rounded_sum ^ vlSelf->__Vtogcov__rounded_sum))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->__Vtogcov__rounded_sum = ((0x7fffffU 
                                           & vlSelf->__Vtogcov__rounded_sum) 
                                          | (0x800000U 
                                             & vlSelf->__PVT__rounded_sum));
    }
    if ((1U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffeU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (1U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((2U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffdU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (2U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((4U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffffbU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (4U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((8U & (vlSelf->__PVT__mantissa_shift_op1 ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffff7U 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (8U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x10U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffefU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x10U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x20U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffdfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x20U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x40U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffffbfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x40U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x80U & (vlSelf->__PVT__mantissa_shift_op1 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffff7fU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x80U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x100U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffeffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x100U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x200U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffdffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x200U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x400U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fffbffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x400U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x800U & (vlSelf->__PVT__mantissa_shift_op1 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fff7ffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x800U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffefffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x1000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffdfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x2000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ffbfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x4000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__mantissa_shift_op1 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1ff7fffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x8000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1feffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x10000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fdffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x20000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1fbffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x40000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__mantissa_shift_op1 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1f7ffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x80000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1efffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x100000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1dfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x200000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x1bfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x400000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__mantissa_shift_op1 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0x17fffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x800000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__mantissa_shift_op1 
                       ^ vlSelf->__Vtogcov__mantissa_shift_op1))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->__Vtogcov__mantissa_shift_op1 = ((0xffffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op1) 
                                                 | (0x1000000U 
                                                    & vlSelf->__PVT__mantissa_shift_op1));
    }
    if ((1U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffeU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (1U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((2U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffdU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (2U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((4U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffffbU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (4U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((8U & (vlSelf->__PVT__mantissa_shift_op2 ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffff7U 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (8U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x10U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffefU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x10U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x20U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffdfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x20U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x40U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffffbfU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x40U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x80U & (vlSelf->__PVT__mantissa_shift_op2 
                  ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffff7fU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x80U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x100U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffeffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x100U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x200U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffdffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x200U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x400U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fffbffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x400U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x800U & (vlSelf->__PVT__mantissa_shift_op2 
                   ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fff7ffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x800U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffefffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x1000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffdfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x2000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ffbfffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x4000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__mantissa_shift_op2 
                    ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1ff7fffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x8000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1feffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x10000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fdffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x20000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1fbffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x40000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__mantissa_shift_op2 
                     ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1f7ffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x80000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1efffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x100000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1dfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x200000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x1bfffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x400000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__mantissa_shift_op2 
                      ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0x17fffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x800000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__mantissa_shift_op2 
                       ^ vlSelf->__Vtogcov__mantissa_shift_op2))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->__Vtogcov__mantissa_shift_op2 = ((0xffffffU 
                                                  & vlSelf->__Vtogcov__mantissa_shift_op2) 
                                                 | (0x1000000U 
                                                    & vlSelf->__PVT__mantissa_shift_op2));
    }
    if ((1U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->__Vtogcov__sum = ((0x1fffffeU & vlSelf->__Vtogcov__sum) 
                                  | (1U & vlSelf->__PVT__sum));
    }
    if ((2U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->__Vtogcov__sum = ((0x1fffffdU & vlSelf->__Vtogcov__sum) 
                                  | (2U & vlSelf->__PVT__sum));
    }
    if ((4U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->__Vtogcov__sum = ((0x1fffffbU & vlSelf->__Vtogcov__sum) 
                                  | (4U & vlSelf->__PVT__sum));
    }
    if ((8U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->__Vtogcov__sum = ((0x1fffff7U & vlSelf->__Vtogcov__sum) 
                                  | (8U & vlSelf->__PVT__sum));
    }
    if ((0x10U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->__Vtogcov__sum = ((0x1ffffefU & vlSelf->__Vtogcov__sum) 
                                  | (0x10U & vlSelf->__PVT__sum));
    }
    if ((0x20U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->__Vtogcov__sum = ((0x1ffffdfU & vlSelf->__Vtogcov__sum) 
                                  | (0x20U & vlSelf->__PVT__sum));
    }
    if ((0x40U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->__Vtogcov__sum = ((0x1ffffbfU & vlSelf->__Vtogcov__sum) 
                                  | (0x40U & vlSelf->__PVT__sum));
    }
    if ((0x80U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->__Vtogcov__sum = ((0x1ffff7fU & vlSelf->__Vtogcov__sum) 
                                  | (0x80U & vlSelf->__PVT__sum));
    }
    if ((0x100U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->__Vtogcov__sum = ((0x1fffeffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100U & vlSelf->__PVT__sum));
    }
    if ((0x200U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->__Vtogcov__sum = ((0x1fffdffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200U & vlSelf->__PVT__sum));
    }
    if ((0x400U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->__Vtogcov__sum = ((0x1fffbffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400U & vlSelf->__PVT__sum));
    }
    if ((0x800U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->__Vtogcov__sum = ((0x1fff7ffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800U & vlSelf->__PVT__sum));
    }
    if ((0x1000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->__Vtogcov__sum = ((0x1ffefffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000U & vlSelf->__PVT__sum));
    }
    if ((0x2000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->__Vtogcov__sum = ((0x1ffdfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x2000U & vlSelf->__PVT__sum));
    }
    if ((0x4000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->__Vtogcov__sum = ((0x1ffbfffU & vlSelf->__Vtogcov__sum) 
                                  | (0x4000U & vlSelf->__PVT__sum));
    }
    if ((0x8000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->__Vtogcov__sum = ((0x1ff7fffU & vlSelf->__Vtogcov__sum) 
                                  | (0x8000U & vlSelf->__PVT__sum));
    }
    if ((0x10000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->__Vtogcov__sum = ((0x1feffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x10000U & vlSelf->__PVT__sum));
    }
    if ((0x20000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->__Vtogcov__sum = ((0x1fdffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x20000U & vlSelf->__PVT__sum));
    }
    if ((0x40000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->__Vtogcov__sum = ((0x1fbffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x40000U & vlSelf->__PVT__sum));
    }
    if ((0x80000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->__Vtogcov__sum = ((0x1f7ffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x80000U & vlSelf->__PVT__sum));
    }
    if ((0x100000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->__Vtogcov__sum = ((0x1efffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x100000U & vlSelf->__PVT__sum));
    }
    if ((0x200000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->__Vtogcov__sum = ((0x1dfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x200000U & vlSelf->__PVT__sum));
    }
    if ((0x400000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->__Vtogcov__sum = ((0x1bfffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x400000U & vlSelf->__PVT__sum));
    }
    if ((0x800000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->__Vtogcov__sum = ((0x17fffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x800000U & vlSelf->__PVT__sum));
    }
    if ((0x1000000U & (vlSelf->__PVT__sum ^ vlSelf->__Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->__Vtogcov__sum = ((0xffffffU & vlSelf->__Vtogcov__sum) 
                                  | (0x1000000U & vlSelf->__PVT__sum));
    }
    if ((1U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (1U & vlSelf->__PVT__op1_int));
    }
    if ((2U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (2U & vlSelf->__PVT__op1_int));
    }
    if ((4U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (4U & vlSelf->__PVT__op1_int));
    }
    if ((8U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (8U & vlSelf->__PVT__op1_int));
    }
    if ((0x10U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10U & vlSelf->__PVT__op1_int));
    }
    if ((0x20U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20U & vlSelf->__PVT__op1_int));
    }
    if ((0x40U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->__Vtogcov__op1_int = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40U & vlSelf->__PVT__op1_int));
    }
    if ((0x80U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->__Vtogcov__op1_int = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80U & vlSelf->__PVT__op1_int));
    }
    if ((0x100U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x100U & vlSelf->__PVT__op1_int));
    }
    if ((0x200U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x200U & vlSelf->__PVT__op1_int));
    }
    if ((0x400U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->__Vtogcov__op1_int = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x400U & vlSelf->__PVT__op1_int));
    }
    if ((0x800U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->__Vtogcov__op1_int = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x800U & vlSelf->__PVT__op1_int));
    }
    if ((0x1000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->__Vtogcov__op1_int = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x1000U & vlSelf->__PVT__op1_int));
    }
    if ((0x2000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->__Vtogcov__op1_int = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x2000U & vlSelf->__PVT__op1_int));
    }
    if ((0x4000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->__Vtogcov__op1_int = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x4000U & vlSelf->__PVT__op1_int));
    }
    if ((0x8000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->__Vtogcov__op1_int = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x8000U & vlSelf->__PVT__op1_int));
    }
    if ((0x10000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->__Vtogcov__op1_int = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10000U & vlSelf->__PVT__op1_int));
    }
    if ((0x20000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->__Vtogcov__op1_int = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20000U & vlSelf->__PVT__op1_int));
    }
    if ((0x40000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->__Vtogcov__op1_int = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40000U & vlSelf->__PVT__op1_int));
    }
    if ((0x80000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->__Vtogcov__op1_int = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80000U & vlSelf->__PVT__op1_int));
    }
    if ((0x100000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->__Vtogcov__op1_int = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x200000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->__Vtogcov__op1_int = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x400000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->__Vtogcov__op1_int = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x800000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->__Vtogcov__op1_int = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x1000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->__Vtogcov__op1_int = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x2000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->__Vtogcov__op1_int = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x4000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->__Vtogcov__op1_int = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x8000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->__Vtogcov__op1_int = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x10000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->__Vtogcov__op1_int = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x20000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->__Vtogcov__op1_int = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((0x40000000U & (vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->__Vtogcov__op1_int = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if (((vlSelf->__PVT__op1_int ^ vlSelf->__Vtogcov__op1_int) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->__Vtogcov__op1_int = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__op1_int) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__op1_int));
    }
    if ((1U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (1U & vlSelf->__PVT__abs_op1));
    }
    if ((2U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (2U & vlSelf->__PVT__abs_op1));
    }
    if ((4U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (4U & vlSelf->__PVT__abs_op1));
    }
    if ((8U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (8U & vlSelf->__PVT__abs_op1));
    }
    if ((0x10U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10U & vlSelf->__PVT__abs_op1));
    }
    if ((0x20U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20U & vlSelf->__PVT__abs_op1));
    }
    if ((0x40U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40U & vlSelf->__PVT__abs_op1));
    }
    if ((0x80U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80U & vlSelf->__PVT__abs_op1));
    }
    if ((0x100U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x100U & vlSelf->__PVT__abs_op1));
    }
    if ((0x200U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x200U & vlSelf->__PVT__abs_op1));
    }
    if ((0x400U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x400U & vlSelf->__PVT__abs_op1));
    }
    if ((0x800U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x800U & vlSelf->__PVT__abs_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x1000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x2000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x4000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x8000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80000U & vlSelf->__PVT__abs_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->__Vtogcov__abs_op1 = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->__Vtogcov__abs_op1 = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->__Vtogcov__abs_op1 = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->__Vtogcov__abs_op1 = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->__Vtogcov__abs_op1 = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->__Vtogcov__abs_op1 = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->__Vtogcov__abs_op1 = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if (((vlSelf->__PVT__abs_op1 ^ vlSelf->__Vtogcov__abs_op1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->__Vtogcov__abs_op1 = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__abs_op1) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__abs_op1));
    }
    if ((1U & ((IData)(vlSelf->__PVT__product) ^ (IData)(vlSelf->__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffeULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | (IData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__product)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffdULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 1U))))) 
                                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->__Vtogcov__product = ((0xfffffffffffbULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 2U))))) 
                                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->__Vtogcov__product = ((0xfffffffffff7ULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 3U))))) 
                                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->__Vtogcov__product = ((0xffffffffffefULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 4U))))) 
                                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->__Vtogcov__product = ((0xffffffffffdfULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 5U))))) 
                                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->__Vtogcov__product = ((0xffffffffffbfULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 6U))))) 
                                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->__Vtogcov__product = ((0xffffffffff7fULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 7U))))) 
                                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->__Vtogcov__product = ((0xfffffffffeffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 8U))))) 
                                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->__Vtogcov__product = ((0xfffffffffdffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 9U))))) 
                                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->__Vtogcov__product = ((0xfffffffffbffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xaU))))) 
                                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->__Vtogcov__product = ((0xfffffffff7ffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xbU))))) 
                                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->__Vtogcov__product = ((0xffffffffefffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xcU))))) 
                                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->__Vtogcov__product = ((0xffffffffdfffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xdU))))) 
                                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->__Vtogcov__product = ((0xffffffffbfffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xeU))))) 
                                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->__Vtogcov__product = ((0xffffffff7fffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0xfU))))) 
                                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->__Vtogcov__product = ((0xfffffffeffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x10U))))) 
                                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->__Vtogcov__product = ((0xfffffffdffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x11U))))) 
                                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->__Vtogcov__product = ((0xfffffffbffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x12U))))) 
                                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->__Vtogcov__product = ((0xfffffff7ffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x13U))))) 
                                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->__Vtogcov__product = ((0xffffffefffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x14U))))) 
                                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->__Vtogcov__product = ((0xffffffdfffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x15U))))) 
                                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->__Vtogcov__product = ((0xffffffbfffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x16U))))) 
                                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->__Vtogcov__product = ((0xffffff7fffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x17U))))) 
                                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->__Vtogcov__product = ((0xfffffeffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x18U))))) 
                                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->__Vtogcov__product = ((0xfffffdffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x19U))))) 
                                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->__Vtogcov__product = ((0xfffffbffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1aU))))) 
                                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->__Vtogcov__product = ((0xfffff7ffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1bU))))) 
                                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->__Vtogcov__product = ((0xffffefffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1cU))))) 
                                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->__Vtogcov__product = ((0xffffdfffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1dU))))) 
                                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->__Vtogcov__product = ((0xffffbfffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1eU))))) 
                                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->__Vtogcov__product = ((0xffff7fffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x1fU))))) 
                                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->__Vtogcov__product = ((0xfffeffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x20U))))) 
                                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->__Vtogcov__product = ((0xfffdffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x21U))))) 
                                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->__Vtogcov__product = ((0xfffbffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x22U))))) 
                                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->__Vtogcov__product = ((0xfff7ffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x23U))))) 
                                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->__Vtogcov__product = ((0xffefffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x24U))))) 
                                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->__Vtogcov__product = ((0xffdfffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x25U))))) 
                                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->__Vtogcov__product = ((0xffbfffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x26U))))) 
                                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->__Vtogcov__product = ((0xff7fffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x27U))))) 
                                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->__Vtogcov__product = ((0xfeffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x28U))))) 
                                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->__Vtogcov__product = ((0xfdffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x29U))))) 
                                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->__Vtogcov__product = ((0xfbffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2aU))))) 
                                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->__Vtogcov__product = ((0xf7ffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2bU))))) 
                                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->__Vtogcov__product = ((0xefffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2cU))))) 
                                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->__Vtogcov__product = ((0xdfffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2dU))))) 
                                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__product >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__product 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->__Vtogcov__product = ((0xbfffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2eU))))) 
                                         << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__product ^ vlSelf->__Vtogcov__product) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->__Vtogcov__product = ((0x7fffffffffffULL 
                                       & vlSelf->__Vtogcov__product) 
                                      | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__product 
                                                                     >> 0x2fU))))) 
                                         << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__quotient) ^ (IData)(vlSelf->__Vtogcov__quotient)))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffeULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__quotient)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffdULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 1U))))) 
                                          << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffffbULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 2U))))) 
                                          << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffff7ULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 3U))))) 
                                          << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffefULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 4U))))) 
                                          << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffdfULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 5U))))) 
                                          << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffffbfULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 6U))))) 
                                          << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffff7fULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 7U))))) 
                                          << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffeffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 8U))))) 
                                          << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffdffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 9U))))) 
                                          << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffffbffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xaU))))) 
                                          << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffff7ffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xbU))))) 
                                          << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffefffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xcU))))) 
                                          << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffdfffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xdU))))) 
                                          << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->__Vtogcov__quotient = ((0xffffffffbfffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xeU))))) 
                                          << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->__Vtogcov__quotient = ((0xffffffff7fffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0xfU))))) 
                                          << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffeffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x10U))))) 
                                          << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffdffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x11U))))) 
                                          << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->__Vtogcov__quotient = ((0xfffffffbffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x12U))))) 
                                          << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->__Vtogcov__quotient = ((0xfffffff7ffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x13U))))) 
                                          << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->__Vtogcov__quotient = ((0xffffffefffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x14U))))) 
                                          << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->__Vtogcov__quotient = ((0xffffffdfffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x15U))))) 
                                          << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->__Vtogcov__quotient = ((0xffffffbfffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x16U))))) 
                                          << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->__Vtogcov__quotient = ((0xffffff7fffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x17U))))) 
                                          << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->__Vtogcov__quotient = ((0xfffffeffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x18U))))) 
                                          << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->__Vtogcov__quotient = ((0xfffffdffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x19U))))) 
                                          << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->__Vtogcov__quotient = ((0xfffffbffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1aU))))) 
                                          << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->__Vtogcov__quotient = ((0xfffff7ffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1bU))))) 
                                          << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->__Vtogcov__quotient = ((0xffffefffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1cU))))) 
                                          << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->__Vtogcov__quotient = ((0xffffdfffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1dU))))) 
                                          << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->__Vtogcov__quotient = ((0xffffbfffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1eU))))) 
                                          << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->__Vtogcov__quotient = ((0xffff7fffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x1fU))))) 
                                          << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->__Vtogcov__quotient = ((0xfffeffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x20U))))) 
                                          << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->__Vtogcov__quotient = ((0xfffdffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x21U))))) 
                                          << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->__Vtogcov__quotient = ((0xfffbffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x22U))))) 
                                          << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->__Vtogcov__quotient = ((0xfff7ffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x23U))))) 
                                          << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->__Vtogcov__quotient = ((0xffefffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x24U))))) 
                                          << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->__Vtogcov__quotient = ((0xffdfffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x25U))))) 
                                          << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->__Vtogcov__quotient = ((0xffbfffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x26U))))) 
                                          << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->__Vtogcov__quotient = ((0xff7fffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x27U))))) 
                                          << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->__Vtogcov__quotient = ((0xfeffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x28U))))) 
                                          << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->__Vtogcov__quotient = ((0xfdffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x29U))))) 
                                          << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->__Vtogcov__quotient = ((0xfbffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2aU))))) 
                                          << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->__Vtogcov__quotient = ((0xf7ffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2bU))))) 
                                          << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->__Vtogcov__quotient = ((0xefffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2cU))))) 
                                          << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->__Vtogcov__quotient = ((0xdfffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2dU))))) 
                                          << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__quotient >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__quotient 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->__Vtogcov__quotient = ((0xbfffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2eU))))) 
                                          << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__quotient ^ vlSelf->__Vtogcov__quotient) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->__Vtogcov__quotient = ((0x7fffffffffffULL 
                                        & vlSelf->__Vtogcov__quotient) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__quotient 
                                                                      >> 0x2fU))))) 
                                          << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__numerator) ^ (IData)(vlSelf->__Vtogcov__numerator)))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffeULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__numerator)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffdULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffffbULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffff7ULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffefULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffdfULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffffbfULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffff7fULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffeffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffdffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffffbffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffff7ffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffefffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffdfffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->__Vtogcov__numerator = ((0xffffffffbfffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->__Vtogcov__numerator = ((0xffffffff7fffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffeffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffdffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->__Vtogcov__numerator = ((0xfffffffbffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->__Vtogcov__numerator = ((0xfffffff7ffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->__Vtogcov__numerator = ((0xffffffefffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->__Vtogcov__numerator = ((0xffffffdfffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->__Vtogcov__numerator = ((0xffffffbfffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->__Vtogcov__numerator = ((0xffffff7fffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->__Vtogcov__numerator = ((0xfffffeffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->__Vtogcov__numerator = ((0xfffffdffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->__Vtogcov__numerator = ((0xfffffbffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->__Vtogcov__numerator = ((0xfffff7ffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->__Vtogcov__numerator = ((0xffffefffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->__Vtogcov__numerator = ((0xffffdfffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->__Vtogcov__numerator = ((0xffffbfffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->__Vtogcov__numerator = ((0xffff7fffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x20U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->__Vtogcov__numerator = ((0xfffeffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x21U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->__Vtogcov__numerator = ((0xfffdffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x22U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->__Vtogcov__numerator = ((0xfffbffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x23U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->__Vtogcov__numerator = ((0xfff7ffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x24U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->__Vtogcov__numerator = ((0xffefffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x25U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->__Vtogcov__numerator = ((0xffdfffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x26U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->__Vtogcov__numerator = ((0xffbfffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x27U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->__Vtogcov__numerator = ((0xff7fffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x28U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->__Vtogcov__numerator = ((0xfeffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x29U)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->__Vtogcov__numerator = ((0xfdffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2aU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->__Vtogcov__numerator = ((0xfbffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2bU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->__Vtogcov__numerator = ((0xf7ffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2cU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->__Vtogcov__numerator = ((0xefffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2dU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->__Vtogcov__numerator = ((0xdfffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__numerator >> 0x2eU)) 
               ^ (IData)((vlSelf->__Vtogcov__numerator 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->__Vtogcov__numerator = ((0xbfffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__numerator ^ vlSelf->__Vtogcov__numerator) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->__Vtogcov__numerator = ((0x7fffffffffffULL 
                                         & vlSelf->__Vtogcov__numerator) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__numerator 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__denominator) 
               ^ (IData)(vlSelf->__Vtogcov__denominator)))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffeULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | (IData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->__PVT__denominator)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 1U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffdULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 1U))))) 
                                             << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 2U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffffbULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 2U))))) 
                                             << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 3U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffff7ULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 3U))))) 
                                             << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 4U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffefULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 4U))))) 
                                             << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 5U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffdfULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 5U))))) 
                                             << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 6U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffffbfULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 6U))))) 
                                             << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 7U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffff7fULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 7U))))) 
                                             << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 8U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffeffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 8U))))) 
                                             << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 9U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffdffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 9U))))) 
                                             << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xaU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffffbffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xaU))))) 
                                             << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xbU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffff7ffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xbU))))) 
                                             << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xcU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffefffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xcU))))) 
                                             << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xdU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffdfffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xdU))))) 
                                             << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xeU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->__Vtogcov__denominator = ((0xffffffffbfffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xeU))))) 
                                             << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0xfU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->__Vtogcov__denominator = ((0xffffffff7fffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0xfU))))) 
                                             << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x10U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffeffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x10U))))) 
                                             << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x11U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffdffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x11U))))) 
                                             << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x12U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->__Vtogcov__denominator = ((0xfffffffbffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x12U))))) 
                                             << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x13U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->__Vtogcov__denominator = ((0xfffffff7ffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x13U))))) 
                                             << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x14U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->__Vtogcov__denominator = ((0xffffffefffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x14U))))) 
                                             << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x15U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->__Vtogcov__denominator = ((0xffffffdfffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x15U))))) 
                                             << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x16U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->__Vtogcov__denominator = ((0xffffffbfffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x16U))))) 
                                             << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x17U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->__Vtogcov__denominator = ((0xffffff7fffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x17U))))) 
                                             << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x18U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->__Vtogcov__denominator = ((0xfffffeffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x18U))))) 
                                             << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x19U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->__Vtogcov__denominator = ((0xfffffdffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x19U))))) 
                                             << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1aU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->__Vtogcov__denominator = ((0xfffffbffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1aU))))) 
                                             << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1bU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->__Vtogcov__denominator = ((0xfffff7ffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1bU))))) 
                                             << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1cU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->__Vtogcov__denominator = ((0xffffefffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1cU))))) 
                                             << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1dU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->__Vtogcov__denominator = ((0xffffdfffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1dU))))) 
                                             << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1eU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->__Vtogcov__denominator = ((0xffffbfffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1eU))))) 
                                             << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x1fU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->__Vtogcov__denominator = ((0xffff7fffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x1fU))))) 
                                             << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x20U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->__Vtogcov__denominator = ((0xfffeffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x20U))))) 
                                             << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x21U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->__Vtogcov__denominator = ((0xfffdffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x21U))))) 
                                             << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x22U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->__Vtogcov__denominator = ((0xfffbffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x22U))))) 
                                             << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x23U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->__Vtogcov__denominator = ((0xfff7ffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x23U))))) 
                                             << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x24U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->__Vtogcov__denominator = ((0xffefffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x24U))))) 
                                             << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x25U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->__Vtogcov__denominator = ((0xffdfffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x25U))))) 
                                             << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x26U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->__Vtogcov__denominator = ((0xffbfffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x26U))))) 
                                             << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x27U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->__Vtogcov__denominator = ((0xff7fffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x27U))))) 
                                             << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x28U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->__Vtogcov__denominator = ((0xfeffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x28U))))) 
                                             << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x29U)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->__Vtogcov__denominator = ((0xfdffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x29U))))) 
                                             << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2aU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->__Vtogcov__denominator = ((0xfbffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2aU))))) 
                                             << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2bU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->__Vtogcov__denominator = ((0xf7ffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2bU))))) 
                                             << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2cU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->__Vtogcov__denominator = ((0xefffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2cU))))) 
                                             << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2dU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->__Vtogcov__denominator = ((0xdfffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2dU))))) 
                                             << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__denominator 
                        >> 0x2eU)) ^ (IData)((vlSelf->__Vtogcov__denominator 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->__Vtogcov__denominator = ((0xbfffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2eU))))) 
                                             << 0x2eU));
    }
    if ((IData)(((vlSelf->__PVT__denominator ^ vlSelf->__Vtogcov__denominator) 
                 >> 0x2fU))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->__Vtogcov__denominator = ((0x7fffffffffffULL 
                                           & vlSelf->__Vtogcov__denominator) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__denominator 
                                                                         >> 0x2fU))))) 
                                             << 0x2fU));
    }
    if ((1U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->__Vtogcov__result = ((0xfffffffeU & vlSelf->__Vtogcov__result) 
                                     | (1U & vlSelf->result));
    }
    if ((2U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->__Vtogcov__result = ((0xfffffffdU & vlSelf->__Vtogcov__result) 
                                     | (2U & vlSelf->result));
    }
    if ((4U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->__Vtogcov__result = ((0xfffffffbU & vlSelf->__Vtogcov__result) 
                                     | (4U & vlSelf->result));
    }
    if ((8U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->__Vtogcov__result = ((0xfffffff7U & vlSelf->__Vtogcov__result) 
                                     | (8U & vlSelf->result));
    }
    if ((0x10U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->__Vtogcov__result = ((0xffffffefU & vlSelf->__Vtogcov__result) 
                                     | (0x10U & vlSelf->result));
    }
    if ((0x20U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->__Vtogcov__result = ((0xffffffdfU & vlSelf->__Vtogcov__result) 
                                     | (0x20U & vlSelf->result));
    }
    if ((0x40U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->__Vtogcov__result = ((0xffffffbfU & vlSelf->__Vtogcov__result) 
                                     | (0x40U & vlSelf->result));
    }
    if ((0x80U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->__Vtogcov__result = ((0xffffff7fU & vlSelf->__Vtogcov__result) 
                                     | (0x80U & vlSelf->result));
    }
    if ((0x100U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->__Vtogcov__result = ((0xfffffeffU & vlSelf->__Vtogcov__result) 
                                     | (0x100U & vlSelf->result));
    }
    if ((0x200U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->__Vtogcov__result = ((0xfffffdffU & vlSelf->__Vtogcov__result) 
                                     | (0x200U & vlSelf->result));
    }
    if ((0x400U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->__Vtogcov__result = ((0xfffffbffU & vlSelf->__Vtogcov__result) 
                                     | (0x400U & vlSelf->result));
    }
    if ((0x800U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->__Vtogcov__result = ((0xfffff7ffU & vlSelf->__Vtogcov__result) 
                                     | (0x800U & vlSelf->result));
    }
    if ((0x1000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->__Vtogcov__result = ((0xffffefffU & vlSelf->__Vtogcov__result) 
                                     | (0x1000U & vlSelf->result));
    }
    if ((0x2000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->__Vtogcov__result = ((0xffffdfffU & vlSelf->__Vtogcov__result) 
                                     | (0x2000U & vlSelf->result));
    }
    if ((0x4000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->__Vtogcov__result = ((0xffffbfffU & vlSelf->__Vtogcov__result) 
                                     | (0x4000U & vlSelf->result));
    }
    if ((0x8000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->__Vtogcov__result = ((0xffff7fffU & vlSelf->__Vtogcov__result) 
                                     | (0x8000U & vlSelf->result));
    }
    if ((0x10000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->__Vtogcov__result = ((0xfffeffffU & vlSelf->__Vtogcov__result) 
                                     | (0x10000U & vlSelf->result));
    }
    if ((0x20000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->__Vtogcov__result = ((0xfffdffffU & vlSelf->__Vtogcov__result) 
                                     | (0x20000U & vlSelf->result));
    }
    if ((0x40000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->__Vtogcov__result = ((0xfffbffffU & vlSelf->__Vtogcov__result) 
                                     | (0x40000U & vlSelf->result));
    }
    if ((0x80000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->__Vtogcov__result = ((0xfff7ffffU & vlSelf->__Vtogcov__result) 
                                     | (0x80000U & vlSelf->result));
    }
    if ((0x100000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->__Vtogcov__result = ((0xffefffffU & vlSelf->__Vtogcov__result) 
                                     | (0x100000U & vlSelf->result));
    }
    if ((0x200000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->__Vtogcov__result = ((0xffdfffffU & vlSelf->__Vtogcov__result) 
                                     | (0x200000U & vlSelf->result));
    }
    if ((0x400000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->__Vtogcov__result = ((0xffbfffffU & vlSelf->__Vtogcov__result) 
                                     | (0x400000U & vlSelf->result));
    }
    if ((0x800000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->__Vtogcov__result = ((0xff7fffffU & vlSelf->__Vtogcov__result) 
                                     | (0x800000U & vlSelf->result));
    }
    if ((0x1000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->__Vtogcov__result = ((0xfeffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x1000000U 
                                        & vlSelf->result));
    }
    if ((0x2000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->__Vtogcov__result = ((0xfdffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x2000000U 
                                        & vlSelf->result));
    }
    if ((0x4000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->__Vtogcov__result = ((0xfbffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x4000000U 
                                        & vlSelf->result));
    }
    if ((0x8000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->__Vtogcov__result = ((0xf7ffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x8000000U 
                                        & vlSelf->result));
    }
    if ((0x10000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->__Vtogcov__result = ((0xefffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x10000000U 
                                        & vlSelf->result));
    }
    if ((0x20000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->__Vtogcov__result = ((0xdfffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x20000000U 
                                        & vlSelf->result));
    }
    if ((0x40000000U & (vlSelf->result ^ vlSelf->__Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->__Vtogcov__result = ((0xbfffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x40000000U 
                                        & vlSelf->result));
    }
    if (((vlSelf->result ^ vlSelf->__Vtogcov__result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->__Vtogcov__result = ((0x7fffffffU & vlSelf->__Vtogcov__result) 
                                     | (0x80000000U 
                                        & vlSelf->result));
    }
}
