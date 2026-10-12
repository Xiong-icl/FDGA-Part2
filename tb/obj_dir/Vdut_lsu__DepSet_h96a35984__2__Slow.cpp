// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_lsu.h"

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__0\n"); );
    // Body
    if (((IData)(vlSelf->mem_read_valid) ^ (IData)(vlSelf->__Vtogcov__mem_read_valid))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->__Vtogcov__mem_read_valid = vlSelf->mem_read_valid;
    }
    if (((IData)(vlSelf->mem_write_valid) ^ (IData)(vlSelf->__Vtogcov__mem_write_valid))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->__Vtogcov__mem_write_valid = vlSelf->mem_write_valid;
    }
    if ((1U & ((IData)(vlSelf->lsu_state) ^ (IData)(vlSelf->__Vtogcov__lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->__Vtogcov__lsu_state = ((2U & (IData)(vlSelf->__Vtogcov__lsu_state)) 
                                        | (1U & (IData)(vlSelf->lsu_state)));
    }
    if ((2U & ((IData)(vlSelf->lsu_state) ^ (IData)(vlSelf->__Vtogcov__lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->__Vtogcov__lsu_state = ((1U & (IData)(vlSelf->__Vtogcov__lsu_state)) 
                                        | (2U & (IData)(vlSelf->lsu_state)));
    }
    if ((1U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffeU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (1U 
                                                  & vlSelf->mem_read_address));
    }
    if ((2U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffdU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (2U 
                                                  & vlSelf->mem_read_address));
    }
    if ((4U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffbU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (4U 
                                                  & vlSelf->mem_read_address));
    }
    if ((8U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fff7U 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (8U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x10U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffefU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x10U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x20U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffdfU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x20U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x40U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffbfU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x40U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x80U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ff7fU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x80U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x100U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1feffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x100U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x200U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fdffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x200U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x400U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fbffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x400U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x800U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1f7ffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x800U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x1000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1efffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x1000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x2000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1dfffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x2000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x4000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1bfffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x4000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x8000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->__Vtogcov__mem_read_address = ((0x17fffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x8000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x10000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->__Vtogcov__mem_read_address = ((0xffffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x10000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((1U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffeU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (1U 
                                                   & vlSelf->mem_write_address));
    }
    if ((2U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffdU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (2U 
                                                   & vlSelf->mem_write_address));
    }
    if ((4U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffbU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (4U 
                                                   & vlSelf->mem_write_address));
    }
    if ((8U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fff7U 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (8U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x10U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffefU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x10U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x20U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffdfU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x20U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x40U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffbfU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x40U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x80U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ff7fU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x80U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x100U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1feffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x100U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x200U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fdffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x200U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x400U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fbffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x400U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x800U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1f7ffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x800U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x1000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1efffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x1000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x2000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1dfffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x2000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x4000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1bfffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x4000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x8000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->__Vtogcov__mem_write_address = ((0x17fffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x8000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x10000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->__Vtogcov__mem_write_address = ((0xffffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x10000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((1U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (1U 
                                                & vlSelf->mem_write_data));
    }
    if ((2U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (2U 
                                                & vlSelf->mem_write_data));
    }
    if ((4U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (4U 
                                                & vlSelf->mem_write_data));
    }
    if ((8U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (8U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x80U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x100U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x100U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x200U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x200U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x400U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x400U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x800U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x800U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x1000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x1000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x2000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x2000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x4000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x4000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x8000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x8000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x80000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x100000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x100000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x200000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x200000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x400000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x400000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x800000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->__Vtogcov__mem_write_data = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x800000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x1000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x1000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x2000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x2000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x4000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x4000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x8000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->__Vtogcov__mem_write_data = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x8000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->__Vtogcov__mem_write_data = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->__Vtogcov__mem_write_data = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->__Vtogcov__mem_write_data = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40000000U 
                                                & vlSelf->mem_write_data));
    }
    if (((vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->__Vtogcov__mem_write_data = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((1U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (1U & vlSelf->lsu_out));
    }
    if ((2U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (2U & vlSelf->lsu_out));
    }
    if ((4U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (4U & vlSelf->lsu_out));
    }
    if ((8U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (8U & vlSelf->lsu_out));
    }
    if ((0x10U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10U & vlSelf->lsu_out));
    }
    if ((0x20U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20U & vlSelf->lsu_out));
    }
    if ((0x40U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40U & vlSelf->lsu_out));
    }
    if ((0x80U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80U & vlSelf->lsu_out));
    }
    if ((0x100U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x100U & vlSelf->lsu_out));
    }
    if ((0x200U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x200U & vlSelf->lsu_out));
    }
    if ((0x400U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x400U & vlSelf->lsu_out));
    }
    if ((0x800U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x800U & vlSelf->lsu_out));
    }
    if ((0x1000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x1000U & vlSelf->lsu_out));
    }
    if ((0x2000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x2000U & vlSelf->lsu_out));
    }
    if ((0x4000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x4000U & vlSelf->lsu_out));
    }
    if ((0x8000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->__Vtogcov__lsu_out = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x8000U & vlSelf->lsu_out));
    }
    if ((0x10000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10000U & vlSelf->lsu_out));
    }
    if ((0x20000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20000U & vlSelf->lsu_out));
    }
    if ((0x40000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40000U & vlSelf->lsu_out));
    }
    if ((0x80000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->__Vtogcov__lsu_out = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80000U & vlSelf->lsu_out));
    }
    if ((0x100000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->__Vtogcov__lsu_out = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x100000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x200000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->__Vtogcov__lsu_out = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x200000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x400000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->__Vtogcov__lsu_out = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x400000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x800000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->__Vtogcov__lsu_out = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x800000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x1000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->__Vtogcov__lsu_out = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x1000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x2000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->__Vtogcov__lsu_out = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x2000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x4000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->__Vtogcov__lsu_out = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x4000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x8000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->__Vtogcov__lsu_out = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x8000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x10000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->__Vtogcov__lsu_out = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x20000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->__Vtogcov__lsu_out = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x40000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->__Vtogcov__lsu_out = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40000000U 
                                         & vlSelf->lsu_out));
    }
    if (((vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->__Vtogcov__lsu_out = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80000000U 
                                         & vlSelf->lsu_out));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xeU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [0xeU] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xeU]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop1);
    if ((1U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (1U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((2U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (2U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((4U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (4U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((8U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (8U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x80U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->__Vtogcov__offset_address = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x100U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x100U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x200U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x200U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x400U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x400U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x800U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->__Vtogcov__offset_address = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x800U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x1000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->__Vtogcov__offset_address = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x1000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x2000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->__Vtogcov__offset_address = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x2000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x4000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->__Vtogcov__offset_address = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x4000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x8000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->__Vtogcov__offset_address = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x8000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->__Vtogcov__offset_address = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->__Vtogcov__offset_address = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->__Vtogcov__offset_address = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x80000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->__Vtogcov__offset_address = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x100000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->__Vtogcov__offset_address = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x100000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x200000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->__Vtogcov__offset_address = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x200000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x400000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->__Vtogcov__offset_address = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x400000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x800000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->__Vtogcov__offset_address = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x800000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x1000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->__Vtogcov__offset_address = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x1000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x2000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->__Vtogcov__offset_address = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x2000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x4000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->__Vtogcov__offset_address = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x4000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x8000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->__Vtogcov__offset_address = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x8000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->__Vtogcov__offset_address = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->__Vtogcov__offset_address = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->__Vtogcov__offset_address = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if (((vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->__Vtogcov__offset_address = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80000000U 
                                                & vlSelf->__PVT__offset_address));
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__0\n"); );
    // Body
    if (((IData)(vlSelf->mem_read_valid) ^ (IData)(vlSelf->__Vtogcov__mem_read_valid))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->__Vtogcov__mem_read_valid = vlSelf->mem_read_valid;
    }
    if (((IData)(vlSelf->mem_write_valid) ^ (IData)(vlSelf->__Vtogcov__mem_write_valid))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->__Vtogcov__mem_write_valid = vlSelf->mem_write_valid;
    }
    if ((1U & ((IData)(vlSelf->lsu_state) ^ (IData)(vlSelf->__Vtogcov__lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->__Vtogcov__lsu_state = ((2U & (IData)(vlSelf->__Vtogcov__lsu_state)) 
                                        | (1U & (IData)(vlSelf->lsu_state)));
    }
    if ((2U & ((IData)(vlSelf->lsu_state) ^ (IData)(vlSelf->__Vtogcov__lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->__Vtogcov__lsu_state = ((1U & (IData)(vlSelf->__Vtogcov__lsu_state)) 
                                        | (2U & (IData)(vlSelf->lsu_state)));
    }
    if ((1U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffeU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (1U 
                                                  & vlSelf->mem_read_address));
    }
    if ((2U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffdU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (2U 
                                                  & vlSelf->mem_read_address));
    }
    if ((4U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fffbU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (4U 
                                                  & vlSelf->mem_read_address));
    }
    if ((8U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fff7U 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (8U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x10U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffefU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x10U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x20U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffdfU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x20U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x40U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ffbfU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x40U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x80U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1ff7fU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x80U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x100U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1feffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x100U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x200U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fdffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x200U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x400U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1fbffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x400U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x800U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1f7ffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x800U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x1000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1efffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x1000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x2000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1dfffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x2000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x4000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->__Vtogcov__mem_read_address = ((0x1bfffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x4000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x8000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->__Vtogcov__mem_read_address = ((0x17fffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x8000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((0x10000U & (vlSelf->mem_read_address ^ vlSelf->__Vtogcov__mem_read_address))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->__Vtogcov__mem_read_address = ((0xffffU 
                                                & vlSelf->__Vtogcov__mem_read_address) 
                                               | (0x10000U 
                                                  & vlSelf->mem_read_address));
    }
    if ((1U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffeU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (1U 
                                                   & vlSelf->mem_write_address));
    }
    if ((2U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffdU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (2U 
                                                   & vlSelf->mem_write_address));
    }
    if ((4U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fffbU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (4U 
                                                   & vlSelf->mem_write_address));
    }
    if ((8U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fff7U 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (8U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x10U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffefU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x10U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x20U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffdfU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x20U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x40U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ffbfU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x40U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x80U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1ff7fU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x80U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x100U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1feffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x100U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x200U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fdffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x200U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x400U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1fbffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x400U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x800U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1f7ffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x800U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x1000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1efffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x1000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x2000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1dfffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x2000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x4000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->__Vtogcov__mem_write_address = ((0x1bfffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x4000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x8000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->__Vtogcov__mem_write_address = ((0x17fffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x8000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((0x10000U & (vlSelf->mem_write_address ^ vlSelf->__Vtogcov__mem_write_address))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->__Vtogcov__mem_write_address = ((0xffffU 
                                                 & vlSelf->__Vtogcov__mem_write_address) 
                                                | (0x10000U 
                                                   & vlSelf->mem_write_address));
    }
    if ((1U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (1U 
                                                & vlSelf->mem_write_data));
    }
    if ((2U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (2U 
                                                & vlSelf->mem_write_data));
    }
    if ((4U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (4U 
                                                & vlSelf->mem_write_data));
    }
    if ((8U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (8U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x80U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x100U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x100U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x200U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x200U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x400U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x400U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x800U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x800U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x1000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x1000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x2000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x2000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x4000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x4000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x8000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x8000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x80000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x100000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x100000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x200000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x200000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x400000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->__Vtogcov__mem_write_data = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x400000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x800000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->__Vtogcov__mem_write_data = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x800000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x1000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x1000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x2000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x2000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x4000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->__Vtogcov__mem_write_data = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x4000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x8000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->__Vtogcov__mem_write_data = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x8000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x10000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->__Vtogcov__mem_write_data = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x10000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x20000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->__Vtogcov__mem_write_data = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x20000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((0x40000000U & (vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->__Vtogcov__mem_write_data = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x40000000U 
                                                & vlSelf->mem_write_data));
    }
    if (((vlSelf->mem_write_data ^ vlSelf->__Vtogcov__mem_write_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->__Vtogcov__mem_write_data = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__mem_write_data) 
                                             | (0x80000000U 
                                                & vlSelf->mem_write_data));
    }
    if ((1U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (1U & vlSelf->lsu_out));
    }
    if ((2U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (2U & vlSelf->lsu_out));
    }
    if ((4U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (4U & vlSelf->lsu_out));
    }
    if ((8U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (8U & vlSelf->lsu_out));
    }
    if ((0x10U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10U & vlSelf->lsu_out));
    }
    if ((0x20U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20U & vlSelf->lsu_out));
    }
    if ((0x40U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40U & vlSelf->lsu_out));
    }
    if ((0x80U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80U & vlSelf->lsu_out));
    }
    if ((0x100U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x100U & vlSelf->lsu_out));
    }
    if ((0x200U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x200U & vlSelf->lsu_out));
    }
    if ((0x400U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x400U & vlSelf->lsu_out));
    }
    if ((0x800U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x800U & vlSelf->lsu_out));
    }
    if ((0x1000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x1000U & vlSelf->lsu_out));
    }
    if ((0x2000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x2000U & vlSelf->lsu_out));
    }
    if ((0x4000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->__Vtogcov__lsu_out = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x4000U & vlSelf->lsu_out));
    }
    if ((0x8000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->__Vtogcov__lsu_out = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x8000U & vlSelf->lsu_out));
    }
    if ((0x10000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10000U & vlSelf->lsu_out));
    }
    if ((0x20000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20000U & vlSelf->lsu_out));
    }
    if ((0x40000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->__Vtogcov__lsu_out = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40000U & vlSelf->lsu_out));
    }
    if ((0x80000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->__Vtogcov__lsu_out = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80000U & vlSelf->lsu_out));
    }
    if ((0x100000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->__Vtogcov__lsu_out = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x100000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x200000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->__Vtogcov__lsu_out = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x200000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x400000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->__Vtogcov__lsu_out = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x400000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x800000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->__Vtogcov__lsu_out = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x800000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x1000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->__Vtogcov__lsu_out = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x1000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x2000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->__Vtogcov__lsu_out = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x2000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x4000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->__Vtogcov__lsu_out = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x4000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x8000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->__Vtogcov__lsu_out = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x8000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x10000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->__Vtogcov__lsu_out = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x10000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x20000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->__Vtogcov__lsu_out = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x20000000U 
                                         & vlSelf->lsu_out));
    }
    if ((0x40000000U & (vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->__Vtogcov__lsu_out = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x40000000U 
                                         & vlSelf->lsu_out));
    }
    if (((vlSelf->lsu_out ^ vlSelf->__Vtogcov__lsu_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->__Vtogcov__lsu_out = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lsu_out) 
                                      | (0x80000000U 
                                         & vlSelf->lsu_out));
    }
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0xfU] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [0xfU] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0xfU]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop1);
    if ((1U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffeU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (1U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((2U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffdU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (2U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((4U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffffbU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (4U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((8U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffff7U 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (8U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffefU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffdfU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->__Vtogcov__offset_address = ((0xffffffbfU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x80U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->__Vtogcov__offset_address = ((0xffffff7fU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x100U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffeffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x100U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x200U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffdffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x200U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x400U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->__Vtogcov__offset_address = ((0xfffffbffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x400U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x800U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->__Vtogcov__offset_address = ((0xfffff7ffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x800U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x1000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->__Vtogcov__offset_address = ((0xffffefffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x1000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x2000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->__Vtogcov__offset_address = ((0xffffdfffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x2000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x4000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->__Vtogcov__offset_address = ((0xffffbfffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x4000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x8000U & (vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->__Vtogcov__offset_address = ((0xffff7fffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x8000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->__Vtogcov__offset_address = ((0xfffeffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->__Vtogcov__offset_address = ((0xfffdffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->__Vtogcov__offset_address = ((0xfffbffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x80000U & (vlSelf->__PVT__offset_address 
                     ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->__Vtogcov__offset_address = ((0xfff7ffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x100000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->__Vtogcov__offset_address = ((0xffefffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x100000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x200000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->__Vtogcov__offset_address = ((0xffdfffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x200000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x400000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->__Vtogcov__offset_address = ((0xffbfffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x400000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x800000U & (vlSelf->__PVT__offset_address 
                      ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->__Vtogcov__offset_address = ((0xff7fffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x800000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x1000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->__Vtogcov__offset_address = ((0xfeffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x1000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x2000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->__Vtogcov__offset_address = ((0xfdffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x2000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x4000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->__Vtogcov__offset_address = ((0xfbffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x4000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x8000000U & (vlSelf->__PVT__offset_address 
                       ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->__Vtogcov__offset_address = ((0xf7ffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x8000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x10000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->__Vtogcov__offset_address = ((0xefffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x10000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x20000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->__Vtogcov__offset_address = ((0xdfffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x20000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if ((0x40000000U & (vlSelf->__PVT__offset_address 
                        ^ vlSelf->__Vtogcov__offset_address))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->__Vtogcov__offset_address = ((0xbfffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x40000000U 
                                                & vlSelf->__PVT__offset_address));
    }
    if (((vlSelf->__PVT__offset_address ^ vlSelf->__Vtogcov__offset_address) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->__Vtogcov__offset_address = ((0x7fffffffU 
                                              & vlSelf->__Vtogcov__offset_address) 
                                             | (0x80000000U 
                                                & vlSelf->__PVT__offset_address));
    }
}

VL_ATTR_COLD void Vdut_lsu___configure_coverage(Vdut_lsu* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 11, 16, "", "v_toggle/lsu", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 12, 16, "", "v_toggle/lsu", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2989]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 13, 16, "", "v_toggle/lsu", "enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1197]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 16, 24, "", "v_toggle/lsu", "warp_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1198]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 16, 24, "", "v_toggle/lsu", "warp_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1199]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 16, 24, "", "v_toggle/lsu", "warp_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1200]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 16, 24, "", "v_toggle/lsu", "warp_state[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 19, 15, "", "v_toggle/lsu", "decoded_mem_read_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 20, 15, "", "v_toggle/lsu", "decoded_mem_write_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1655]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1656]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1657]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1658]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1659]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1660]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1661]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1662]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1663]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1664]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1665]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1666]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1667]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1668]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1669]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1670]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1671]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1672]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1673]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1674]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1675]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1676]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1677]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1678]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1680]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1681]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1682]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1683]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1684]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1685]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1686]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 23, 18, "", "v_toggle/lsu", "rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1687]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1688]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1689]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1690]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1691]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1692]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1693]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1694]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1695]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1696]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1697]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1698]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1699]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1700]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1701]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1702]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1703]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1704]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1705]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1706]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1707]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1708]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1709]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1710]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1711]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1712]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1713]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1714]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1715]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1716]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1717]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1718]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 24, 18, "", "v_toggle/lsu", "rs2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 25, 18, "", "v_toggle/lsu", "imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2990]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 28, 18, "", "v_toggle/lsu", "mem_read_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2991]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2992]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2993]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2994]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2995]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2996]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2997]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2998]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2999]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3000]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3001]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3002]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3003]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3004]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3005]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3006]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3007]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 29, 34, "", "v_toggle/lsu", "mem_read_address[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[983]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 30, 17, "", "v_toggle/lsu", "mem_read_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3008]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3009]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3010]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3011]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3012]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3013]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3014]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3015]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3016]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3017]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3018]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3019]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3020]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3021]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3022]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3023]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3024]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3025]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3026]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3027]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3028]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3029]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3030]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3031]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3032]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3033]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3034]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3035]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3036]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3037]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3038]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3039]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 31, 18, "", "v_toggle/lsu", "mem_read_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3040]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 32, 18, "", "v_toggle/lsu", "mem_write_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3041]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3042]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3043]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3044]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3045]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3046]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3047]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3048]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3049]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3050]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3051]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3052]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3053]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3054]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3055]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3056]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3057]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 33, 34, "", "v_toggle/lsu", "mem_write_address[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3058]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3059]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3060]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3061]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3062]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3063]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3064]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3065]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3066]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3067]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3068]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3069]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3070]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3071]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3072]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3073]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3074]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3075]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3076]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3077]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3078]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3079]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3080]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3081]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3082]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3083]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3084]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3085]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3086]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3087]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3088]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3089]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 34, 19, "", "v_toggle/lsu", "mem_write_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1017]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 35, 17, "", "v_toggle/lsu", "mem_write_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1605]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 38, 24, "", "v_toggle/lsu", "lsu_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1606]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 38, 24, "", "v_toggle/lsu", "lsu_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1573]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1574]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1575]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1576]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1577]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1578]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1579]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1580]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1581]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1582]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1583]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1584]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1585]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1586]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1587]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1588]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1589]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1590]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1591]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1592]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1593]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1594]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1595]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1596]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1597]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1598]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1599]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1600]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1601]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1602]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1603]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1604]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 39, 19, "", "v_toggle/lsu", "lsu_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3090]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3091]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3092]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3093]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3094]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3095]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3096]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3097]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3098]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3099]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3100]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3101]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3102]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3103]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3104]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3105]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3106]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3107]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3108]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3109]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3110]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3111]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3112]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3113]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3114]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3115]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3116]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3117]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3118]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3119]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3120]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3121]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 42, 8, "", "v_toggle/lsu", "offset_address[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3122]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 73, 21, "", "v_branch/lsu", "if", "73,75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3123]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 73, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3124]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 70, 25, "", "v_line/lsu", "case", "70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3125]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 78, 31, "", "v_line/lsu", "case", "78-79,81-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3126]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 88, 21, "", "v_branch/lsu", "if", "88-90,92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3127]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 88, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3128]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 85, 28, "", "v_line/lsu", "case", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3129]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 99, 21, "", "v_branch/lsu", "if", "99-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3130]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 99, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3131]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 96, 25, "", "v_line/lsu", "case", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3132]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 66, 9, "", "v_branch/lsu", "if", "66,69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3133]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 66, 10, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3134]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 113, 21, "", "v_branch/lsu", "if", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3135]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 113, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3136]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 111, 25, "", "v_line/lsu", "case", "111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3137]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 118, 31, "", "v_line/lsu", "case", "118-125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3138]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 130, 21, "", "v_branch/lsu", "if", "130-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3139]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 130, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3140]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 127, 28, "", "v_line/lsu", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3141]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 138, 21, "", "v_branch/lsu", "if", "138-139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3142]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 138, 22, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3143]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 136, 25, "", "v_line/lsu", "case", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3144]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 108, 9, "", "v_branch/lsu", "if", "108,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3145]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 108, 10, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3146]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 63, 14, "", "v_branch/lsu", "if", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3147]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 63, 15, "", "v_branch/lsu", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3148]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 55, 5, "", "v_line/lsu", "elsif", "55-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3149]), first, "/root/FDGA-1/rtl/lock_in/lsu.sv", 52, 1, "", "v_line/lsu", "block", "52");
}
