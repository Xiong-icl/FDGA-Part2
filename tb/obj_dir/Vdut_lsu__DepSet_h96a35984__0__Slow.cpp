// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_lsu.h"

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst__0\n"); );
    // Body
    if (((IData)(vlSelf->mem_read_valid) ^ (IData)(vlSelf->__Vtogcov__mem_read_valid))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->__Vtogcov__mem_read_valid = vlSelf->mem_read_valid;
    }
    if (((IData)(vlSelf->mem_write_valid) ^ (IData)(vlSelf->__Vtogcov__mem_write_valid))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->__Vtogcov__mem_write_valid = vlSelf->mem_write_valid;
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
    if ((1U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0x10U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [0x10U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0x10U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_read_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_mem_read_enable))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__decoded_mem_read_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_read_enable;
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_write_enable) 
         ^ (IData)(vlSelf->__Vtogcov__decoded_mem_write_enable))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->__Vtogcov__decoded_mem_write_enable 
            = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_write_enable;
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__0\n"); );
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
               [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [0U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [0U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [0U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__0\n"); );
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
               [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [1U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [1U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [1U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__0\n"); );
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
               [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [2U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [2U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [2U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__0\n"); );
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
               [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [3U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [3U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [3U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__0\n"); );
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
               [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [4U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [4U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [4U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__0\n"); );
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
               [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [5U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [5U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [5U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable;
    }
}

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__1(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__1\n"); );
    // Body
    vlSelf->__PVT__offset_address = (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
                                     + vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1);
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

VL_ATTR_COLD void Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst__0(Vdut_lsu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdut_lsu___stl_sequent__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst__0\n"); );
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
               [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (1U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((2U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (2U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((4U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (4U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((8U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
               [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (8U & 
                                               vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x10U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x20U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x40U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x80U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                  [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x100U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x200U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x400U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x800U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                   [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x1000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x2000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x4000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x8000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                    [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x10000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x20000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x40000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x80000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                     [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x100000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x200000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x400000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->__Vtogcov__mem_read_data = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x800000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                      [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->__Vtogcov__mem_read_data = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->__Vtogcov__mem_read_data = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                       [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->__Vtogcov__mem_read_data = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->__Vtogcov__mem_read_data = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->__Vtogcov__mem_read_data = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                        [6U] ^ vlSelf->__Vtogcov__mem_read_data))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->__Vtogcov__mem_read_data = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if (((vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
          [6U] ^ vlSelf->__Vtogcov__mem_read_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->__Vtogcov__mem_read_data = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__mem_read_data) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                                               [6U]));
    }
    if (((IData)(vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable) 
         ^ (IData)(vlSelf->__Vtogcov__enable))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->__Vtogcov__enable = vlSymsp->TOP.gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable;
    }
}
