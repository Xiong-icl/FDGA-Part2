// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_reg_file.h"

VL_ATTR_COLD void Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst(Vdut_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2388]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    vlSelf->__PVT__thread_ids[0U] = 0U;
    vlSelf->__PVT__thread_ids[1U] = 1U;
    vlSelf->__PVT__thread_ids[2U] = 2U;
    vlSelf->__PVT__thread_ids[3U] = 3U;
    vlSelf->__PVT__thread_ids[4U] = 4U;
    vlSelf->__PVT__thread_ids[5U] = 5U;
    vlSelf->__PVT__thread_ids[6U] = 6U;
    vlSelf->__PVT__thread_ids[7U] = 7U;
    vlSelf->__PVT__thread_ids[8U] = 8U;
    vlSelf->__PVT__thread_ids[9U] = 9U;
    vlSelf->__PVT__thread_ids[0xaU] = 0xaU;
    vlSelf->__PVT__thread_ids[0xbU] = 0xbU;
    vlSelf->__PVT__thread_ids[0xcU] = 0xcU;
    vlSelf->__PVT__thread_ids[0xdU] = 0xdU;
    vlSelf->__PVT__thread_ids[0xeU] = 0xeU;
    vlSelf->__PVT__thread_ids[0xfU] = 0xfU;
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    if ((1U & vlSelf->__Vtogcov__warp_id)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__warp_id = (0xfffffffeU & vlSelf->__Vtogcov__warp_id);
    }
}

