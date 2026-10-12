// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_scalar_reg_file.h"

VL_ATTR_COLD void Vdut_scalar_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2371]);
}

VL_ATTR_COLD void Vdut_scalar_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0\n"); );
    // Body
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
    if ((1U ^ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) 
               ^ (IData)(vlSelf->__Vtogcov__enable)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__enable = (1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)));
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
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->__Vtogcov__decoded_reg_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable;
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

VL_ATTR_COLD void Vdut_scalar_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0(Vdut_scalar_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0\n"); );
    // Body
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
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->__Vtogcov__decoded_reg_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable;
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

VL_ATTR_COLD void Vdut_scalar_reg_file___configure_coverage(Vdut_scalar_reg_file* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_scalar_reg_file___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 9, 45, "", "v_toggle/scalar_reg_file", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 10, 45, "", "v_toggle/scalar_reg_file", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 11, 45, "", "v_toggle/scalar_reg_file", "enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2272]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2273]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2274]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2275]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2276]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2278]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2279]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2280]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2281]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2282]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2283]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2284]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2285]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2286]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2287]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2288]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2289]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2290]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2291]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2292]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2293]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2294]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2295]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2296]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2297]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2298]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2299]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2300]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2301]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2302]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2303]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 13, 45, "", "v_toggle/scalar_reg_file", "warp_execution_mask[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1942]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 15, 45, "", "v_toggle/scalar_reg_file", "warp_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1943]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 15, 45, "", "v_toggle/scalar_reg_file", "warp_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1944]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 15, 45, "", "v_toggle/scalar_reg_file", "warp_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1945]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 15, 45, "", "v_toggle/scalar_reg_file", "warp_state[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2304]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 18, 45, "", "v_toggle/scalar_reg_file", "decoded_reg_write_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2060]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 19, 45, "", "v_toggle/scalar_reg_file", "decoded_reg_input_mux[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2061]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 19, 45, "", "v_toggle/scalar_reg_file", "decoded_reg_input_mux[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2062]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 19, 45, "", "v_toggle/scalar_reg_file", "decoded_reg_input_mux[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2064]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2065]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2066]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2067]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2068]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2069]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2070]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2071]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2072]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2073]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2074]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2075]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2076]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2077]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2078]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2079]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2080]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2081]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2082]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2083]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2084]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2085]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2086]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2087]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2088]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2089]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2090]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2091]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2092]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2093]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2094]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2095]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 20, 45, "", "v_toggle/scalar_reg_file", "decoded_immediate[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2096]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 21, 45, "", "v_toggle/scalar_reg_file", "decoded_rd_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2097]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 21, 45, "", "v_toggle/scalar_reg_file", "decoded_rd_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2098]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 21, 45, "", "v_toggle/scalar_reg_file", "decoded_rd_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2099]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 21, 45, "", "v_toggle/scalar_reg_file", "decoded_rd_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2100]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 21, 45, "", "v_toggle/scalar_reg_file", "decoded_rd_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2101]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 22, 45, "", "v_toggle/scalar_reg_file", "decoded_rs1_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2102]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 22, 45, "", "v_toggle/scalar_reg_file", "decoded_rs1_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2103]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 22, 45, "", "v_toggle/scalar_reg_file", "decoded_rs1_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2104]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 22, 45, "", "v_toggle/scalar_reg_file", "decoded_rs1_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2105]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 22, 45, "", "v_toggle/scalar_reg_file", "decoded_rs1_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2106]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 23, 45, "", "v_toggle/scalar_reg_file", "decoded_rs2_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2107]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 23, 45, "", "v_toggle/scalar_reg_file", "decoded_rs2_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2108]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 23, 45, "", "v_toggle/scalar_reg_file", "decoded_rs2_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2109]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 23, 45, "", "v_toggle/scalar_reg_file", "decoded_rs2_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2110]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 23, 45, "", "v_toggle/scalar_reg_file", "decoded_rs2_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1509]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1510]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1511]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1512]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1513]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1514]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1515]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1516]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1517]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1518]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1519]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1520]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1521]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1522]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1523]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1524]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1525]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1526]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1528]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1529]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1531]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1532]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1533]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1534]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1535]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1536]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1537]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1538]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1539]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1540]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 25, 45, "", "v_toggle/scalar_reg_file", "alu_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1573]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1574]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1575]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1576]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1577]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1578]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1579]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1580]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1581]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1582]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1583]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1584]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1585]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1586]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1587]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1588]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1589]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1590]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1591]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1592]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1593]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1594]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1595]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1596]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1597]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1598]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1599]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1600]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1601]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1602]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1603]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1604]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 26, 45, "", "v_toggle/scalar_reg_file", "lsu_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1946]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1947]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1948]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1949]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1950]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1951]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1952]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1953]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1954]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1955]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1956]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1957]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1958]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1959]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1960]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1961]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 27, 45, "", "v_toggle/scalar_reg_file", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 28, 45, "", "v_toggle/scalar_reg_file", "vector_to_scalar_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2305]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2306]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2307]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2309]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2310]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2311]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2312]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2313]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2314]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2315]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2316]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2317]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2318]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2319]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2320]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2321]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2322]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2323]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2324]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2325]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2326]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2327]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2328]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2329]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2330]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2331]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2332]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2333]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2334]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2335]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2336]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 30, 45, "", "v_toggle/scalar_reg_file", "rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2337]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2338]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2339]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2340]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2341]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2342]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2343]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2344]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2345]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2346]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2347]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2348]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2349]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2350]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2351]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2352]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2353]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2354]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2355]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2356]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2357]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2358]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2359]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2360]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2361]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2362]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2363]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2364]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2365]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2366]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2367]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2368]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 31, 45, "", "v_toggle/scalar_reg_file", "rs2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2369]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 44, 5, "", "v_branch/scalar_reg_file", "if", "44-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2370]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 44, 6, "", "v_branch/scalar_reg_file", "else", "47-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2371]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 42, 1, "", "v_line/scalar_reg_file", "block", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2372]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 79, 9, "", "v_line/scalar_reg_file", "block", "79-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2373]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 94, 28, "", "v_line/scalar_reg_file", "case", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2374]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 95, 28, "", "v_line/scalar_reg_file", "case", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2375]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 96, 30, "", "v_line/scalar_reg_file", "case", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2376]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 97, 30, "", "v_line/scalar_reg_file", "case", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2377]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 98, 37, "", "v_line/scalar_reg_file", "case", "98-99,101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2378]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 91, 13, "", "v_branch/scalar_reg_file", "if", "91-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2379]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 91, 14, "", "v_branch/scalar_reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2380]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 90, 9, "", "v_branch/scalar_reg_file", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2381]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 90, 10, "", "v_branch/scalar_reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2382]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 83, 14, "", "v_branch/scalar_reg_file", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2383]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 83, 15, "", "v_branch/scalar_reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2384]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 76, 5, "", "v_line/scalar_reg_file", "elsif", "76-79,82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2385]), first, "/root/FDGA-1/rtl/lock_in/scalar_reg_file.sv", 73, 1, "", "v_line/scalar_reg_file", "block", "73");
}
