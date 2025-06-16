// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut_alu.h"

VL_ATTR_COLD void Vdut_alu___ctor_var_reset(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->pc = VL_RAND_RESET_I(16);
    vlSelf->instruction = VL_RAND_RESET_I(5);
    vlSelf->ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->IMM = VL_RAND_RESET_I(32);
    vlSelf->Result = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__instruction = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__IMM = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__Result = VL_RAND_RESET_I(32);
}