VL_ATTR_COLD void Vdut_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__0(Vdut_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_reg_file___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
               [0x1fU] ^ (IData)(vlSelf->__Vtogcov__thread_enable)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfffeU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (1U & 
                                               vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 1U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 1U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfffdU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (2U & 
                                               vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 2U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfffbU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (4U & 
                                               vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 3U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfff7U 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (8U & 
                                               vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 4U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 4U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xffefU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x10U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 5U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 5U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xffdfU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x20U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 6U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 6U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xffbfU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x40U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 7U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 7U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xff7fU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x80U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 8U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 8U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfeffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x100U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 9U) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                  >> 9U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfdffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x200U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xfbffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x400U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xf7ffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x800U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xcU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xefffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x1000U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xdfffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x2000U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0xbfffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x4000U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                [0x1fU] >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__thread_enable) 
                                    >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__thread_enable = ((0x7fffU 
                                             & (IData)(vlSelf->__Vtogcov__thread_enable)) 
                                            | (0x8000U 
                                               & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                                               [0x1fU]));
    }
    if ((1U & ((vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                << 4U) ^ vlSelf->__Vtogcov__block_size))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (1U & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                                  << 4U)));
    }
    if ((1U & ((0x7ffffff8U & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                               << 3U)) ^ (vlSelf->__Vtogcov__block_size 
                                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = (0xfffffffdU 
                                         & vlSelf->__Vtogcov__block_size);
    }
    if ((1U & ((0x3ffffffcU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                               << 2U)) ^ (vlSelf->__Vtogcov__block_size 
                                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = (0xfffffffbU 
                                         & vlSelf->__Vtogcov__block_size);
    }
    if ((1U & ((0x1ffffffeU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                               << 1U)) ^ (vlSelf->__Vtogcov__block_size 
                                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = (0xfffffff7U 
                                         & vlSelf->__Vtogcov__block_size);
    }
    if ((1U & ((0xfffffffU & vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U]) 
               ^ (vlSelf->__Vtogcov__block_size >> 4U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x10U & 
                                            (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                             << 4U)));
    }
    if ((1U & ((0x7ffffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                              >> 1U)) ^ (vlSelf->__Vtogcov__block_size 
                                         >> 5U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x20U & 
                                            (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                             << 4U)));
    }
    if ((1U & ((0x3ffffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                              >> 2U)) ^ (vlSelf->__Vtogcov__block_size 
                                         >> 6U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x40U & 
                                            (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                             << 4U)));
    }
    if ((1U & ((0x1ffffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                              >> 3U)) ^ (vlSelf->__Vtogcov__block_size 
                                         >> 7U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x80U & 
                                            (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                             << 4U)));
    }
    if ((1U & ((0xffffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                             >> 4U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 8U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x100U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x7fffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                             >> 5U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 9U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x200U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x3fffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                             >> 6U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x400U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x1fffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                             >> 7U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x800U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0xfffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                            >> 8U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x1000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x7ffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                            >> 9U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x2000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x3ffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                            >> 0xaU)) ^ (vlSelf->__Vtogcov__block_size 
                                         >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x4000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x1ffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                            >> 0xbU)) ^ (vlSelf->__Vtogcov__block_size 
                                         >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x8000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0xffffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                           >> 0xcU)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x10000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x7fffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                           >> 0xdU)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x20000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x3fffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                           >> 0xeU)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x40000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x1fffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                           >> 0xfU)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x80000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0xfffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                          >> 0x10U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x100000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x7ffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                          >> 0x11U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x200000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x3ffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                          >> 0x12U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x400000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x1ffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                          >> 0x13U)) ^ (vlSelf->__Vtogcov__block_size 
                                        >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x800000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0xffU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                         >> 0x14U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x1000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x7fU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                         >> 0x15U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x2000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x3fU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                         >> 0x16U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x4000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0x1fU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                         >> 0x17U)) ^ (vlSelf->__Vtogcov__block_size 
                                       >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x8000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((0xfU & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                        >> 0x18U)) ^ (vlSelf->__Vtogcov__block_size 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x10000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((7U & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                      >> 0x19U)) ^ (vlSelf->__Vtogcov__block_size 
                                    >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x20000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((3U & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                      >> 0x1aU)) ^ (vlSelf->__Vtogcov__block_size 
                                    >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x40000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if ((1U & ((vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                >> 0x1bU) ^ (vlSelf->__Vtogcov__block_size 
                             >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__block_size = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__block_size) 
                                         | (0x80000000U 
                                            & (vlSymsp->TOP.gpu__DOT__kernel_config_reg[0U] 
                                               << 4U)));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->__Vtogcov__decoded_reg_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__decoded_reg_write_enable;
    }
}

VL_ATTR_COLD void Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst(Vdut_reg_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2388]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    vlSelf->__PVT__thread_ids[0U] = 0U;
    vlSelf->__PVT__thread_ids[1U] = 1U;
    vlSelf->__PVT__thread_ids[2U] = 2U;
    vlSelf->__PVT__thread_ids[3U] = 3U;
    vlSelf->__PVT__thread_ids[4U] = 4U;
    vlSelf->__PVT__thread_ids[5U] = 5U;
    vlSelf->__PVT__thread_ids[6U] = 6U;
    vlSelf->__PVT__thread_ids[7U] = 7U;
    vlSelf->__PVT__thread_ids[8U] = 8U;
    vlSelf->__PVT__thread_ids[9U] = 9U;
    vlSelf->__PVT__thread_ids[0xaU] = 0xaU;
    vlSelf->__PVT__thread_ids[0xbU] = 0xbU;
    vlSelf->__PVT__thread_ids[0xcU] = 0xcU;
    vlSelf->__PVT__thread_ids[0xdU] = 0xdU;
    vlSelf->__PVT__thread_ids[0xeU] = 0xeU;
    vlSelf->__PVT__thread_ids[0xfU] = 0xfU;
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
    ++(vlSymsp->__Vcoverage[2387]);
}

VL_ATTR_COLD void Vdut_reg_file___configure_coverage(Vdut_reg_file* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_reg_file___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 9, 45, "", "v_toggle/reg_file", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 10, 45, "", "v_toggle/reg_file", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 11, 45, "", "v_toggle/reg_file", "enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 14, 45, "", "v_toggle/reg_file", "thread_enable[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 17, 45, "", "v_toggle/reg_file", "warp_id[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 18, 45, "", "v_toggle/reg_file", "block_id[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 19, 45, "", "v_toggle/reg_file", "block_size[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1942]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 20, 26, "", "v_toggle/reg_file", "warp_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1943]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 20, 26, "", "v_toggle/reg_file", "warp_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1944]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 20, 26, "", "v_toggle/reg_file", "warp_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1945]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 20, 26, "", "v_toggle/reg_file", "warp_state[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2386]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 23, 45, "", "v_toggle/reg_file", "decoded_reg_write_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2060]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 24, 45, "", "v_toggle/reg_file", "decoded_reg_input_mux[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2061]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 24, 45, "", "v_toggle/reg_file", "decoded_reg_input_mux[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2062]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 24, 45, "", "v_toggle/reg_file", "decoded_reg_input_mux[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2064]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2065]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2066]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2067]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2068]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2069]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2070]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2071]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2072]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2073]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2074]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2075]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2076]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2077]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2078]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2079]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2080]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2081]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2082]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2083]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2084]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2085]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2086]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2087]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2088]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2089]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2090]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2091]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2092]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2093]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2094]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2095]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 25, 45, "", "v_toggle/reg_file", "decoded_immediate[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2096]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 26, 45, "", "v_toggle/reg_file", "decoded_rd_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2097]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 26, 45, "", "v_toggle/reg_file", "decoded_rd_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2098]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 26, 45, "", "v_toggle/reg_file", "decoded_rd_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2099]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 26, 45, "", "v_toggle/reg_file", "decoded_rd_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2100]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 26, 45, "", "v_toggle/reg_file", "decoded_rd_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2101]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 27, 45, "", "v_toggle/reg_file", "decoded_rs1_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2102]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 27, 45, "", "v_toggle/reg_file", "decoded_rs1_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2103]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 27, 45, "", "v_toggle/reg_file", "decoded_rs1_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2104]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 27, 45, "", "v_toggle/reg_file", "decoded_rs1_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2105]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 27, 45, "", "v_toggle/reg_file", "decoded_rs1_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2106]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 28, 45, "", "v_toggle/reg_file", "decoded_rs2_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2107]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 28, 45, "", "v_toggle/reg_file", "decoded_rs2_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2108]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 28, 45, "", "v_toggle/reg_file", "decoded_rs2_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2109]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 28, 45, "", "v_toggle/reg_file", "decoded_rs2_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2110]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 28, 45, "", "v_toggle/reg_file", "decoded_rs2_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2387]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 51, 5, "", "v_line/reg_file", "block", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2388]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 50, 1, "", "v_line/reg_file", "block", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2389]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 76, 13, "", "v_line/reg_file", "block", "76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2390]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 71, 9, "", "v_line/reg_file", "block", "71-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2391]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 81, 9, "", "v_line/reg_file", "block", "81-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2392]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 90, 17, "", "v_branch/reg_file", "if", "90-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2393]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 90, 18, "", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2394]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 101, 36, "", "v_line/reg_file", "case", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2395]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 105, 36, "", "v_line/reg_file", "case", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2396]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 106, 38, "", "v_line/reg_file", "case", "106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2397]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 107, 45, "", "v_line/reg_file", "case", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2398]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 99, 21, "", "v_branch/reg_file", "if", "99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2399]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 99, 22, "", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2400]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 97, 17, "", "v_branch/reg_file", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2401]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 97, 18, "", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2402]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 89, 13, "", "v_branch/reg_file", "if", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2403]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 89, 14, "", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2404]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 88, 9, "", "v_line/reg_file", "block", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2405]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 80, 14, "", "v_branch/reg_file", "if", "80-81,88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2406]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 80, 15, "", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2407]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 70, 5, "", "v_line/reg_file", "elsif", "70-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2408]), first, "/root/FDGA-1/rtl/lock_in/reg_file.sv", 68, 1, "", "v_line/reg_file", "block", "68");
}
