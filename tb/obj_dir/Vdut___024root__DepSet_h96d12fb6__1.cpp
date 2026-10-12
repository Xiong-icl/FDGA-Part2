// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__3(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask[0U] 
        = (0xffffU & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
           [0x1fU]);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.rs2;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.rs1;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.rs2;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.rs1;
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xfbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xf7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0xbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[0U] 
            = ((0x7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
                         [0U]));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask 
        = ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
            ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
           [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]
            : 0U);
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                         [0U]));
    }
    if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
          ? (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
             [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
          : 0U)) {
        if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
              ? (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                 [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
              : 0U)) {
            if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                    [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
                vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                    [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
            } else {
                vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 = 0U;
                vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 = 0U;
            }
        } else if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2
                [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
        } else {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 = 0U;
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 = 0U;
        }
    } else if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
                 ? (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                    [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
                 : 0U)) {
        if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
                [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1
                [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
        } else {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 = 0U;
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 = 0U;
        }
    } else if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
    } else {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 = 0U;
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1
                         [0U]));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfffeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfffdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfffbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfff7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xffefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xffdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xffbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xff7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x100U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfeffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x100U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x200U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfdffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x200U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x400U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xfbffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x400U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x800U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xf7ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x800U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xefffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x1000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xdfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x2000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0xbfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x4000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    if ((0x8000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask 
            = ((0x7fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask)) 
               | (0x8000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 1U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 2U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 3U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 4U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 5U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 6U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 7U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 8U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 9U)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 0xaU)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 0xbU)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 0xcU)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 0xdU)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable 
        = (1U & ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
                 & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
                    >> 0xeU)));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable 
        = ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable)) 
           & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask) 
              >> 0xfU));
    if (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[1U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[2U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[3U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[4U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[5U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[6U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[7U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[8U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[9U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xaU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xbU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xcU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xdU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xeU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xfU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[1U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[2U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[3U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[4U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[5U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[6U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[7U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[8U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[9U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xaU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xbU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xcU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xdU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xeU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xfU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1;
    } else {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[1U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[2U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[3U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[4U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[5U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[6U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[7U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[8U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[9U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xaU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xbU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xcU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xdU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xeU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0xfU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop2 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op2;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[1U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[2U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[3U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[4U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[5U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[6U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[7U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[8U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[9U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xaU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xbU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xcU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xdU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xeU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0xfU] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op1;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop1 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op1;
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2) 
               | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1) 
               | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1));
    }
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__4(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__4\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (1U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((2U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (2U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((4U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (4U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((8U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (8U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x10U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x10U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x20U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x20U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x40U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x40U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x80U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x80U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x100U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x100U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x200U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x200U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x400U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x400U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x800U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x800U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x1000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x1000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x2000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x2000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x4000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x4000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x8000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x8000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x10000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x10000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x20000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x20000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x40000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x40000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x80000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x80000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x100000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x100000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x200000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x200000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x400000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x400000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x800000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x800000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x1000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x1000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x2000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x2000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x4000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x4000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x8000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x8000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x10000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x10000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x20000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x20000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((0x40000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x40000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if (((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result) 
               | (0x80000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result));
    }
    if ((1U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (1U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((2U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (2U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((4U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (4U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((8U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (8U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x10U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x10U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x20U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x20U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x40U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x40U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x80U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x80U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x100U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x100U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x200U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x200U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x400U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x400U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x800U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x800U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x1000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x1000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x2000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x2000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x4000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x4000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x8000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x8000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x10000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x10000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x20000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x20000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x40000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x40000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x80000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x80000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x100000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x100000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x200000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x200000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x400000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x400000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x800000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x800000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x1000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x1000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x2000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x2000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x4000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x4000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x8000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x8000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x10000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x10000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x20000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x20000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if ((0x40000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x40000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    if (((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result) 
               | (0x80000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
        = (((0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)) 
            & (0x19U > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))
            ? vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result
            : vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result);
    if ((0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[1U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[2U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[3U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[4U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[5U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[6U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[7U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[8U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[9U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xaU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xbU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xcU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xdU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xeU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xfU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.result;
    } else {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[1U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[2U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[3U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[4U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[5U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[6U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[7U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[8U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[9U] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xaU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xbU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xcU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xdU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xeU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst.Result;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0xfU] 
            = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst.Result;
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out) 
               | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out
        [0xfU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [1U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [2U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [3U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [4U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [5U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [6U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [7U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [8U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [9U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xaU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xbU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xcU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xdU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xeU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out
        [0xfU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [1U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [2U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [3U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [4U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [5U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [6U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [7U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [8U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [9U];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xaU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xbU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xcU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xdU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xeU];
    vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out
        [0xfU];
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__5(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v0;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v0;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v1;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v1;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v2;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v2;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v3;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v3;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v4;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v4;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v5;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v5;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v6;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v6;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v7;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v7;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v8;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v8;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v9;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v9;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v10;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v10;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v11;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v11;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v12;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v12;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v13;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v13;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v14;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v14;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v15;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v15;
    IData/*16:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v16;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v16;
    CData/*4:0*/ __Vdlyvdim0__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17;
    IData/*31:0*/ __Vdlyvval__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17;
    // Body
    vlSelf->gpu__DOT__start_execution = vlSelf->__Vdly__gpu__DOT__start_execution;
    if (((IData)(vlSelf->gpu__DOT__start_execution) 
         ^ (IData)(vlSelf->gpu__DOT____Vtogcov__start_execution))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->gpu__DOT____Vtogcov__start_execution 
            = vlSelf->gpu__DOT__start_execution;
    }
    if (vlSelf->reset) {
        vlSelf->gpu__DOT__kernel_config_reg[0U] = 0U;
        vlSelf->gpu__DOT__kernel_config_reg[1U] = 0U;
        vlSelf->gpu__DOT__kernel_config_reg[2U] = 0U;
        vlSelf->gpu__DOT__kernel_config_reg[3U] = 0U;
    } else {
        vlSelf->gpu__DOT__kernel_config_reg[1U] = (IData)(
                                                          (((QData)((IData)(
                                                                            (0x1ffffU 
                                                                             & vlSelf->base_data))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->num_blocks))));
        vlSelf->gpu__DOT__kernel_config_reg[2U] = (
                                                   (vlSelf->base_instr 
                                                    << 0x11U) 
                                                   | (IData)(
                                                             ((((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlSelf->base_data))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->num_blocks))) 
                                                              >> 0x20U)));
        vlSelf->gpu__DOT__kernel_config_reg[3U] = (1U 
                                                   & (vlSelf->base_instr 
                                                      >> 0xfU));
        vlSelf->gpu__DOT__kernel_config_reg[0U] = vlSelf->warps_per_block;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__state = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_valid = 0U;
        vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__burst_data_counter = 0U;
        vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v0 = 1U;
    } else {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
                         & (1U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state))))) {
            VL_WRITEF("where did [16] go: %1#\n",1,
                      (1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                             >> 0x10U)));
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0U];
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk8__DOT__i = 0x11U;
            vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                = (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                   | vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid);
            vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid;
            VL_WRITEF("Reg:          16\n");
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v0 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v0 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v0 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            VL_WRITEF("consumer_write_data[16]: %10#\n",
                      32,vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                      [0x10U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [1U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [1U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [1U];
            VL_WRITEF("consumer_write_address[16]: %6#\n",
                      17,vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                      [0x10U]);
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v1 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v1 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v1 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            VL_WRITEF("Reg:          16\n");
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((4U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [2U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [2U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [2U];
            VL_WRITEF("consumer_write_data[16]: %10#\n",
                      32,vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                      [0x10U]);
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v2 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v2 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v2 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            VL_WRITEF("consumer_write_address[16]: %6#\n",
                      17,vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                      [0x10U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((8U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [3U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [3U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [3U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v3 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v3 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v3 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [4U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [4U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [4U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v4 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v4 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v4 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [5U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [5U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [5U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v5 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v5 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v5 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [6U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [6U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [6U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v6 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v6 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v6 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [7U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [7U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [7U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v7 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v7 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v7 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [8U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [8U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [8U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v8 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v8 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v8 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [9U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [9U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [9U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v9 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v9 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v9 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xaU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xaU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xaU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v10 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v10 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v10 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xbU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xbU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xbU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v11 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v11 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v11 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xcU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xcU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xcU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v12 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v12 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v12 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xdU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xdU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xdU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v13 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v13 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v13 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xeU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xeU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xeU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v14 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v14 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v14 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0xfU] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0xfU]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0xfU];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v15 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v15 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v15 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 
                = ((0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address
                   [0x10U] : vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address
                   [0x10U]);
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 
                = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data
                [0x10U];
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v16 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0;
            vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v16 = 1U;
            __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v16 
                = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0;
        }
        if ((((7U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
              & (IData)(vlSelf->data_mem_write_ready)) 
             | ((5U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
                & (IData)(vlSelf->data_mem_read_ready)))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i = 0U;
            while ((vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i 
                    < (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count))) {
                vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h1203c449__0 = 0U;
                if (VL_LIKELY((0x10U >= (0x1fU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                  + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i))))) {
                    vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                   + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i)))) 
                            & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid) 
                           | (0x1ffffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h1203c449__0) 
                                          << (0x1fU 
                                              & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                 + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i)))));
                }
                ++(vlSymsp->__Vcoverage[1128]);
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i);
            }
        }
        if (VL_UNLIKELY(((5U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
                         & (IData)(vlSelf->data_mem_read_ready)))) {
            VL_WRITEF("m_axi_rdata: %10#\nburst_start_idx: %2#\nburst_data_counter: %3#\nburst_start_idx + burst_data_counter:%3#\n",
                      32,vlSelf->data_mem_read_data
                      [0U],5,vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx,
                      8,(IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter),
                      8,(0xffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                  + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter))));
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h69bde666__0 
                = vlSelf->data_mem_read_data[0U];
            vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd5da0e8d__0 = 1U;
            if ((0x10U >= (0x1fU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                    + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter))))) {
                __Vdlyvval__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17 
                    = vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h69bde666__0;
                vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17 = 1U;
                __Vdlyvdim0__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17 
                    = (0x1fU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
                vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                             + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter))))) 
                        & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready) 
                       | (0x1ffffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd5da0e8d__0) 
                                      << (0x1fU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                   + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter))))));
            }
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i = 0U;
            while ((vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i 
                    < (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count))) {
                vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h5df04a3d__0 = 1U;
                if (VL_LIKELY((0x10U >= (0x1fU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                  + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i))))) {
                    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                   + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i)))) 
                            & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready) 
                           | (0x1ffffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h5df04a3d__0) 
                                          << (0x1fU 
                                              & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                 + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i)))));
                }
                ++(vlSymsp->__Vcoverage[1131]);
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i 
                    = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i);
            }
        }
        if (((0U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)) 
             | (2U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)))) {
            vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__burst_data_counter = 0U;
        } else if ((((6U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
                     & (IData)(vlSelf->data_mem_write_ready)) 
                    | ((5U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
                       & (IData)(vlSelf->data_mem_read_ready)))) {
            vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__burst_data_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
        }
        vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__state 
            = vlSelf->gpu__DOT__mcu_inst__DOT__next_state;
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__state = vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__state;
    vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter 
        = vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__burst_data_counter;
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v0;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v0;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v1) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[1U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v1;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[1U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v1;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v2) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[2U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v2;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[2U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v2;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v3) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[3U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v3;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[3U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v3;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v4) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[4U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v4;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[4U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v4;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v5) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[5U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v5;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[5U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v5;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v6) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[6U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v6;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[6U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v6;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v7) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[7U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v7;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[7U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v7;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v8) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[8U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v8;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[8U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v8;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v9) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[9U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v9;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[9U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v9;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v10) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xaU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v10;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xaU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v10;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v11) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xbU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v11;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xbU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v11;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v12) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xcU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v12;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xcU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v12;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v13) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xdU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v13;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xdU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v13;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v14) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xeU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v14;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xeU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v14;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v15) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0xfU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v15;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0xfU] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v15;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v16) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0x10U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_wdata__v16;
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0x10U] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__req_addr__v16;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[1U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[2U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[3U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[4U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[5U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[6U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[7U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[8U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[9U] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xaU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xbU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xcU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xdU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xeU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0xfU] = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17] 
            = __Vdlyvval__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17;
    }
    if ((1U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffffeU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (1U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 1U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffffdU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (2U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 2U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffffbU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (4U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 3U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffff7U & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (8U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 4U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffffefU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x10U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 5U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 5U)))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffffdfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x20U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 6U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 6U)))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffffbfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x40U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 7U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 7U)))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffff7fU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x80U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 8U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 8U)))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffeffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x100U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 9U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                          >> 9U)))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffdffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x200U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xaU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffffbffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x400U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xbU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x800U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xcU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffefffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x1000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xdU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffdfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x2000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xeU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffffbfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x4000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0xfU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                            >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffff7fffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x8000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x10U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffeffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x10000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x11U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffdffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x20000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x12U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfffbffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x40000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x13U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x80000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x14U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffefffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x100000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x15U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffdfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x200000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x16U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xffbfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x400000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x17U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xff7fffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x800000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x18U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfeffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x1000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x19U) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfdffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x2000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x1aU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xfbffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x4000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x1bU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x8000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x1cU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xefffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x10000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x1dU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xdfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x20000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[1U] 
                >> 0x1eU) ^ (vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
                             >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0xbfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x40000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if (((vlSelf->gpu__DOT__kernel_config_reg[1U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks 
            = ((0x7fffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks) 
               | (0x80000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (1U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 1U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (2U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 2U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (4U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 3U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (8U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 4U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x10U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 5U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x20U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 6U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x40U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 7U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x80U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 8U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x100U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 9U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                          >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x200U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xaU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x400U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xbU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x800U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xcU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x1000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xdU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x2000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xeU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x4000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0xfU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                            >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x8000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x10U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x10000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x11U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x20000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x12U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x40000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x13U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x80000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x14U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x100000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x15U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x200000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x16U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x400000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x17U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x800000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x18U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x1000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x19U) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x2000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x1aU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x4000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x1bU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x8000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x1cU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x10000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x1dU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x20000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & ((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                >> 0x1eU) ^ (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
                             >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x40000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if (((vlSelf->gpu__DOT__kernel_config_reg[0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps) 
               | (0x80000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x20000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x40000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x80000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x100000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x200000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x400000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x800000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x1000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x2000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x4000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x8000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x10000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x20000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x40000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if (((vlSelf->gpu__DOT__kernel_config_reg[2U] ^ 
          vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x80000000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((vlSelf->gpu__DOT__kernel_config_reg[3U] ^ 
         vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[3U])) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[3U] 
            = (1U & vlSelf->gpu__DOT__kernel_config_reg[3U]);
    }
    if ((1U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (1U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((2U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (2U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((4U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (4U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((8U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (8U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x10U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x20U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x40U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x80U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x100U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x200U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x400U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x800U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x1000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x2000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x4000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x8000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__kernel_config_reg[2U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[2U]) 
               | (0x10000U & vlSelf->gpu__DOT__kernel_config_reg[2U]));
    }
    if ((1U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (1U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((2U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (2U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((4U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (4U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((8U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (8U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x10U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x20U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x40U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x80U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x100U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x200U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x400U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x800U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x1000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x2000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x4000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x8000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x10000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x20000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x40000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x80000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x100000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x200000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x400000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x800000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x1000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x2000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x4000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x8000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x10000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x20000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__kernel_config_reg[1U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x40000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if (((vlSelf->gpu__DOT__kernel_config_reg[1U] ^ 
          vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[1U]) 
               | (0x80000000U & vlSelf->gpu__DOT__kernel_config_reg[1U]));
    }
    if ((1U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (1U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (2U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (4U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (8U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x10U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x20U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x40U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x80U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x100U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x200U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x400U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x800U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x1000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x2000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x4000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x8000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x10000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x20000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x40000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x80000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x100000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x200000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x400000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x800000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x1000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x2000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x4000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x8000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x10000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x20000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__kernel_config_reg[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x40000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if (((vlSelf->gpu__DOT__kernel_config_reg[0U] ^ 
          vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__kernel_config_reg[0U]) 
               | (0x80000000U & vlSelf->gpu__DOT__kernel_config_reg[0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready));
    }
    if (((0U != (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__mcu_is_busy))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__mcu_is_busy 
            = (0U != (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state 
            = ((0xeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state 
            = ((0xdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state 
            = ((0xbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xfeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xfdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xfbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xf7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0xbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter 
            = ((0x7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0x10U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data
        [0x10U];
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__6(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0x10U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address
        [0x10U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0x10U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address
        [0x10U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0x10U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data
        [0x10U];
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
        = (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_valid) 
            << 0x10U) | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_valid) 
                          << 0xfU) | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_valid) 
                                       << 0xeU) | (
                                                   ((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_valid) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_valid) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_valid) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_valid) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_valid) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_valid) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_valid) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_valid) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_valid) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_valid) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_valid)))))))))))))))));
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
        = (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_read_valid) 
            << 0x10U) | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_read_valid) 
                          << 0xfU) | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_read_valid) 
                                       << 0xeU) | (
                                                   ((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_read_valid) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_read_valid) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_read_valid) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_read_valid) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_read_valid) 
                                                                << 9U) 
                                                               | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_read_valid) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_read_valid) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_read_valid) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_read_valid) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_read_valid) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_read_valid) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_read_valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_read_valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_read_valid)))))))))))))))));
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid));
    }
}

VL_INLINE_OPT void Vdut___024root___nba_comb__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done = 1U;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i = 0U;
    {
        while ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i 
                < vlSelf->gpu__DOT__kernel_config_reg[0U])) {
            if ((8U != ((0U >= (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i))
                         ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                        [(1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i)]
                         : 0U))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done = 0U;
                goto __Vlabel20;
            } else {
                ++(vlSymsp->__Vcoverage[1822]);
            }
            ++(vlSymsp->__Vcoverage[1823]);
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel20: ;
    }
    ++(vlSymsp->__Vcoverage[1824]);
    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = vlSelf->gpu__DOT__mcu_inst__DOT__state;
    vlSelf->gpu__DOT__m_axi_awvalid = 0U;
    vlSelf->gpu__DOT__m_axi_arvalid = 0U;
    vlSelf->gpu__DOT__m_axi_wvalid = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awid = 0U;
    vlSelf->gpu__DOT__m_axi_awaddr = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arid = 0U;
    vlSelf->gpu__DOT__m_axi_araddr = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen = 0U;
    vlSelf->gpu__DOT__m_axi_wdata = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast = 0U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize = 2U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst = 1U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize = 2U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst = 1U;
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb = 0xfU;
    if (((((((((0U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
               | (1U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
              | (2U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
             | (3U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
            | (4U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
           | (6U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
          | (7U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) 
         | (5U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)))) {
        if ((0U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) {
            ++(vlSymsp->__Vcoverage[1087]);
            vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready = 0x1ffffU;
            if (VL_UNLIKELY(((0U != vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid) 
                             | (0U != vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid)))) {
                ++(vlSymsp->__Vcoverage[1085]);
                VL_WRITEF("MCU: IDLE -> BUFFER_REQS\n");
                vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1086]);
            }
        } else if (VL_UNLIKELY((1U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)))) {
            VL_WRITEF("MCU: BUFFER_REQS -> PROCESS_SCALAR\n");
            ++(vlSymsp->__Vcoverage[1088]);
            vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 2U;
        } else if ((2U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) {
            ++(vlSymsp->__Vcoverage[1092]);
            if (VL_UNLIKELY((0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid))) {
                VL_WRITEF("MCU: PROCESS_SCALAR -> ISSUE_ADDR_CMD\n");
                ++(vlSymsp->__Vcoverage[1091]);
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0x10U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 4U;
            } else if ((0U != (0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid))) {
                VL_WRITEF("are we crashing out chat\nMCU: PROCESS_SCALAR -> COALESCE_PLAN\n");
                ++(vlSymsp->__Vcoverage[1089]);
                vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 3U;
            } else {
                VL_WRITEF("MCU: PROCESS_SCALAR -> IDLE\n");
                ++(vlSymsp->__Vcoverage[1090]);
                vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 0U;
            }
        } else if (VL_UNLIKELY((3U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 0U;
            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count = 1U;
            if ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__req_valid)) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0U] + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel21;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel21: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 1U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [1U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(1U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel22;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel22: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 2U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 2U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [2U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(2U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel23;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel23: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 3U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 3U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [3U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(3U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel24;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel24: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 4U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 4U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 5U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [4U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(4U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel25;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel25: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 5U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 5U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 6U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [5U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(5U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel26;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel26: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 6U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 6U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 7U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [6U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(6U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel27;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel27: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 7U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 7U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 8U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [7U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(7U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel28;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel28: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 8U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 8U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 9U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [8U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(8U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel29;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel29: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 9U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 9U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xaU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [9U] + 
                                            (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                             - (IData)(9U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel30;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel30: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xaU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xaU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xbU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xaU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xaU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel31;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel31: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xbU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xbU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xcU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xbU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xbU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel32;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel32: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xcU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xcU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xdU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xcU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xcU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel33;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel33: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xdU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xdU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xeU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xdU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xdU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel34;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel34: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xeU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xeU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0xfU;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xeU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xeU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel35;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel35: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                        >> 0xfU) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0xfU;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0xfU] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0xfU)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel36;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel36: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            if ((IData)(((vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                          >> 0x10U) & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst))))) {
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = 0x10U;
                vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x11U;
                {
                    while (VL_GTES_III(32, 0x10U, vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) {
                        if ((((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)) 
                              & (vlSelf->gpu__DOT__mcu_inst__DOT__req_valid 
                                 >> (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))) 
                             & (((0x10U >= (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j))
                                  ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                 [(0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j)]
                                  : 0U) == (vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                            [0x10U] 
                                            + (vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                                               - (IData)(0x10U)))))) {
                            vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
                            ++(vlSymsp->__Vcoverage[1093]);
                        } else {
                            goto __Vlabel37;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel37: ;
                }
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            ++(vlSymsp->__Vcoverage[1098]);
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0x11U;
            VL_WRITEF("MCU: COALESCE_PLAN -> ISSUE_ADDR_CMD\n");
            vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 4U;
            ++(vlSymsp->__Vcoverage[1099]);
        } else if ((4U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk5__DOT__byte_addr 
                = (0x1ffffU & (((0x10U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx))
                                 ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                [vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx]
                                 : 0U) << 2U));
            if (((0x10U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)) 
                 & (vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write 
                    >> (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)))) {
                vlSelf->gpu__DOT__m_axi_awvalid = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen 
                    = (0xffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                                - (IData)(1U)));
                vlSelf->gpu__DOT__m_axi_awaddr = vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk5__DOT__byte_addr;
                if (VL_UNLIKELY(vlSelf->data_mem_write_ready)) {
                    VL_WRITEF("MCU: ISSUE_ADDR_CMD -> WRITE_DATA_BURST\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 6U;
                    ++(vlSymsp->__Vcoverage[1100]);
                } else {
                    ++(vlSymsp->__Vcoverage[1101]);
                }
                ++(vlSymsp->__Vcoverage[1104]);
            } else {
                vlSelf->gpu__DOT__m_axi_arvalid = 1U;
                vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen 
                    = (0xffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                                - (IData)(1U)));
                vlSelf->gpu__DOT__m_axi_araddr = vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk5__DOT__byte_addr;
                if (VL_UNLIKELY(vlSelf->data_mem_read_ready)) {
                    VL_WRITEF("MCU: ISSUE_ADDR_CMD -> READ_DATA_BURST\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 5U;
                    ++(vlSymsp->__Vcoverage[1102]);
                } else {
                    ++(vlSymsp->__Vcoverage[1103]);
                }
                ++(vlSymsp->__Vcoverage[1105]);
            }
            ++(vlSymsp->__Vcoverage[1106]);
        } else if (VL_UNLIKELY((6U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk6__DOT__byte_addr 
                = (0x1ffffU & (((0x10U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx))
                                 ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                [vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx]
                                 : 0U) << 2U));
            VL_WRITEF("m_axi_awaddr: %10#\nburst_start_idx write: %2#\n",
                      32,vlSelf->gpu__DOT__m_axi_awaddr,
                      5,(IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx));
            vlSelf->gpu__DOT__m_axi_awaddr = vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk6__DOT__byte_addr;
            vlSelf->gpu__DOT__m_axi_wvalid = 1U;
            vlSelf->gpu__DOT__m_axi_wdata = ((0x10U 
                                              >= (0x1fU 
                                                  & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                     + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter))))
                                              ? vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata
                                             [(0x1fU 
                                               & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                                                  + (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter)))]
                                              : 0U);
            vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast 
                = ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter) 
                   == ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                       - (IData)(1U)));
            if (vlSelf->data_mem_write_ready) {
                if (VL_UNLIKELY(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast)) {
                    VL_WRITEF("MCU: WRITE_DATA_BURST -> WAIT_WRITE_RESP\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 7U;
                    ++(vlSymsp->__Vcoverage[1107]);
                } else {
                    ++(vlSymsp->__Vcoverage[1108]);
                }
                ++(vlSymsp->__Vcoverage[1109]);
            } else {
                ++(vlSymsp->__Vcoverage[1110]);
            }
            ++(vlSymsp->__Vcoverage[1111]);
        } else if (VL_LIKELY((7U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)))) {
            vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready = 1U;
            if (vlSelf->data_mem_write_ready) {
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__len_count 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__current_req_valid 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__req_valid;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__temp_valid 
                    = vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__current_req_valid;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i = 0U;
                while ((vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i 
                        < (IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__len_count))) {
                    if ((0x10U >= ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx) 
                                   + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i))) {
                        vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_had8f599f__0 = 0U;
                        if (VL_LIKELY((0x10U >= (0x1fU 
                                                 & ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx) 
                                                    + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i))))) {
                            vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__temp_valid 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx) 
                                             + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i)))) 
                                    & vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__temp_valid) 
                                   | (0x1ffffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_had8f599f__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx) 
                                                      + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i)))));
                        }
                        ++(vlSymsp->__Vcoverage[1018]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1019]);
                    }
                    ++(vlSymsp->__Vcoverage[1020]);
                    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i);
                }
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__Vfuncout 
                    = (0U != vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__temp_valid);
                ++(vlSymsp->__Vcoverage[1021]);
                if (vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__Vfuncout) {
                    VL_WRITEF("MCU: WAIT_WRITE_RESP -> PROCESS_SCALAR\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 2U;
                    ++(vlSymsp->__Vcoverage[1112]);
                } else {
                    VL_WRITEF("MCU: WAIT_WRITE_RESP -> IDLE\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 0U;
                    ++(vlSymsp->__Vcoverage[1113]);
                }
                ++(vlSymsp->__Vcoverage[1114]);
            } else {
                ++(vlSymsp->__Vcoverage[1115]);
            }
            ++(vlSymsp->__Vcoverage[1116]);
        } else {
            vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk7__DOT__byte_addr 
                = (0x1ffffU & (((0x10U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx))
                                 ? vlSelf->gpu__DOT__mcu_inst__DOT__req_addr
                                [vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx]
                                 : 0U) << 2U));
            vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready = 1U;
            VL_WRITEF("m_axi_araddr: %10#\nm_axi_rvalid: %1#\n",
                      32,vlSelf->gpu__DOT__m_axi_araddr,
                      1,(IData)(vlSelf->data_mem_read_ready));
            if (VL_UNLIKELY(vlSelf->data_mem_read_ready)) {
                VL_WRITEF("m_axi_rlast: 1\n");
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__len_count 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__current_req_valid 
                    = vlSelf->gpu__DOT__mcu_inst__DOT__req_valid;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__temp_valid 
                    = vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__current_req_valid;
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i = 0U;
                while ((vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i 
                        < (IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__len_count))) {
                    if ((0x10U >= ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx) 
                                   + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i))) {
                        vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_had8f599f__0 = 0U;
                        if (VL_LIKELY((0x10U >= (0x1fU 
                                                 & ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx) 
                                                    + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i))))) {
                            vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__temp_valid 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx) 
                                             + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i)))) 
                                    & vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__temp_valid) 
                                   | (0x1ffffU & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_had8f599f__0) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx) 
                                                      + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i)))));
                        }
                        ++(vlSymsp->__Vcoverage[1018]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1019]);
                    }
                    ++(vlSymsp->__Vcoverage[1020]);
                    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i);
                }
                vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__Vfuncout 
                    = (0U != vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__temp_valid);
                ++(vlSymsp->__Vcoverage[1021]);
                if (vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__Vfuncout) {
                    VL_WRITEF("MCU: READ_DATA_BURST -> PROCESS_SCALAR\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 2U;
                    ++(vlSymsp->__Vcoverage[1117]);
                } else {
                    VL_WRITEF("MCU: READ_DATA_BURST -> IDLE\n");
                    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = 0U;
                    ++(vlSymsp->__Vcoverage[1118]);
                }
                ++(vlSymsp->__Vcoverage[1119]);
                ++(vlSymsp->__Vcoverage[1121]);
            } else {
                ++(vlSymsp->__Vcoverage[1122]);
            }
            ++(vlSymsp->__Vcoverage[1123]);
        }
    }
    ++(vlSymsp->__Vcoverage[1124]);
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__all_warps_done))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__all_warps_done 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done;
    }
    if (((IData)(vlSelf->gpu__DOT__m_axi_awvalid) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__m_axi_awvalid))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awvalid 
            = vlSelf->gpu__DOT__m_axi_awvalid;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bready))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bready 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rready))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rready 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready;
    }
    if (vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awid) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awid 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awid;
    }
    if (vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arid) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arid 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arid;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wlast))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wlast 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast;
    }
    if ((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst)));
    }
    if ((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst)))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst)))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst)));
    }
    if (((IData)(vlSelf->gpu__DOT__m_axi_arvalid) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__m_axi_arvalid))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_arvalid 
            = vlSelf->gpu__DOT__m_axi_arvalid;
    }
    vlSelf->data_mem_read_valid = vlSelf->gpu__DOT__m_axi_arvalid;
    if (((IData)(vlSelf->gpu__DOT__m_axi_wvalid) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__m_axi_wvalid))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wvalid = vlSelf->gpu__DOT__m_axi_wvalid;
    }
    vlSelf->data_mem_write_valid = vlSelf->gpu__DOT__m_axi_wvalid;
    if ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize 
            = ((6U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize 
            = ((5U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize 
            = ((3U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize)));
    }
    if ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize 
            = ((6U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize)))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize 
            = ((5U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize)))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize 
            = ((3U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state 
            = ((0xeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state 
            = ((0xdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state 
            = ((0xbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__next_state)));
    }
    if ((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb 
            = ((0xeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb 
            = ((0xdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb 
            = ((0xbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xfeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xfdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xfbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xf7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0xbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen 
            = ((0x7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xfeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xfdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xfbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xf7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0xbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen 
            = ((0x7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xfeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xfdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xfbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xf7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0xbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count 
            = ((0x7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count)));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1ffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1ffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1ffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1ff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1feffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1fbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1f7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1efffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1dfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x1bfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0x17fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready 
            = ((0xffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready));
    }
    if ((1U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (1U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((2U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (2U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((4U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (4U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((8U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (8U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x10U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x10U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x20U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x20U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x40U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x40U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x80U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x80U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x100U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x100U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x200U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x200U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x400U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x400U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x800U & (vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x800U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x1000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x2000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x4000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x8000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x10000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x20000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x40000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x80000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x100000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x200000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x400000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x800000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x1000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x2000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x4000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x8000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x10000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x20000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__m_axi_awaddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x40000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    if (((vlSelf->gpu__DOT__m_axi_awaddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = 
            ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr) 
             | (0x80000000U & vlSelf->gpu__DOT__m_axi_awaddr));
    }
    vlSelf->data_mem_write_address[0U] = (0x1ffffU 
                                          & vlSelf->gpu__DOT__m_axi_awaddr);
    if ((1U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (1U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((2U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (2U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((4U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (4U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((8U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (8U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x10U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x10U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x20U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x20U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x40U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x40U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x80U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x80U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x100U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x100U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x200U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x200U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x400U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x400U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x800U & (vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x800U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__m_axi_araddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x1000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__m_axi_araddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x2000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__m_axi_araddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x4000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__m_axi_araddr 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x8000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__m_axi_araddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x10000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__m_axi_araddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x20000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__m_axi_araddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x40000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__m_axi_araddr 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x80000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__m_axi_araddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x100000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__m_axi_araddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x200000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__m_axi_araddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x400000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__m_axi_araddr 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x800000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x1000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x2000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x4000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x8000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x10000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x20000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__m_axi_araddr 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x40000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    if (((vlSelf->gpu__DOT__m_axi_araddr ^ vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = 
            ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_araddr) 
             | (0x80000000U & vlSelf->gpu__DOT__m_axi_araddr));
    }
    vlSelf->data_mem_read_address[0U] = (0x1ffffU & vlSelf->gpu__DOT__m_axi_araddr);
    if ((1U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (1U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((2U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (2U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((4U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (4U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((8U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (8U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x10U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x10U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x20U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x20U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x40U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x40U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x80U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x80U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x100U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x100U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x200U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x200U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x400U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x400U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x800U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x800U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x1000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x2000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x4000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x8000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__m_axi_wdata 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x10000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__m_axi_wdata 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x20000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__m_axi_wdata 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x40000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__m_axi_wdata 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x80000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__m_axi_wdata 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x100000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__m_axi_wdata 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x200000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__m_axi_wdata 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x400000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__m_axi_wdata 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x800000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x1000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x2000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x4000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x8000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x10000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x20000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__m_axi_wdata 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x40000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    if (((vlSelf->gpu__DOT__m_axi_wdata ^ vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = 
            ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_wdata) 
             | (0x80000000U & vlSelf->gpu__DOT__m_axi_wdata));
    }
    vlSelf->data_mem_write_data[0U] = vlSelf->gpu__DOT__m_axi_wdata;
    if (((IData)(vlSelf->data_mem_read_valid) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__data_mem_read_valid))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_valid 
            = vlSelf->data_mem_read_valid;
    }
    if (((IData)(vlSelf->data_mem_write_valid) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__data_mem_write_valid))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_valid 
            = vlSelf->data_mem_write_valid;
    }
    if ((1U & (vlSelf->data_mem_write_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (1U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((2U & (vlSelf->data_mem_write_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (2U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((4U & (vlSelf->data_mem_write_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (4U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((8U & (vlSelf->data_mem_write_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (8U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->data_mem_write_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x10U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x20U & (vlSelf->data_mem_write_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x20U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x40U & (vlSelf->data_mem_write_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x40U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x80U & (vlSelf->data_mem_write_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x80U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x100U & (vlSelf->data_mem_write_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x100U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x200U & (vlSelf->data_mem_write_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x200U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x400U & (vlSelf->data_mem_write_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x400U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x800U & (vlSelf->data_mem_write_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x800U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x1000U & (vlSelf->data_mem_write_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x1000U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x2000U & (vlSelf->data_mem_write_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x2000U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x4000U & (vlSelf->data_mem_write_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x4000U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x8000U & (vlSelf->data_mem_write_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x8000U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0x10000U & (vlSelf->data_mem_write_address
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[0U] 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_address
                [0U]) | (0x10000U & vlSelf->data_mem_write_address
                         [0U]));
    }
    if ((0U == vlSelf->data_mem_read_address[0U])) {
        ++(vlSymsp->__Vcoverage[420]);
    }
    if ((0U != vlSelf->data_mem_read_address[0U])) {
        ++(vlSymsp->__Vcoverage[418]);
        ++(vlSymsp->__Vcoverage[419]);
    }
    if (VL_UNLIKELY((0U != vlSelf->data_mem_read_address
                     [0U]))) {
        VL_WRITEF("data_mem_read_data[0]: %10#          0\n",
                  32,vlSelf->data_mem_read_data[0U]);
        vlSelf->gpu__DOT__unnamedblk1__DOT__i = 1U;
    }
    if ((1U & (vlSelf->data_mem_read_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (1U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((2U & (vlSelf->data_mem_read_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (2U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((4U & (vlSelf->data_mem_read_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (4U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((8U & (vlSelf->data_mem_read_address[0U] ^ 
               vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (8U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->data_mem_read_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x10U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x20U & (vlSelf->data_mem_read_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x20U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x40U & (vlSelf->data_mem_read_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x40U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x80U & (vlSelf->data_mem_read_address[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x80U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x100U & (vlSelf->data_mem_read_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x100U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x200U & (vlSelf->data_mem_read_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x200U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x400U & (vlSelf->data_mem_read_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x400U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x800U & (vlSelf->data_mem_read_address[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x800U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x1000U & (vlSelf->data_mem_read_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x1000U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x2000U & (vlSelf->data_mem_read_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x2000U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x4000U & (vlSelf->data_mem_read_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x4000U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x8000U & (vlSelf->data_mem_read_address[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x8000U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((0x10000U & (vlSelf->data_mem_read_address[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[0U] 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_address
                [0U]) | (0x10000U & vlSelf->data_mem_read_address
                         [0U]));
    }
    if ((1U & (vlSelf->data_mem_write_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (1U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((2U & (vlSelf->data_mem_write_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (2U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((4U & (vlSelf->data_mem_write_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (4U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((8U & (vlSelf->data_mem_write_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (8U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x10U & (vlSelf->data_mem_write_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x10U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x20U & (vlSelf->data_mem_write_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x20U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x40U & (vlSelf->data_mem_write_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x40U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x80U & (vlSelf->data_mem_write_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x80U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x100U & (vlSelf->data_mem_write_data[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x100U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x200U & (vlSelf->data_mem_write_data[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x200U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x400U & (vlSelf->data_mem_write_data[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x400U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x800U & (vlSelf->data_mem_write_data[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x800U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x1000U & (vlSelf->data_mem_write_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x1000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x2000U & (vlSelf->data_mem_write_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x2000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x4000U & (vlSelf->data_mem_write_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x4000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x8000U & (vlSelf->data_mem_write_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x8000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x10000U & (vlSelf->data_mem_write_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x10000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x20000U & (vlSelf->data_mem_write_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x20000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x40000U & (vlSelf->data_mem_write_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x40000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x80000U & (vlSelf->data_mem_write_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x80000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x100000U & (vlSelf->data_mem_write_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x100000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x200000U & (vlSelf->data_mem_write_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x200000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x400000U & (vlSelf->data_mem_write_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x400000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x800000U & (vlSelf->data_mem_write_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x800000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->data_mem_write_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x1000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->data_mem_write_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x2000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->data_mem_write_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x4000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->data_mem_write_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x8000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->data_mem_write_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x10000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->data_mem_write_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x20000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->data_mem_write_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x40000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
    if (((vlSelf->data_mem_write_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_write_data
                [0U]) | (0x80000000U & vlSelf->data_mem_write_data
                         [0U]));
    }
}
