// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_FLOATING_ALU_H_
#define VERILATED_VDUT_FLOATING_ALU_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut_floating_alu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(instruction,4,0);
    CData/*0:0*/ __PVT__op1_sign_bit;
    CData/*0:0*/ __PVT__op2_sign_bit;
    CData/*7:0*/ __PVT__op1_biased_exponent;
    CData/*7:0*/ __PVT__op2_biased_exponent;
    CData/*7:0*/ __PVT__exp_diff;
    CData/*7:0*/ __PVT__result_exp;
    CData/*0:0*/ __PVT__result_sign_bit;
    CData/*0:0*/ __PVT__guard_bit;
    CData/*0:0*/ __PVT__round_bit;
    CData/*0:0*/ __PVT__round_up;
    CData/*0:0*/ __PVT__sticky_bit;
    CData/*7:0*/ __PVT__op1_unbiased_exponent;
    CData/*0:0*/ __Vtogcov__op1_sign_bit;
    CData/*0:0*/ __Vtogcov__op2_sign_bit;
    CData/*7:0*/ __Vtogcov__op1_biased_exponent;
    CData/*7:0*/ __Vtogcov__op2_biased_exponent;
    CData/*7:0*/ __Vtogcov__exp_diff;
    CData/*7:0*/ __Vtogcov__result_exp;
    CData/*0:0*/ __Vtogcov__result_sign_bit;
    CData/*0:0*/ __Vtogcov__guard_bit;
    CData/*0:0*/ __Vtogcov__round_bit;
    CData/*0:0*/ __Vtogcov__round_up;
    CData/*0:0*/ __Vtogcov__sticky_bit;
    CData/*7:0*/ __Vtogcov__op1_unbiased_exponent;
    SData/*8:0*/ __PVT__norm_exponent;
    SData/*8:0*/ __PVT__intermediary_exponent;
    SData/*8:0*/ __PVT__shift;
    SData/*8:0*/ __Vtogcov__norm_exponent;
    SData/*8:0*/ __Vtogcov__intermediary_exponent;
    SData/*8:0*/ __Vtogcov__shift;
    VL_IN(op1,31,0);
    VL_IN(op2,31,0);
    VL_OUT(result,31,0);
    IData/*23:0*/ __PVT__op1_significand;
    IData/*23:0*/ __PVT__op2_significand;
    IData/*24:0*/ __PVT__sum;
    IData/*24:0*/ __PVT__mantissa_shift_op1;
    IData/*24:0*/ __PVT__mantissa_shift_op2;
    IData/*23:0*/ __PVT__rounded_sum;
    IData/*31:0*/ __PVT__shift_count;
    IData/*31:0*/ __PVT__op1_int;
    IData/*31:0*/ __PVT__abs_op1;
    IData/*31:0*/ __PVT__significant_one;
    IData/*22:0*/ __PVT__norm_mantissa;
    IData/*31:0*/ __Vtogcov__result;
    IData/*23:0*/ __Vtogcov__op1_significand;
    IData/*23:0*/ __Vtogcov__op2_significand;
    IData/*24:0*/ __Vtogcov__sum;
    IData/*24:0*/ __Vtogcov__mantissa_shift_op1;
    IData/*24:0*/ __Vtogcov__mantissa_shift_op2;
    IData/*23:0*/ __Vtogcov__rounded_sum;
    IData/*31:0*/ __Vtogcov__op1_int;
    IData/*31:0*/ __Vtogcov__abs_op1;
    IData/*22:0*/ __Vtogcov__norm_mantissa;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    QData/*47:0*/ __PVT__product;
    QData/*47:0*/ __PVT__quotient;
    QData/*47:0*/ __PVT__numerator;
    QData/*47:0*/ __PVT__denominator;
    QData/*47:0*/ __Vtogcov__product;
    QData/*47:0*/ __Vtogcov__quotient;
    QData/*47:0*/ __Vtogcov__numerator;
    QData/*47:0*/ __Vtogcov__denominator;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_floating_alu(Vdut__Syms* symsp, const char* name);
    ~Vdut_floating_alu();
    VL_UNCOPYABLE(Vdut_floating_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
