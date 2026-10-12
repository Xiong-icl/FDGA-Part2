// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_alu.h"

VL_ATTR_COLD void Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2428]);
}

VL_ATTR_COLD void Vdut_alu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0(Vdut_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffeU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffdU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfffbU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
               ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfff7U & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffefU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffdfU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x20U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xffbfU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x40U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                  ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xff7fU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x80U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfeffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x100U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfdffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x200U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xfbffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x400U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                   ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xf7ffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x800U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xefffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x1000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xdfffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x2000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0xbfffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x4000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc) 
                    ^ (IData)(vlSelf->__Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__pc = ((0x7fffU & (IData)(vlSelf->__Vtogcov__pc)) 
                                 | (0x8000U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc)));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffeU & vlSelf->__Vtogcov__IMM) 
                                  | (1U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffdU & vlSelf->__Vtogcov__IMM) 
                                  | (2U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffffbU & vlSelf->__Vtogcov__IMM) 
                                  | (4U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
               ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffff7U & vlSelf->__Vtogcov__IMM) 
                                  | (8U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffefU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffdfU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffffbfU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                  ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffff7fU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffeffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x100U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffdffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x200U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffffbffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x400U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                   ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffff7ffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x800U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffefffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x1000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffdfffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x2000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffffbfffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x4000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                    ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffff7fffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x8000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffeffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffdffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfffbffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                     ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfff7ffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffefffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x100000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffdfffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x200000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xffbfffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x400000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                      ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xff7fffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x800000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfeffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x1000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfdffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x2000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xfbffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x4000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                       ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xf7ffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x8000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xefffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x10000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xdfffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x20000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                        ^ vlSelf->__Vtogcov__IMM))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0xbfffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x40000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
          ^ vlSelf->__Vtogcov__IMM) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__IMM = ((0x7fffffffU & vlSelf->__Vtogcov__IMM) 
                                  | (0x80000000U & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2421]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2422]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2420]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2419]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2413]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2417]);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2414]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2418]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2416]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2415]);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2412]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2411]);
                    }
                }
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2409]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2410]);
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                      >> 3U)))) {
            ++(vlSymsp->__Vcoverage[2427]);
        }
        if ((8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2425]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2423]);
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2426]);
                    }
                }
            }
            if ((4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))) {
                        ++(vlSymsp->__Vcoverage[2424]);
                    }
                    if ((1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                        ++(vlSymsp->__Vcoverage[2427]);
                    }
                }
                if ((2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))) {
                    ++(vlSymsp->__Vcoverage[2427]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1eU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (1U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1dU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (2U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x1bU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (4U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
               ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0x17U & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (8U & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction) 
                  ^ (IData)(vlSelf->__Vtogcov__instruction)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__instruction = ((0xfU & (IData)(vlSelf->__Vtogcov__instruction)) 
                                          | (0x10U 
                                             & (IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)));
    }
}

VL_ATTR_COLD void Vdut_alu___configure_coverage(Vdut_alu* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_alu___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 7, 40, "", "v_toggle/alu", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 8, 31, "", "v_toggle/alu", "instruction[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 8, 31, "", "v_toggle/alu", "instruction[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 8, 31, "", "v_toggle/alu", "instruction[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 8, 31, "", "v_toggle/alu", "instruction[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 8, 31, "", "v_toggle/alu", "instruction[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1655]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1656]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1657]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1658]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1659]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1660]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1661]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1662]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1663]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1664]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1665]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1666]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1667]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1668]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1669]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1670]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1671]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1672]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1673]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1674]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1675]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1676]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1677]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1678]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1680]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1681]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1682]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1683]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1684]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1685]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1686]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 9, 20, "", "v_toggle/alu", "ALUop1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1687]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1688]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1689]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1690]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1691]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1692]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1693]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1694]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1695]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1696]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1697]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1698]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1699]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1700]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1701]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1702]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1703]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1704]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1705]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1706]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1707]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1708]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1709]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1710]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1711]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1712]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1713]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1714]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1715]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1716]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1717]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1718]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 10, 20, "", "v_toggle/alu", "ALUop2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 11, 20, "", "v_toggle/alu", "IMM[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1873]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1874]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1875]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1876]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1877]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1878]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1879]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1880]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1881]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1882]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1883]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1884]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1885]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1886]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1887]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1888]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1889]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1890]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1891]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1892]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1893]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1894]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1895]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1896]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1897]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1898]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1899]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1900]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1901]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1902]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1903]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1904]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 12, 20, "", "v_toggle/alu", "Result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2409]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 21, 16, "", "v_line/alu", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2410]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 22, 16, "", "v_line/alu", "case", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2411]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 23, 16, "", "v_line/alu", "case", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2412]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 24, 16, "", "v_line/alu", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2413]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 25, 16, "", "v_line/alu", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2414]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 26, 16, "", "v_line/alu", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2415]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 27, 16, "", "v_line/alu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2416]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 28, 17, "", "v_line/alu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2417]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 29, 16, "", "v_line/alu", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2418]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 31, 16, "", "v_line/alu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2419]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 34, 17, "", "v_line/alu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2420]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 35, 17, "", "v_line/alu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2421]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 36, 17, "", "v_line/alu", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2422]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 37, 17, "", "v_line/alu", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2423]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 38, 17, "", "v_line/alu", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2424]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 41, 17, "", "v_line/alu", "case", "41-42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2425]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 45, 17, "", "v_line/alu", "case", "45,47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2426]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 49, 16, "", "v_line/alu", "case", "49,51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2427]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 53, 13, "", "v_line/alu", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2428]), first, "/root/FDGA-1/rtl/lock_in/alu.sv", 18, 5, "", "v_line/alu", "block", "18-19");
}
