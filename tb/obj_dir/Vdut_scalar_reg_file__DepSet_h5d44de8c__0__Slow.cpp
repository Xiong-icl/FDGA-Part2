// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut_scalar_reg_file.h"

VL_ATTR_COLD void Vdut_scalar_reg_file___ctor_var_reset(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->warp_execution_mask = VL_RAND_RESET_I(32);
    vlSelf->warp_state = VL_RAND_RESET_I(4);
    vlSelf->decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_reg_input_mux = VL_RAND_RESET_I(3);
    vlSelf->decoded_immediate = VL_RAND_RESET_I(32);
    vlSelf->decoded_rd_address = VL_RAND_RESET_I(5);
    vlSelf->decoded_rs1_address = VL_RAND_RESET_I(5);
    vlSelf->decoded_rs2_address = VL_RAND_RESET_I(5);
    vlSelf->alu_out = VL_RAND_RESET_I(32);
    vlSelf->lsu_out = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(16);
    vlSelf->vector_to_scalar_data = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->rs2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtogcov__enable = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__warp_execution_mask = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__vector_to_scalar_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rs1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdlyvset__registers__v0 = 0;
    vlSelf->__Vdlyvdim0__registers__v33 = 0;
    vlSelf->__Vdlyvval__registers__v33 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__registers__v33 = 0;
    vlSelf->__Vdlyvdim0__registers__v34 = 0;
    vlSelf->__Vdlyvval__registers__v34 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__registers__v34 = 0;
}
