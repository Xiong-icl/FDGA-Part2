// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut_reg_file.h"

VL_ATTR_COLD void Vdut_reg_file___ctor_var_reset(Vdut_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_reg_file___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->thread_enable = VL_RAND_RESET_I(16);
    vlSelf->warp_id = VL_RAND_RESET_I(32);
    vlSelf->block_id = VL_RAND_RESET_I(32);
    vlSelf->block_size = VL_RAND_RESET_I(32);
    vlSelf->warp_state = VL_RAND_RESET_I(4);
    vlSelf->decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->decoded_reg_input_mux = VL_RAND_RESET_I(3);
    vlSelf->decoded_immediate = VL_RAND_RESET_I(32);
    vlSelf->decoded_rd_address = VL_RAND_RESET_I(5);
    vlSelf->decoded_rs1_address = VL_RAND_RESET_I(5);
    vlSelf->decoded_rs2_address = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->alu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->lsu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__registers[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__thread_ids[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtogcov__thread_enable = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__warp_id = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__block_size = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->__PVT__unnamedblk4__DOT__i = 0;
    vlSelf->__PVT__unnamedblk5__DOT__i = 0;
}
