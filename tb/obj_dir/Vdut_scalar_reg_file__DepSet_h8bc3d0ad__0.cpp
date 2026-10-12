// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_scalar_reg_file.h"

VL_INLINE_OPT void Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2385]);
    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__core_reset)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))) {
            ++(vlSymsp->__Vcoverage[2382]);
            if ((6U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                 [0U])) {
                ++(vlSymsp->__Vcoverage[2380]);
                if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable) 
                     & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)))) {
                    ++(vlSymsp->__Vcoverage[2378]);
                    if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                                ++(vlSymsp->__Vcoverage[2374]);
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2373]);
                            }
                        }
                        if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2375]);
                            }
                            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                                ++(vlSymsp->__Vcoverage[2376]);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2377]);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable) 
                              & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)))))) {
                    ++(vlSymsp->__Vcoverage[2379]);
                }
            }
            if ((6U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                 [0U])) {
                ++(vlSymsp->__Vcoverage[2381]);
            }
        }
        if (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) {
            ++(vlSymsp->__Vcoverage[2383]);
        }
    }
    vlSelf->__Vdlyvset__registers__v0 = 0U;
    vlSelf->__Vdlyvset__registers__v33 = 0U;
    vlSelf->__Vdlyvset__registers__v34 = 0U;
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2384]);
    }
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->__Vdlyvset__registers__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))) {
        if ((6U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
             [0U])) {
            if (VL_UNLIKELY(((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable) 
                             & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address))))) {
                VL_WRITEF("Scalar Reg File: Writing to register %2#\n",
                          5,vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address);
                if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                        VL_WRITEF("[%0t] %%Error: scalar_reg_file.sv:103: Assertion failed in %Ngpu.mcu_inst.core_instance.g_warp[0].floating_scalar_reg_file_inst: Invalid decoded_reg_input_mux value\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -9,vlSymsp->name());
                        VL_STOP_MT("/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 103, "");
                    } else if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                        VL_WRITEF("[%0t] %%Error: scalar_reg_file.sv:103: Assertion failed in %Ngpu.mcu_inst.core_instance.g_warp[0].floating_scalar_reg_file_inst: Invalid decoded_reg_input_mux value\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -9,vlSymsp->name());
                        VL_STOP_MT("/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 103, "");
                    } else {
                        VL_WRITEF("Scalar Reg File: Writing vector_to_scalar_data to register %2#\n",
                                  5,vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address);
                        vlSelf->__Vdlyvval__registers__v33 
                            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                            [0U];
                        vlSelf->__Vdlyvset__registers__v33 = 1U;
                        vlSelf->__Vdlyvdim0__registers__v33 
                            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address;
                    }
                } else {
                    vlSelf->__Vdlyvval__registers__v34 
                        = ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                            ? ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                                ? ((IData)(1U) + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                                   [0U]) : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate)
                            : ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                                ? vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out
                                : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
                    vlSelf->__Vdlyvset__registers__v34 = 1U;
                    vlSelf->__Vdlyvdim0__registers__v34 
                        = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__1(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__registers__v0) {
        vlSelf->__PVT__registers[0U] = 0U;
        vlSelf->__PVT__registers[1U] = 0xffffffffU;
        vlSelf->__PVT__registers[2U] = 0U;
        vlSelf->__PVT__registers[3U] = 0U;
        vlSelf->__PVT__registers[4U] = 0U;
        vlSelf->__PVT__registers[5U] = 0U;
        vlSelf->__PVT__registers[6U] = 0U;
        vlSelf->__PVT__registers[7U] = 0U;
        vlSelf->__PVT__registers[8U] = 0U;
        vlSelf->__PVT__registers[9U] = 0U;
        vlSelf->__PVT__registers[0xaU] = 0U;
        vlSelf->__PVT__registers[0xbU] = 0U;
        vlSelf->__PVT__registers[0xcU] = 0U;
        vlSelf->__PVT__registers[0xdU] = 0U;
        vlSelf->__PVT__registers[0xeU] = 0U;
        vlSelf->__PVT__registers[0xfU] = 0U;
        vlSelf->__PVT__registers[0x10U] = 0U;
        vlSelf->__PVT__registers[0x11U] = 0U;
        vlSelf->__PVT__registers[0x12U] = 0U;
        vlSelf->__PVT__registers[0x13U] = 0U;
        vlSelf->__PVT__registers[0x14U] = 0U;
        vlSelf->__PVT__registers[0x15U] = 0U;
        vlSelf->__PVT__registers[0x16U] = 0U;
        vlSelf->__PVT__registers[0x17U] = 0U;
        vlSelf->__PVT__registers[0x18U] = 0U;
        vlSelf->__PVT__registers[0x19U] = 0U;
        vlSelf->__PVT__registers[0x1aU] = 0U;
        vlSelf->__PVT__registers[0x1bU] = 0U;
        vlSelf->__PVT__registers[0x1cU] = 0U;
        vlSelf->__PVT__registers[0x1dU] = 0U;
        vlSelf->__PVT__registers[0x1eU] = 0U;
        vlSelf->__PVT__registers[0x1fU] = 0U;
        vlSelf->__PVT__registers[0x1fU] = 0xffffffffU;
    }
    if (vlSelf->__Vdlyvset__registers__v33) {
        vlSelf->__PVT__registers[vlSelf->__Vdlyvdim0__registers__v33] 
            = vlSelf->__Vdlyvval__registers__v33;
    }
    if (vlSelf->__Vdlyvset__registers__v34) {
        vlSelf->__PVT__registers[vlSelf->__Vdlyvdim0__registers__v34] 
            = vlSelf->__Vdlyvval__registers__v34;
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffffeU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffffdU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffffbU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffff7U & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffffefU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffffdfU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffffbfU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffff7fU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffeffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffdffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffffbffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffff7ffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffefffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffdfffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffffbfffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffff7fffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffeffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffdffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfffbffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfff7ffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffefffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffdfffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xffbfffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xff7fffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfeffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x1000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfdffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x2000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xfbffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x4000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xf7ffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x8000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xefffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x10000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xdfffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x20000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0xbfffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x40000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
          [0U] ^ vlSelf->__Vtogcov__vector_to_scalar_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__vector_to_scalar_data = 
            ((0x7fffffffU & vlSelf->__Vtogcov__vector_to_scalar_data) 
             | (0x80000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                [0U]));
    }
    if ((1U ^ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) 
               ^ (IData)(vlSelf->__Vtogcov__enable)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__enable = (1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->__Vtogcov__decoded_reg_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable;
    }
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->rs2 = 0U;
        vlSelf->rs1 = 0U;
    } else {
        vlSelf->rs2 = ((0U == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address))
                        ? 0U : vlSelf->__PVT__registers
                       [vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address]);
        vlSelf->rs1 = ((0U == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address))
                        ? 0U : vlSelf->__PVT__registers
                       [vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__core_reset)))) {
        ++(vlSymsp->__Vcoverage[2370]);
    }
    if ((1U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffeU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (1U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((2U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffdU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (2U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((4U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffbU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (4U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((8U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffff7U 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (8U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffefU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffdfU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffbfU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x80U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffff7fU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x100U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffeffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x100U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x200U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffdffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x200U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x400U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffbffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x400U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x800U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffff7ffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x800U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x1000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffefffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x1000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x2000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffdfffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x2000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x4000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffbfffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x4000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x8000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffff7fffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x8000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffeffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffdffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffbffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x80000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfff7ffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x100000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffefffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x100000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x200000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffdfffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x200000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x400000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffbfffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x400000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x800000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xff7fffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x800000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x1000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfeffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x1000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x2000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfdffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x2000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x4000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfbffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x4000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x8000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xf7ffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x8000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xefffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xdfffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xbfffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if (((vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0x7fffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((1U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffeU & vlSelf->__Vtogcov__rs2) 
                                  | (1U & vlSelf->rs2));
    }
    if ((2U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffdU & vlSelf->__Vtogcov__rs2) 
                                  | (2U & vlSelf->rs2));
    }
    if ((4U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffbU & vlSelf->__Vtogcov__rs2) 
                                  | (4U & vlSelf->rs2));
    }
    if ((8U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffff7U & vlSelf->__Vtogcov__rs2) 
                                  | (8U & vlSelf->rs2));
    }
    if ((0x10U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffefU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10U & vlSelf->rs2));
    }
    if ((0x20U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffdfU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20U & vlSelf->rs2));
    }
    if ((0x40U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffbfU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40U & vlSelf->rs2));
    }
    if ((0x80U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->__Vtogcov__rs2 = ((0xffffff7fU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80U & vlSelf->rs2));
    }
    if ((0x100U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffeffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x100U & vlSelf->rs2));
    }
    if ((0x200U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffdffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x200U & vlSelf->rs2));
    }
    if ((0x400U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffbffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x400U & vlSelf->rs2));
    }
    if ((0x800U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->__Vtogcov__rs2 = ((0xfffff7ffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x800U & vlSelf->rs2));
    }
    if ((0x1000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->__Vtogcov__rs2 = ((0xffffefffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x1000U & vlSelf->rs2));
    }
    if ((0x2000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->__Vtogcov__rs2 = ((0xffffdfffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x2000U & vlSelf->rs2));
    }
    if ((0x4000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->__Vtogcov__rs2 = ((0xffffbfffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x4000U & vlSelf->rs2));
    }
    if ((0x8000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->__Vtogcov__rs2 = ((0xffff7fffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x8000U & vlSelf->rs2));
    }
    if ((0x10000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->__Vtogcov__rs2 = ((0xfffeffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10000U & vlSelf->rs2));
    }
    if ((0x20000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->__Vtogcov__rs2 = ((0xfffdffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20000U & vlSelf->rs2));
    }
    if ((0x40000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->__Vtogcov__rs2 = ((0xfffbffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40000U & vlSelf->rs2));
    }
    if ((0x80000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->__Vtogcov__rs2 = ((0xfff7ffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80000U & vlSelf->rs2));
    }
    if ((0x100000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->__Vtogcov__rs2 = ((0xffefffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x100000U & vlSelf->rs2));
    }
    if ((0x200000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->__Vtogcov__rs2 = ((0xffdfffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x200000U & vlSelf->rs2));
    }
    if ((0x400000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->__Vtogcov__rs2 = ((0xffbfffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x400000U & vlSelf->rs2));
    }
    if ((0x800000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->__Vtogcov__rs2 = ((0xff7fffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x800000U & vlSelf->rs2));
    }
    if ((0x1000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->__Vtogcov__rs2 = ((0xfeffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x1000000U & vlSelf->rs2));
    }
    if ((0x2000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->__Vtogcov__rs2 = ((0xfdffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x2000000U & vlSelf->rs2));
    }
    if ((0x4000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->__Vtogcov__rs2 = ((0xfbffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x4000000U & vlSelf->rs2));
    }
    if ((0x8000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->__Vtogcov__rs2 = ((0xf7ffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x8000000U & vlSelf->rs2));
    }
    if ((0x10000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->__Vtogcov__rs2 = ((0xefffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10000000U & vlSelf->rs2));
    }
    if ((0x20000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->__Vtogcov__rs2 = ((0xdfffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20000000U & vlSelf->rs2));
    }
    if ((0x40000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->__Vtogcov__rs2 = ((0xbfffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40000000U & vlSelf->rs2));
    }
    if (((vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->__Vtogcov__rs2 = ((0x7fffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80000000U & vlSelf->rs2));
    }
    if ((1U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffeU & vlSelf->__Vtogcov__rs1) 
                                  | (1U & vlSelf->rs1));
    }
    if ((2U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffdU & vlSelf->__Vtogcov__rs1) 
                                  | (2U & vlSelf->rs1));
    }
    if ((4U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffbU & vlSelf->__Vtogcov__rs1) 
                                  | (4U & vlSelf->rs1));
    }
    if ((8U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffff7U & vlSelf->__Vtogcov__rs1) 
                                  | (8U & vlSelf->rs1));
    }
    if ((0x10U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffefU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10U & vlSelf->rs1));
    }
    if ((0x20U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffdfU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20U & vlSelf->rs1));
    }
    if ((0x40U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffbfU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40U & vlSelf->rs1));
    }
    if ((0x80U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->__Vtogcov__rs1 = ((0xffffff7fU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80U & vlSelf->rs1));
    }
    if ((0x100U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffeffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x100U & vlSelf->rs1));
    }
    if ((0x200U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffdffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x200U & vlSelf->rs1));
    }
    if ((0x400U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffbffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x400U & vlSelf->rs1));
    }
    if ((0x800U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->__Vtogcov__rs1 = ((0xfffff7ffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x800U & vlSelf->rs1));
    }
    if ((0x1000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->__Vtogcov__rs1 = ((0xffffefffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x1000U & vlSelf->rs1));
    }
    if ((0x2000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->__Vtogcov__rs1 = ((0xffffdfffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x2000U & vlSelf->rs1));
    }
    if ((0x4000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->__Vtogcov__rs1 = ((0xffffbfffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x4000U & vlSelf->rs1));
    }
    if ((0x8000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->__Vtogcov__rs1 = ((0xffff7fffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x8000U & vlSelf->rs1));
    }
    if ((0x10000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->__Vtogcov__rs1 = ((0xfffeffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10000U & vlSelf->rs1));
    }
    if ((0x20000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->__Vtogcov__rs1 = ((0xfffdffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20000U & vlSelf->rs1));
    }
    if ((0x40000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->__Vtogcov__rs1 = ((0xfffbffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40000U & vlSelf->rs1));
    }
    if ((0x80000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->__Vtogcov__rs1 = ((0xfff7ffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80000U & vlSelf->rs1));
    }
    if ((0x100000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->__Vtogcov__rs1 = ((0xffefffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x100000U & vlSelf->rs1));
    }
    if ((0x200000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->__Vtogcov__rs1 = ((0xffdfffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x200000U & vlSelf->rs1));
    }
    if ((0x400000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->__Vtogcov__rs1 = ((0xffbfffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x400000U & vlSelf->rs1));
    }
    if ((0x800000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->__Vtogcov__rs1 = ((0xff7fffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x800000U & vlSelf->rs1));
    }
    if ((0x1000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->__Vtogcov__rs1 = ((0xfeffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x1000000U & vlSelf->rs1));
    }
    if ((0x2000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->__Vtogcov__rs1 = ((0xfdffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x2000000U & vlSelf->rs1));
    }
    if ((0x4000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->__Vtogcov__rs1 = ((0xfbffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x4000000U & vlSelf->rs1));
    }
    if ((0x8000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->__Vtogcov__rs1 = ((0xf7ffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x8000000U & vlSelf->rs1));
    }
    if ((0x10000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->__Vtogcov__rs1 = ((0xefffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10000000U & vlSelf->rs1));
    }
    if ((0x20000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->__Vtogcov__rs1 = ((0xdfffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20000000U & vlSelf->rs1));
    }
    if ((0x40000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->__Vtogcov__rs1 = ((0xbfffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40000000U & vlSelf->rs1));
    }
    if (((vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->__Vtogcov__rs1 = ((0x7fffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80000000U & vlSelf->rs1));
    }
}

VL_INLINE_OPT void Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__registers__v33;
    IData/*31:0*/ __Vdlyvval__registers__v33;
    CData/*0:0*/ __Vdlyvset__registers__v33;
    CData/*4:0*/ __Vdlyvdim0__registers__v34;
    IData/*31:0*/ __Vdlyvval__registers__v34;
    CData/*0:0*/ __Vdlyvset__registers__v34;
    // Body
    ++(vlSymsp->__Vcoverage[2385]);
    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__core_reset)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))) {
            ++(vlSymsp->__Vcoverage[2382]);
            if ((6U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                 [0U])) {
                ++(vlSymsp->__Vcoverage[2380]);
                if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable) 
                     & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)))) {
                    ++(vlSymsp->__Vcoverage[2378]);
                    if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                                ++(vlSymsp->__Vcoverage[2374]);
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2373]);
                            }
                        }
                        if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2375]);
                            }
                            if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                                ++(vlSymsp->__Vcoverage[2376]);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                                ++(vlSymsp->__Vcoverage[2377]);
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable) 
                              & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)))))) {
                    ++(vlSymsp->__Vcoverage[2379]);
                }
            }
            if ((6U != vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                 [0U])) {
                ++(vlSymsp->__Vcoverage[2381]);
            }
        }
        if (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) {
            ++(vlSymsp->__Vcoverage[2383]);
        }
    }
    __Vdlyvset__registers__v0 = 0U;
    __Vdlyvset__registers__v33 = 0U;
    __Vdlyvset__registers__v34 = 0U;
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2372]);
        ++(vlSymsp->__Vcoverage[2384]);
    }
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__registers__v0 = 1U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))) {
        if ((6U == vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
             [0U])) {
            if (VL_UNLIKELY(((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable) 
                             & (0U < (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address))))) {
                VL_WRITEF("Scalar Reg File: Writing to register %2#\n",
                          5,vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address);
                if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                        VL_WRITEF("[%0t] %%Error: scalar_reg_file.sv:103: Assertion failed in %Ngpu.mcu_inst.core_instance.g_warp[0].scalar_reg_file_inst: Invalid decoded_reg_input_mux value\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -9,vlSymsp->name());
                        VL_STOP_MT("/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 103, "");
                    } else if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)))) {
                        VL_WRITEF("[%0t] %%Error: scalar_reg_file.sv:103: Assertion failed in %Ngpu.mcu_inst.core_instance.g_warp[0].scalar_reg_file_inst: Invalid decoded_reg_input_mux value\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -9,vlSymsp->name());
                        VL_STOP_MT("/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 103, "");
                    } else {
                        VL_WRITEF("Scalar Reg File: Writing vector_to_scalar_data to register %2#\n",
                                  5,vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address);
                        __Vdlyvval__registers__v33 
                            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                            [0U];
                        __Vdlyvset__registers__v33 = 1U;
                        __Vdlyvdim0__registers__v33 
                            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address;
                    }
                } else {
                    __Vdlyvval__registers__v34 = ((2U 
                                                   & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                                                    [0U])
                                                    : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))
                                                    ? vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out
                                                    : vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
                    __Vdlyvset__registers__v34 = 1U;
                    __Vdlyvdim0__registers__v34 = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address;
                }
            }
        }
    }
    if (__Vdlyvset__registers__v0) {
        vlSelf->__PVT__registers[0U] = 0U;
        vlSelf->__PVT__registers[1U] = 0xffffffffU;
        vlSelf->__PVT__registers[2U] = 0U;
        vlSelf->__PVT__registers[3U] = 0U;
        vlSelf->__PVT__registers[4U] = 0U;
        vlSelf->__PVT__registers[5U] = 0U;
        vlSelf->__PVT__registers[6U] = 0U;
        vlSelf->__PVT__registers[7U] = 0U;
        vlSelf->__PVT__registers[8U] = 0U;
        vlSelf->__PVT__registers[9U] = 0U;
        vlSelf->__PVT__registers[0xaU] = 0U;
        vlSelf->__PVT__registers[0xbU] = 0U;
        vlSelf->__PVT__registers[0xcU] = 0U;
        vlSelf->__PVT__registers[0xdU] = 0U;
        vlSelf->__PVT__registers[0xeU] = 0U;
        vlSelf->__PVT__registers[0xfU] = 0U;
        vlSelf->__PVT__registers[0x10U] = 0U;
        vlSelf->__PVT__registers[0x11U] = 0U;
        vlSelf->__PVT__registers[0x12U] = 0U;
        vlSelf->__PVT__registers[0x13U] = 0U;
        vlSelf->__PVT__registers[0x14U] = 0U;
        vlSelf->__PVT__registers[0x15U] = 0U;
        vlSelf->__PVT__registers[0x16U] = 0U;
        vlSelf->__PVT__registers[0x17U] = 0U;
        vlSelf->__PVT__registers[0x18U] = 0U;
        vlSelf->__PVT__registers[0x19U] = 0U;
        vlSelf->__PVT__registers[0x1aU] = 0U;
        vlSelf->__PVT__registers[0x1bU] = 0U;
        vlSelf->__PVT__registers[0x1cU] = 0U;
        vlSelf->__PVT__registers[0x1dU] = 0U;
        vlSelf->__PVT__registers[0x1eU] = 0U;
        vlSelf->__PVT__registers[0x1fU] = 0U;
        vlSelf->__PVT__registers[0x1fU] = 0xffffffffU;
    }
    if (__Vdlyvset__registers__v33) {
        vlSelf->__PVT__registers[__Vdlyvdim0__registers__v33] 
            = __Vdlyvval__registers__v33;
    }
    if (__Vdlyvset__registers__v34) {
        vlSelf->__PVT__registers[__Vdlyvdim0__registers__v34] 
            = __Vdlyvval__registers__v34;
    }
    if ((1U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffeU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (1U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((2U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffdU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (2U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((4U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffffbU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (4U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((8U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffff7U 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (8U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffefU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffdfU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffffbfU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x80U & (vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffff7fU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x100U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffeffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x100U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x200U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffdffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x200U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x400U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffffbffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x400U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x800U & (vlSelf->__PVT__registers[0x1fU] 
                   ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffff7ffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x800U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x1000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffefffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x1000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x2000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffdfffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x2000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x4000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffffbfffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x4000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x8000U & (vlSelf->__PVT__registers[0x1fU] 
                    ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffff7fffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x8000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffeffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffdffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfffbffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x80000U & (vlSelf->__PVT__registers[0x1fU] 
                     ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfff7ffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x100000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffefffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x100000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x200000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffdfffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x200000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x400000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xffbfffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x400000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x800000U & (vlSelf->__PVT__registers[0x1fU] 
                      ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xff7fffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x800000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x1000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfeffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x1000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x2000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfdffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x2000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x4000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xfbffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x4000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x8000000U & (vlSelf->__PVT__registers[0x1fU] 
                       ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xf7ffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x8000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x10000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xefffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x10000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x20000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xdfffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x20000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if ((0x40000000U & (vlSelf->__PVT__registers[0x1fU] 
                        ^ vlSelf->__Vtogcov__warp_execution_mask))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0xbfffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x40000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
    if (((vlSelf->__PVT__registers[0x1fU] ^ vlSelf->__Vtogcov__warp_execution_mask) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->__Vtogcov__warp_execution_mask = ((0x7fffffffU 
                                                   & vlSelf->__Vtogcov__warp_execution_mask) 
                                                  | (0x80000000U 
                                                     & vlSelf->__PVT__registers
                                                     [0x1fU]));
    }
}

VL_INLINE_OPT void Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__1(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___nba_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->__Vtogcov__decoded_reg_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable;
    }
    if (vlSymsp->TOP.gpu__DOT__core_reset) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->rs2 = 0U;
        vlSelf->rs1 = 0U;
    } else {
        vlSelf->rs2 = ((0U == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address))
                        ? 0U : vlSelf->__PVT__registers
                       [vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address]);
        vlSelf->rs1 = ((0U == (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address))
                        ? 0U : vlSelf->__PVT__registers
                       [vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__core_reset)))) {
        ++(vlSymsp->__Vcoverage[2370]);
    }
    if ((1U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffeU & vlSelf->__Vtogcov__rs2) 
                                  | (1U & vlSelf->rs2));
    }
    if ((2U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffdU & vlSelf->__Vtogcov__rs2) 
                                  | (2U & vlSelf->rs2));
    }
    if ((4U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffffbU & vlSelf->__Vtogcov__rs2) 
                                  | (4U & vlSelf->rs2));
    }
    if ((8U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffff7U & vlSelf->__Vtogcov__rs2) 
                                  | (8U & vlSelf->rs2));
    }
    if ((0x10U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffefU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10U & vlSelf->rs2));
    }
    if ((0x20U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffdfU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20U & vlSelf->rs2));
    }
    if ((0x40U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->__Vtogcov__rs2 = ((0xffffffbfU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40U & vlSelf->rs2));
    }
    if ((0x80U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->__Vtogcov__rs2 = ((0xffffff7fU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80U & vlSelf->rs2));
    }
    if ((0x100U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffeffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x100U & vlSelf->rs2));
    }
    if ((0x200U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffdffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x200U & vlSelf->rs2));
    }
    if ((0x400U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->__Vtogcov__rs2 = ((0xfffffbffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x400U & vlSelf->rs2));
    }
    if ((0x800U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->__Vtogcov__rs2 = ((0xfffff7ffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x800U & vlSelf->rs2));
    }
    if ((0x1000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->__Vtogcov__rs2 = ((0xffffefffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x1000U & vlSelf->rs2));
    }
    if ((0x2000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->__Vtogcov__rs2 = ((0xffffdfffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x2000U & vlSelf->rs2));
    }
    if ((0x4000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->__Vtogcov__rs2 = ((0xffffbfffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x4000U & vlSelf->rs2));
    }
    if ((0x8000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->__Vtogcov__rs2 = ((0xffff7fffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x8000U & vlSelf->rs2));
    }
    if ((0x10000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->__Vtogcov__rs2 = ((0xfffeffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10000U & vlSelf->rs2));
    }
    if ((0x20000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->__Vtogcov__rs2 = ((0xfffdffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20000U & vlSelf->rs2));
    }
    if ((0x40000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->__Vtogcov__rs2 = ((0xfffbffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40000U & vlSelf->rs2));
    }
    if ((0x80000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->__Vtogcov__rs2 = ((0xfff7ffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80000U & vlSelf->rs2));
    }
    if ((0x100000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->__Vtogcov__rs2 = ((0xffefffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x100000U & vlSelf->rs2));
    }
    if ((0x200000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->__Vtogcov__rs2 = ((0xffdfffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x200000U & vlSelf->rs2));
    }
    if ((0x400000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->__Vtogcov__rs2 = ((0xffbfffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x400000U & vlSelf->rs2));
    }
    if ((0x800000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->__Vtogcov__rs2 = ((0xff7fffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x800000U & vlSelf->rs2));
    }
    if ((0x1000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->__Vtogcov__rs2 = ((0xfeffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x1000000U & vlSelf->rs2));
    }
    if ((0x2000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->__Vtogcov__rs2 = ((0xfdffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x2000000U & vlSelf->rs2));
    }
    if ((0x4000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->__Vtogcov__rs2 = ((0xfbffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x4000000U & vlSelf->rs2));
    }
    if ((0x8000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->__Vtogcov__rs2 = ((0xf7ffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x8000000U & vlSelf->rs2));
    }
    if ((0x10000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->__Vtogcov__rs2 = ((0xefffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x10000000U & vlSelf->rs2));
    }
    if ((0x20000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->__Vtogcov__rs2 = ((0xdfffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x20000000U & vlSelf->rs2));
    }
    if ((0x40000000U & (vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->__Vtogcov__rs2 = ((0xbfffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x40000000U & vlSelf->rs2));
    }
    if (((vlSelf->rs2 ^ vlSelf->__Vtogcov__rs2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->__Vtogcov__rs2 = ((0x7fffffffU & vlSelf->__Vtogcov__rs2) 
                                  | (0x80000000U & vlSelf->rs2));
    }
    if ((1U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffeU & vlSelf->__Vtogcov__rs1) 
                                  | (1U & vlSelf->rs1));
    }
    if ((2U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffdU & vlSelf->__Vtogcov__rs1) 
                                  | (2U & vlSelf->rs1));
    }
    if ((4U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffffbU & vlSelf->__Vtogcov__rs1) 
                                  | (4U & vlSelf->rs1));
    }
    if ((8U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffff7U & vlSelf->__Vtogcov__rs1) 
                                  | (8U & vlSelf->rs1));
    }
    if ((0x10U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffefU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10U & vlSelf->rs1));
    }
    if ((0x20U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffdfU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20U & vlSelf->rs1));
    }
    if ((0x40U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->__Vtogcov__rs1 = ((0xffffffbfU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40U & vlSelf->rs1));
    }
    if ((0x80U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->__Vtogcov__rs1 = ((0xffffff7fU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80U & vlSelf->rs1));
    }
    if ((0x100U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffeffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x100U & vlSelf->rs1));
    }
    if ((0x200U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffdffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x200U & vlSelf->rs1));
    }
    if ((0x400U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->__Vtogcov__rs1 = ((0xfffffbffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x400U & vlSelf->rs1));
    }
    if ((0x800U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->__Vtogcov__rs1 = ((0xfffff7ffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x800U & vlSelf->rs1));
    }
    if ((0x1000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->__Vtogcov__rs1 = ((0xffffefffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x1000U & vlSelf->rs1));
    }
    if ((0x2000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->__Vtogcov__rs1 = ((0xffffdfffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x2000U & vlSelf->rs1));
    }
    if ((0x4000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->__Vtogcov__rs1 = ((0xffffbfffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x4000U & vlSelf->rs1));
    }
    if ((0x8000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->__Vtogcov__rs1 = ((0xffff7fffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x8000U & vlSelf->rs1));
    }
    if ((0x10000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->__Vtogcov__rs1 = ((0xfffeffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10000U & vlSelf->rs1));
    }
    if ((0x20000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->__Vtogcov__rs1 = ((0xfffdffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20000U & vlSelf->rs1));
    }
    if ((0x40000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->__Vtogcov__rs1 = ((0xfffbffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40000U & vlSelf->rs1));
    }
    if ((0x80000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->__Vtogcov__rs1 = ((0xfff7ffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80000U & vlSelf->rs1));
    }
    if ((0x100000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->__Vtogcov__rs1 = ((0xffefffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x100000U & vlSelf->rs1));
    }
    if ((0x200000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->__Vtogcov__rs1 = ((0xffdfffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x200000U & vlSelf->rs1));
    }
    if ((0x400000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->__Vtogcov__rs1 = ((0xffbfffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x400000U & vlSelf->rs1));
    }
    if ((0x800000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->__Vtogcov__rs1 = ((0xff7fffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x800000U & vlSelf->rs1));
    }
    if ((0x1000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->__Vtogcov__rs1 = ((0xfeffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x1000000U & vlSelf->rs1));
    }
    if ((0x2000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->__Vtogcov__rs1 = ((0xfdffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x2000000U & vlSelf->rs1));
    }
    if ((0x4000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->__Vtogcov__rs1 = ((0xfbffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x4000000U & vlSelf->rs1));
    }
    if ((0x8000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->__Vtogcov__rs1 = ((0xf7ffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x8000000U & vlSelf->rs1));
    }
    if ((0x10000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->__Vtogcov__rs1 = ((0xefffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x10000000U & vlSelf->rs1));
    }
    if ((0x20000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->__Vtogcov__rs1 = ((0xdfffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x20000000U & vlSelf->rs1));
    }
    if ((0x40000000U & (vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->__Vtogcov__rs1 = ((0xbfffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x40000000U & vlSelf->rs1));
    }
    if (((vlSelf->rs1 ^ vlSelf->__Vtogcov__rs1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->__Vtogcov__rs1 = ((0x7fffffffU & vlSelf->__Vtogcov__rs1) 
                                  | (0x80000000U & vlSelf->rs1));
    }
}
