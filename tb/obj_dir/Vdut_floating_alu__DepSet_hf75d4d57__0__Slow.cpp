// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut_floating_alu.h"

VL_ATTR_COLD void Vdut_floating_alu___ctor_var_reset(Vdut_floating_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_floating_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->op1 = VL_RAND_RESET_I(32);
    vlSelf->op2 = VL_RAND_RESET_I(32);
    vlSelf->instruction = VL_RAND_RESET_I(5);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op1_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op2_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op1_biased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__PVT__op2_biased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__PVT__op1_significand = VL_RAND_RESET_I(24);
    vlSelf->__PVT__op2_significand = VL_RAND_RESET_I(24);
    vlSelf->__PVT__exp_diff = VL_RAND_RESET_I(8);
    vlSelf->__PVT__result_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mantissa_shift_op1 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mantissa_shift_op2 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__result_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__guard_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__round_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rounded_sum = VL_RAND_RESET_I(24);
    vlSelf->__PVT__product = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__quotient = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__numerator = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__denominator = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__shift_count = 0;
    vlSelf->__PVT__sticky_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op1_unbiased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__PVT__op1_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__abs_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__significant_one = 0;
    vlSelf->__PVT__norm_exponent = VL_RAND_RESET_I(9);
    vlSelf->__PVT__norm_mantissa = VL_RAND_RESET_I(23);
    vlSelf->__PVT__intermediary_exponent = VL_RAND_RESET_I(9);
    vlSelf->__PVT__shift = VL_RAND_RESET_I(9);
    vlSelf->__Vtogcov__result = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op1_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__op2_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__op1_biased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__op2_biased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__op1_significand = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__op2_significand = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__exp_diff = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__result_exp = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__sum = VL_RAND_RESET_I(25);
    vlSelf->__Vtogcov__mantissa_shift_op1 = VL_RAND_RESET_I(25);
    vlSelf->__Vtogcov__mantissa_shift_op2 = VL_RAND_RESET_I(25);
    vlSelf->__Vtogcov__result_sign_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__guard_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__round_up = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rounded_sum = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__product = VL_RAND_RESET_Q(48);
    vlSelf->__Vtogcov__quotient = VL_RAND_RESET_Q(48);
    vlSelf->__Vtogcov__numerator = VL_RAND_RESET_Q(48);
    vlSelf->__Vtogcov__denominator = VL_RAND_RESET_Q(48);
    vlSelf->__Vtogcov__sticky_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__op1_unbiased_exponent = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__op1_int = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__abs_op1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__norm_exponent = VL_RAND_RESET_I(9);
    vlSelf->__Vtogcov__norm_mantissa = VL_RAND_RESET_I(23);
    vlSelf->__Vtogcov__intermediary_exponent = VL_RAND_RESET_I(9);
    vlSelf->__Vtogcov__shift = VL_RAND_RESET_I(9);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
}
