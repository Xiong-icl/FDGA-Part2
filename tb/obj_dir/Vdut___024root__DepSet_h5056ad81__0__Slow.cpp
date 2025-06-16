// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___eval_static__TOP(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_static(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_static\n"); );
    // Body
    Vdut___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vdut___024root___eval_final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdut___024root___eval_stl(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdut___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/root/FDGA-1/rtl/lock_in/gpu.sv", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdut___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->base_instr = VL_RAND_RESET_I(32);
    vlSelf->base_data = VL_RAND_RESET_I(32);
    vlSelf->num_blocks = VL_RAND_RESET_I(32);
    vlSelf->warps_per_block = VL_RAND_RESET_I(32);
    vlSelf->execution_start = VL_RAND_RESET_I(1);
    vlSelf->execution_done = VL_RAND_RESET_I(1);
    vlSelf->instruction_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->instruction_mem_read_address[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->instruction_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->instruction_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->data_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->data_mem_read_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->data_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->data_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->data_mem_write_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->data_mem_write_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->data_mem_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->data_mem_write_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->gpu__DOT__kernel_config_reg);
    vlSelf->gpu__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__core_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__core_start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__core_reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__core_block_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__lsu_read_valid = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_read_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->gpu__DOT__lsu_read_ready = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__lsu_write_valid = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_write_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__lsu_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__lsu_write_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__m_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__m_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__m_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__m_axi_arvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vcellinp__mcu_inst__fetcher_read_data_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vcellout__mcu_inst__fetcher_read_address_core[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__fetcher_read_valid_core = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__fetcher_read_address_core[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__fetcher_read_data_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__base_instr = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__base_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__num_blocks = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__warps_per_block = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__execution_start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__execution_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_address[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT____Vtogcov__data_mem_read_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->gpu__DOT____Vtogcov__data_mem_read_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT____Vtogcov__data_mem_write_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT____Vtogcov__data_mem_write_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->gpu__DOT____Vtogcov__kernel_config_reg);
    vlSelf->gpu__DOT____Vtogcov__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__core_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__core_start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__core_reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__core_block_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT____Vtogcov__lsu_read_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT____Vtogcov__lsu_read_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT____Vtogcov__lsu_write_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT____Vtogcov__lsu_write_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT____Vtogcov__m_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__m_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__m_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT____Vtogcov__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT____Vtogcov__fetcher_read_valid_core = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_address_core[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatcher_inst__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_start = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__total_blocks = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->gpu__DOT__dispatcher_inst__DOT____Vlvbound_ha1595e95__0 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT__req_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write = VL_RAND_RESET_I(17);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__instruction_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__fetcher_read_data_core[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__fetcher_read_valid_core = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__fetcher_read_address_core[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__mcu_is_busy = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rid = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_read_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__consumer_write_ready = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__state = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__next_state = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_start_idx = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_len_count = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__burst_data_counter = VL_RAND_RESET_I(8);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_valid = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__req_is_write = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk5__DOT__byte_addr = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk6__DOT__byte_addr = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk7__DOT__byte_addr = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_had8f599f__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hac2994c6__0 = VL_RAND_RESET_I(17);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd2ceb3e1__0 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h1203c449__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h69bde666__0 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_hd5da0e8d__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT____Vlvbound_h5df04a3d__0 = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__start_execution = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_write_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_branch[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_halt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingWrite_flag[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__any_lsu_waiting = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__start_execution = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__num_warps = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_write_enable[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_branch[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_scalar_instruction[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_halt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingWrite_flag[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_read_enable_per_warp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_write_enable_per_warp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_execution_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__all_warps_done = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__any_lsu_waiting = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_alu_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_execution_mask = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_int_alu_result = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_float_alu_result = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__is_scalar_float_op = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__is_scalar_int_op = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__more_fadd = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__less_beqz = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__next_warp = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__found_warp = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__warp_index = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk9__DOT__scalar_write_value = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_halt = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_branch = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__alu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__alu_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_hf13df16c__0 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__0 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__1 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__2 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h79de8e67__0 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h79de8e67__1 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h79de8e67__2 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h79de8e67__3 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h79de8e67__4 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__3 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h221e3c74__0 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h221e3c74__1 = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__4 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h0508dda8__0 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h903fce83__5 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h1d3bfb85__0 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_h8a0988a6__0 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vlvbound_hece1bb61__0 = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s = VL_RAND_RESET_I(15);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j = VL_RAND_RESET_I(26);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_read_enable = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_branch = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_scalar_instruction = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate = VL_RAND_RESET_I(32);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_halt = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead = VL_RAND_RESET_I(2);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingWrite = VL_RAND_RESET_I(1);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3 = VL_RAND_RESET_I(3);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct4 = VL_RAND_RESET_I(4);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 = VL_RAND_RESET_I(5);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i = VL_RAND_RESET_I(14);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_load = VL_RAND_RESET_I(15);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s = VL_RAND_RESET_I(15);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b = VL_RAND_RESET_I(16);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j = VL_RAND_RESET_I(26);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__current_req_valid = VL_RAND_RESET_I(17);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__start_idx = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__len_count = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__0__temp_valid = VL_RAND_RESET_I(17);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__current_req_valid = VL_RAND_RESET_I(17);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__start_idx = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__len_count = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_gpu__DOT__mcu_inst__DOT__calc_remaining_requests__1__temp_valid = VL_RAND_RESET_I(17);
    vlSelf->__Vfunc_sign_extend_16__2__imm16 = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_sign_extend_16__3__imm16 = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_sign_extend_26__4__imm26 = VL_RAND_RESET_I(26);
    vlSelf->__Vfunc_sign_extend_15__5__imm15 = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_sign_extend_15__6__imm15 = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_sign_extend_15__7__imm15 = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_sign_extend_15__8__imm15 = VL_RAND_RESET_I(15);
    vlSelf->__Vfunc_sign_extend_14__9__imm14 = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__gpu__DOT__start_execution = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__burst_data_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v0 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v0 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v1 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v2 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v3 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v4 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v5 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v6 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v7 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v8 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v9 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v10 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v11 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v12 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v13 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v14 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v15 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__req_addr__v16 = 0;
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__consumer_read_data__v17 = 0;
    vlSelf->__Vdly__gpu__DOT__core_reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v0 = 0;
    vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v1 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v1 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v1 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v2 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v2 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v2 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v3 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v3 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v3 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v0 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v0 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v1 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data__v1 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v4 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v4 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v4 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc__v1 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc__v1 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc__v1 = 0;
    vlSelf->__Vdlyvdim0__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v5 = 0;
    vlSelf->__Vdlyvval__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v5 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state__v5 = 0;
    vlSelf->__Vdly__gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state = VL_RAND_RESET_I(2);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
