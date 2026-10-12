// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___eval_static__TOP(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done = 1U;
    ++(vlSymsp->__Vcoverage[1507]);
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf);
VL_ATTR_COLD void Vdut_scalar_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst(Vdut_scalar_reg_file* vlSelf);
VL_ATTR_COLD void Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst(Vdut_reg_file* vlSelf);
VL_ATTR_COLD void Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst(Vdut_reg_file* vlSelf);
VL_ATTR_COLD void Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst(Vdut_alu* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vdut_scalar_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst));
    Vdut_scalar_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst));
    Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst));
    Vdut_reg_file___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst));
    Vdut_alu___eval_initial__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst((&vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial__TOP\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[284]);
    ++(vlSymsp->__Vcoverage[421]);
    if ((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rlast)))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rlast = 1U;
    }
    ++(vlSymsp->__Vcoverage[1724]);
    ++(vlSymsp->__Vcoverage[1730]);
    ++(vlSymsp->__Vcoverage[1736]);
    ++(vlSymsp->__Vcoverage[1742]);
    ++(vlSymsp->__Vcoverage[1748]);
    ++(vlSymsp->__Vcoverage[1754]);
    ++(vlSymsp->__Vcoverage[1760]);
    ++(vlSymsp->__Vcoverage[1766]);
    ++(vlSymsp->__Vcoverage[1772]);
    ++(vlSymsp->__Vcoverage[1778]);
    ++(vlSymsp->__Vcoverage[1784]);
    ++(vlSymsp->__Vcoverage[1790]);
    ++(vlSymsp->__Vcoverage[1796]);
    ++(vlSymsp->__Vcoverage[1802]);
    ++(vlSymsp->__Vcoverage[1808]);
    ++(vlSymsp->__Vcoverage[1814]);
    ++(vlSymsp->__Vcoverage[1820]);
    ++(vlSymsp->__Vcoverage[1872]);
    ++(vlSymsp->__Vcoverage[1941]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ gpu__DOT__mcu_inst__DOT__core_instance__DOT____VdfgTmp_hb1713a12__0;
    // Body
    VL_WRITEF("data_mem_read_data: %10#\n",32,vlSelf->data_mem_read_data);
    if (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) {
        ++(vlSymsp->__Vcoverage[1871]);
    }
    if ((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))) {
        ++(vlSymsp->__Vcoverage[1870]);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->gpu__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->gpu__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((IData)(vlSelf->execution_start) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__execution_start))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->gpu__DOT____Vtogcov__execution_start 
            = vlSelf->execution_start;
    }
    if (((IData)(vlSelf->execution_done) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__execution_done))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->gpu__DOT____Vtogcov__execution_done 
            = vlSelf->execution_done;
    }
    if (((IData)(vlSelf->instruction_mem_read_ready) 
         ^ (IData)(vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_ready))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_ready 
            = vlSelf->instruction_mem_read_ready;
    }
    if (((IData)(vlSelf->data_mem_read_ready) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__data_mem_read_ready))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_ready 
            = vlSelf->data_mem_read_ready;
    }
    if (((IData)(vlSelf->data_mem_write_ready) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__data_mem_write_ready))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_write_ready 
            = vlSelf->data_mem_write_ready;
    }
    if (((IData)(vlSelf->gpu__DOT__start_execution) 
         ^ (IData)(vlSelf->gpu__DOT____Vtogcov__start_execution))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->gpu__DOT____Vtogcov__start_execution 
            = vlSelf->gpu__DOT__start_execution;
    }
    if (((IData)(vlSelf->gpu__DOT__core_done) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__core_done))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->gpu__DOT____Vtogcov__core_done = vlSelf->gpu__DOT__core_done;
    }
    if (((IData)(vlSelf->gpu__DOT__core_start) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__core_start))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->gpu__DOT____Vtogcov__core_start = vlSelf->gpu__DOT__core_start;
    }
    if (((IData)(vlSelf->gpu__DOT__core_reset) ^ (IData)(vlSelf->gpu__DOT____Vtogcov__core_reset))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->gpu__DOT____Vtogcov__core_reset = vlSelf->gpu__DOT__core_reset;
    }
    if (((IData)(vlSelf->gpu__DOT__fetcher_read_valid_core) 
         ^ (IData)(vlSelf->gpu__DOT____Vtogcov__fetcher_read_valid_core))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_valid_core 
            = vlSelf->gpu__DOT__fetcher_read_valid_core;
    }
    if (((IData)(vlSelf->gpu__DOT__core_done) ^ (IData)(vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_done))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_done 
            = vlSelf->gpu__DOT__core_done;
    }
    if (((IData)(vlSelf->gpu__DOT__core_start) ^ (IData)(vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_start))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_start 
            = vlSelf->gpu__DOT__core_start;
    }
    if (((IData)(vlSelf->gpu__DOT__core_reset) ^ (IData)(vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_reset))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_reset 
            = vlSelf->gpu__DOT__core_reset;
    }
    if (((IData)(vlSelf->gpu__DOT__dispatcher_inst__DOT__start_execution) 
         ^ (IData)(vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__start_execution))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__start_execution 
            = vlSelf->gpu__DOT__dispatcher_inst__DOT__start_execution;
    }
    if (((IData)(vlSelf->gpu__DOT__fetcher_read_valid_core) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__fetcher_read_valid_core))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__fetcher_read_valid_core 
            = vlSelf->gpu__DOT__fetcher_read_valid_core;
    }
    if (((0U != (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state)) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__mcu_is_busy))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__mcu_is_busy 
            = (0U != (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state));
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bid) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bid))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bid 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bid;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rid) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rid))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rid 
            = vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rid;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__start_execution) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__start_execution))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__start_execution 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__start_execution;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__any_lsu_waiting) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__any_lsu_waiting))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__any_lsu_waiting 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__any_lsu_waiting;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_write_enable))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_write_enable 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_write_enable) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_write_enable))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_write_enable 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_write_enable;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_read_enable) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_read_enable))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_mem_read_enable 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_read_enable;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_branch) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_branch))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_branch 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_branch;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_scalar_instruction))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_scalar_instruction 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_halt) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_halt))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_halt 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_halt;
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingWrite))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingWrite 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite;
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xdU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct4) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct4 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct4)) 
               | (8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xaU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x1cU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_load) 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_load 
            = ((0x3fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_load)) 
               | (0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                             >> 0xeU)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_bresp)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp)))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp)))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__m_axi_rresp)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state)) 
               | (1U & (IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_state)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state)))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_state)) 
               | (2U & (IData)(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_state)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state)))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state)))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__fetcher_state)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead)))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead 
            = ((2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead)))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead 
            = ((1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__floatingRead)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux 
            = ((6U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux 
            = ((5U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux 
            = ((3U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_reg_input_mux)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x1dU) ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((6U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0x1dU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x1eU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((5U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0x1dU)));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
          >> 0x1fU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode) 
                       >> 2U))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode 
            = ((3U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__opcode)) 
               | (4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0x1dU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xaU) ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3)))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xaU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xbU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xaU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xcU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__funct3)) 
               | (4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xaU)));
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
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state[0U] 
            = ((0xeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state[0U] 
            = ((0xdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state[0U] 
            = ((0xbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state[0U] 
            = ((7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__warp_state
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state 
            = ((0xeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                  [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state 
            = ((0xdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                  [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state 
            = ((0xbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                  [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__warp_state)) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                  [0U]));
    }
    vlSelf->instruction_mem_read_valid = vlSelf->gpu__DOT__fetcher_read_valid_core;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_write_enable[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingWrite_flag[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_branch[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_branch;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_halt[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_halt;
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rd_address)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs1_address)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_rs2_address)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_alu_instruction)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction)));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 1U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 2U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 3U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 4U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd) 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rd)) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 5U) ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)) 
               | (1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 6U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)) 
               | (2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 7U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)) 
               | (4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 8U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)) 
               | (8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 9U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1) 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs1)) 
               | (0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xeU) ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)) 
               | (1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0xfU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)) 
               | (2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x10U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)) 
               | (4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x11U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)) 
               | (8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x12U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__rs2)) 
               | (0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                           >> 0xeU)));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable 
        = ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable) 
           & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction) 
              & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite)));
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
                goto __Vlabel1;
            } else {
                ++(vlSymsp->__Vcoverage[1822]);
            }
            ++(vlSymsp->__Vcoverage[1823]);
            vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    ++(vlSymsp->__Vcoverage[1824]);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable 
        = ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable) 
           & (((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite)) 
               & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction)) 
              | (4U == (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux))));
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
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x13U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 5U)))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3fdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                           >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x14U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 6U)))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3fbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                           >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x15U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 7U)))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3f7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                           >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x16U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3effU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                            >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x17U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3dffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                            >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x18U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x3bffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                            >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x19U) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x37ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                            >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x1aU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x2fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                             >> 0xeU)));
    }
    if ((1U & ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                >> 0x1bU) ^ ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i) 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i 
            = ((0x1fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_i)) 
               | (0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                             >> 0xeU)));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_read_enable;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_write_enable;
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xfbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xf7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0xbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc[0U] 
            = ((0x7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__pc
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xfbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xf7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0xbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc[0U] 
            = ((0x7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__next_pc
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfffeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfffdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfffbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
               [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfff7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xffefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xffdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xffbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xff7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfeffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfdffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xfbffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                   [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xf7ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xefffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xdfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0xbfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                    [0U] ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc 
            = ((0x7fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__pc)) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                  [0U]));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfffeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfffdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfffbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfff7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xffefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xffdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xffbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xff7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x100U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfeffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x100U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x200U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfdffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x200U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x400U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xfbffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x400U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x800U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xf7ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x800U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xefffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x1000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xdfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x2000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0xbfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x4000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    if ((0x8000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address 
            = ((0x7fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction_mem_read_address)) 
               | (0x8000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address)));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux;
    gpu__DOT__mcu_inst__DOT__core_instance__DOT____VdfgTmp_hb1713a12__0 
        = ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction)) 
           & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable));
    if ((1U & (vlSelf->gpu__DOT__lsu_read_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (1U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((2U & (vlSelf->gpu__DOT__lsu_read_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (2U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((4U & (vlSelf->gpu__DOT__lsu_read_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (4U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((8U & (vlSelf->gpu__DOT__lsu_read_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (8U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x10U & (vlSelf->gpu__DOT__lsu_read_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x10U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x20U & (vlSelf->gpu__DOT__lsu_read_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x20U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x40U & (vlSelf->gpu__DOT__lsu_read_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x40U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x80U & (vlSelf->gpu__DOT__lsu_read_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x80U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x100U & (vlSelf->gpu__DOT__lsu_read_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x100U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x200U & (vlSelf->gpu__DOT__lsu_read_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x200U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x400U & (vlSelf->gpu__DOT__lsu_read_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x400U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x800U & (vlSelf->gpu__DOT__lsu_read_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x800U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__lsu_read_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x1000U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__lsu_read_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x2000U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__lsu_read_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x4000U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__lsu_read_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x8000U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__lsu_read_valid 
                     ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_valid))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_valid 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_valid) 
               | (0x10000U & vlSelf->gpu__DOT__lsu_read_valid));
    }
    if ((1U & (vlSelf->gpu__DOT__lsu_read_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (1U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((2U & (vlSelf->gpu__DOT__lsu_read_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (2U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((4U & (vlSelf->gpu__DOT__lsu_read_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (4U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((8U & (vlSelf->gpu__DOT__lsu_read_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (8U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x10U & (vlSelf->gpu__DOT__lsu_read_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x10U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x20U & (vlSelf->gpu__DOT__lsu_read_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x20U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x40U & (vlSelf->gpu__DOT__lsu_read_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x40U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x80U & (vlSelf->gpu__DOT__lsu_read_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x80U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x100U & (vlSelf->gpu__DOT__lsu_read_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x100U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x200U & (vlSelf->gpu__DOT__lsu_read_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x200U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x400U & (vlSelf->gpu__DOT__lsu_read_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x400U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x800U & (vlSelf->gpu__DOT__lsu_read_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x800U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__lsu_read_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x1000U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__lsu_read_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x2000U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__lsu_read_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x4000U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__lsu_read_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x8000U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__lsu_read_ready 
                     ^ vlSelf->gpu__DOT____Vtogcov__lsu_read_ready))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->gpu__DOT____Vtogcov__lsu_read_ready 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__lsu_read_ready) 
               | (0x10000U & vlSelf->gpu__DOT__lsu_read_ready));
    }
    if ((1U & (vlSelf->gpu__DOT__lsu_write_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (1U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((2U & (vlSelf->gpu__DOT__lsu_write_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (2U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((4U & (vlSelf->gpu__DOT__lsu_write_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (4U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((8U & (vlSelf->gpu__DOT__lsu_write_valid ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (8U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x10U & (vlSelf->gpu__DOT__lsu_write_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x10U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x20U & (vlSelf->gpu__DOT__lsu_write_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x20U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x40U & (vlSelf->gpu__DOT__lsu_write_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x40U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x80U & (vlSelf->gpu__DOT__lsu_write_valid 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x80U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x100U & (vlSelf->gpu__DOT__lsu_write_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x100U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x200U & (vlSelf->gpu__DOT__lsu_write_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x200U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x400U & (vlSelf->gpu__DOT__lsu_write_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x400U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x800U & (vlSelf->gpu__DOT__lsu_write_valid 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x800U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__lsu_write_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x1000U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__lsu_write_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x2000U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__lsu_write_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x4000U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__lsu_write_valid 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x8000U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__lsu_write_valid 
                     ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_valid))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_valid 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_valid) 
               | (0x10000U & vlSelf->gpu__DOT__lsu_write_valid));
    }
    if ((1U & (vlSelf->gpu__DOT__lsu_write_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fffeU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (1U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((2U & (vlSelf->gpu__DOT__lsu_write_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fffdU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (2U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((4U & (vlSelf->gpu__DOT__lsu_write_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fffbU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (4U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((8U & (vlSelf->gpu__DOT__lsu_write_ready ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fff7U & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (8U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x10U & (vlSelf->gpu__DOT__lsu_write_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1ffefU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x10U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x20U & (vlSelf->gpu__DOT__lsu_write_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1ffdfU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x20U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x40U & (vlSelf->gpu__DOT__lsu_write_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1ffbfU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x40U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x80U & (vlSelf->gpu__DOT__lsu_write_ready 
                  ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1ff7fU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x80U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x100U & (vlSelf->gpu__DOT__lsu_write_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1feffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x100U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x200U & (vlSelf->gpu__DOT__lsu_write_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fdffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x200U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x400U & (vlSelf->gpu__DOT__lsu_write_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1fbffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x400U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x800U & (vlSelf->gpu__DOT__lsu_write_ready 
                   ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1f7ffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x800U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__lsu_write_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1efffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x1000U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__lsu_write_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1dfffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x2000U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__lsu_write_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x1bfffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x4000U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__lsu_write_ready 
                    ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0x17fffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x8000U & vlSelf->gpu__DOT__lsu_write_ready));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__lsu_write_ready 
                     ^ vlSelf->gpu__DOT____Vtogcov__lsu_write_ready))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->gpu__DOT____Vtogcov__lsu_write_ready 
            = ((0xffffU & vlSelf->gpu__DOT____Vtogcov__lsu_write_ready) 
               | (0x10000U & vlSelf->gpu__DOT__lsu_write_ready));
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
    if ((1U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffffeU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (1U 
                                                      & vlSelf->base_instr));
    }
    if ((2U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffffdU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (2U 
                                                      & vlSelf->base_instr));
    }
    if ((4U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffffbU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (4U 
                                                      & vlSelf->base_instr));
    }
    if ((8U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffff7U 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (8U 
                                                      & vlSelf->base_instr));
    }
    if ((0x10U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffffefU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x10U 
                                                      & vlSelf->base_instr));
    }
    if ((0x20U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffffdfU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x20U 
                                                      & vlSelf->base_instr));
    }
    if ((0x40U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffffbfU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x40U 
                                                      & vlSelf->base_instr));
    }
    if ((0x80U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffff7fU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x80U 
                                                      & vlSelf->base_instr));
    }
    if ((0x100U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffeffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x100U 
                                                      & vlSelf->base_instr));
    }
    if ((0x200U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffdffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x200U 
                                                      & vlSelf->base_instr));
    }
    if ((0x400U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffffbffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x400U 
                                                      & vlSelf->base_instr));
    }
    if ((0x800U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x800U 
                                                      & vlSelf->base_instr));
    }
    if ((0x1000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffefffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x1000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x2000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffdfffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x2000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x4000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffffbfffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x4000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x8000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffff7fffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x8000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x10000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffeffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x10000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x20000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffdffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x20000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x40000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfffbffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x40000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x80000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x80000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x100000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffefffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x100000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x200000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffdfffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x200000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x400000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xffbfffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x400000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x800000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xff7fffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x800000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x1000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfeffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x1000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x2000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfdffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x2000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x4000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xfbffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x4000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x8000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x8000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x10000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xefffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x10000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x20000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xdfffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x20000000U 
                                                      & vlSelf->base_instr));
    }
    if ((0x40000000U & (vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0xbfffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x40000000U 
                                                      & vlSelf->base_instr));
    }
    if (((vlSelf->base_instr ^ vlSelf->gpu__DOT____Vtogcov__base_instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->gpu__DOT____Vtogcov__base_instr = (
                                                   (0x7fffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__base_instr) 
                                                   | (0x80000000U 
                                                      & vlSelf->base_instr));
    }
    if ((1U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffffeU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (1U 
                                                     & vlSelf->base_data));
    }
    if ((2U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffffdU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (2U 
                                                     & vlSelf->base_data));
    }
    if ((4U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffffbU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (4U 
                                                     & vlSelf->base_data));
    }
    if ((8U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffff7U 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (8U 
                                                     & vlSelf->base_data));
    }
    if ((0x10U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffffefU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x10U 
                                                     & vlSelf->base_data));
    }
    if ((0x20U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffffdfU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x20U 
                                                     & vlSelf->base_data));
    }
    if ((0x40U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffffbfU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x40U 
                                                     & vlSelf->base_data));
    }
    if ((0x80U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffff7fU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x80U 
                                                     & vlSelf->base_data));
    }
    if ((0x100U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffeffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x100U 
                                                     & vlSelf->base_data));
    }
    if ((0x200U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffdffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x200U 
                                                     & vlSelf->base_data));
    }
    if ((0x400U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffffbffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x400U 
                                                     & vlSelf->base_data));
    }
    if ((0x800U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffff7ffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x800U 
                                                     & vlSelf->base_data));
    }
    if ((0x1000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffefffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x1000U 
                                                     & vlSelf->base_data));
    }
    if ((0x2000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffdfffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x2000U 
                                                     & vlSelf->base_data));
    }
    if ((0x4000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffffbfffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x4000U 
                                                     & vlSelf->base_data));
    }
    if ((0x8000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffff7fffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x8000U 
                                                     & vlSelf->base_data));
    }
    if ((0x10000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffeffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x10000U 
                                                     & vlSelf->base_data));
    }
    if ((0x20000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffdffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x20000U 
                                                     & vlSelf->base_data));
    }
    if ((0x40000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfffbffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x40000U 
                                                     & vlSelf->base_data));
    }
    if ((0x80000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfff7ffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x80000U 
                                                     & vlSelf->base_data));
    }
    if ((0x100000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffefffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x100000U 
                                                     & vlSelf->base_data));
    }
    if ((0x200000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffdfffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x200000U 
                                                     & vlSelf->base_data));
    }
    if ((0x400000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xffbfffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x400000U 
                                                     & vlSelf->base_data));
    }
    if ((0x800000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xff7fffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x800000U 
                                                     & vlSelf->base_data));
    }
    if ((0x1000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfeffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x1000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x2000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfdffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x2000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x4000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xfbffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x4000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x8000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xf7ffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x8000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x10000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xefffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x10000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x20000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xdfffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x20000000U 
                                                     & vlSelf->base_data));
    }
    if ((0x40000000U & (vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0xbfffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x40000000U 
                                                     & vlSelf->base_data));
    }
    if (((vlSelf->base_data ^ vlSelf->gpu__DOT____Vtogcov__base_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->gpu__DOT____Vtogcov__base_data = ((0x7fffffffU 
                                                   & vlSelf->gpu__DOT____Vtogcov__base_data) 
                                                  | (0x80000000U 
                                                     & vlSelf->base_data));
    }
    if ((1U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffffeU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (1U 
                                                      & vlSelf->num_blocks));
    }
    if ((2U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffffdU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (2U 
                                                      & vlSelf->num_blocks));
    }
    if ((4U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffffbU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (4U 
                                                      & vlSelf->num_blocks));
    }
    if ((8U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffff7U 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (8U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x10U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffffefU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x10U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x20U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffffdfU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x20U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x40U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffffbfU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x40U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x80U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffff7fU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x80U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x100U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffeffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x100U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x200U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffdffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x200U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x400U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffffbffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x400U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x800U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x800U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x1000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffefffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x1000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x2000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffdfffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x2000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x4000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffffbfffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x4000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x8000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffff7fffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x8000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x10000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffeffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x10000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x20000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffdffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x20000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x40000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfffbffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x40000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x80000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x80000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x100000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffefffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x100000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x200000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffdfffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x200000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x400000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xffbfffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x400000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x800000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xff7fffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x800000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x1000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfeffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x1000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x2000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfdffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x2000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x4000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xfbffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x4000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x8000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x8000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x10000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xefffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x10000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x20000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xdfffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x20000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((0x40000000U & (vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0xbfffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x40000000U 
                                                      & vlSelf->num_blocks));
    }
    if (((vlSelf->num_blocks ^ vlSelf->gpu__DOT____Vtogcov__num_blocks) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->gpu__DOT____Vtogcov__num_blocks = (
                                                   (0x7fffffffU 
                                                    & vlSelf->gpu__DOT____Vtogcov__num_blocks) 
                                                   | (0x80000000U 
                                                      & vlSelf->num_blocks));
    }
    if ((1U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (1U & vlSelf->warps_per_block));
    }
    if ((2U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (2U & vlSelf->warps_per_block));
    }
    if ((4U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (4U & vlSelf->warps_per_block));
    }
    if ((8U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (8U & vlSelf->warps_per_block));
    }
    if ((0x10U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x10U & vlSelf->warps_per_block));
    }
    if ((0x20U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x20U & vlSelf->warps_per_block));
    }
    if ((0x40U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x40U & vlSelf->warps_per_block));
    }
    if ((0x80U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x80U & vlSelf->warps_per_block));
    }
    if ((0x100U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x100U & vlSelf->warps_per_block));
    }
    if ((0x200U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x200U & vlSelf->warps_per_block));
    }
    if ((0x400U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x400U & vlSelf->warps_per_block));
    }
    if ((0x800U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x800U & vlSelf->warps_per_block));
    }
    if ((0x1000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x1000U & vlSelf->warps_per_block));
    }
    if ((0x2000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x2000U & vlSelf->warps_per_block));
    }
    if ((0x4000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x4000U & vlSelf->warps_per_block));
    }
    if ((0x8000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x8000U & vlSelf->warps_per_block));
    }
    if ((0x10000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x10000U & vlSelf->warps_per_block));
    }
    if ((0x20000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x20000U & vlSelf->warps_per_block));
    }
    if ((0x40000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x40000U & vlSelf->warps_per_block));
    }
    if ((0x80000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x80000U & vlSelf->warps_per_block));
    }
    if ((0x100000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x100000U & vlSelf->warps_per_block));
    }
    if ((0x200000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x200000U & vlSelf->warps_per_block));
    }
    if ((0x400000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x400000U & vlSelf->warps_per_block));
    }
    if ((0x800000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x800000U & vlSelf->warps_per_block));
    }
    if ((0x1000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x1000000U & vlSelf->warps_per_block));
    }
    if ((0x2000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x2000000U & vlSelf->warps_per_block));
    }
    if ((0x4000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x4000000U & vlSelf->warps_per_block));
    }
    if ((0x8000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x8000000U & vlSelf->warps_per_block));
    }
    if ((0x10000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x10000000U & vlSelf->warps_per_block));
    }
    if ((0x20000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x20000000U & vlSelf->warps_per_block));
    }
    if ((0x40000000U & (vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x40000000U & vlSelf->warps_per_block));
    }
    if (((vlSelf->warps_per_block ^ vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->gpu__DOT____Vtogcov__warps_per_block 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__warps_per_block) 
               | (0x80000000U & vlSelf->warps_per_block));
    }
    if ((1U & (vlSelf->instruction_mem_read_data[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (1U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((2U & (vlSelf->instruction_mem_read_data[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (2U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((4U & (vlSelf->instruction_mem_read_data[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (4U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((8U & (vlSelf->instruction_mem_read_data[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (8U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x10U & (vlSelf->instruction_mem_read_data
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x10U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x20U & (vlSelf->instruction_mem_read_data
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x20U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x40U & (vlSelf->instruction_mem_read_data
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x40U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x80U & (vlSelf->instruction_mem_read_data
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x80U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x100U & (vlSelf->instruction_mem_read_data
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x100U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x200U & (vlSelf->instruction_mem_read_data
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x200U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x400U & (vlSelf->instruction_mem_read_data
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x400U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x800U & (vlSelf->instruction_mem_read_data
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x800U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x1000U & (vlSelf->instruction_mem_read_data
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x1000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x2000U & (vlSelf->instruction_mem_read_data
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x2000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x4000U & (vlSelf->instruction_mem_read_data
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x4000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x8000U & (vlSelf->instruction_mem_read_data
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x8000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x10000U & (vlSelf->instruction_mem_read_data
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x10000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x20000U & (vlSelf->instruction_mem_read_data
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x20000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x40000U & (vlSelf->instruction_mem_read_data
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x40000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x80000U & (vlSelf->instruction_mem_read_data
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x80000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x100000U & (vlSelf->instruction_mem_read_data
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x100000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x200000U & (vlSelf->instruction_mem_read_data
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x200000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x400000U & (vlSelf->instruction_mem_read_data
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x400000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x800000U & (vlSelf->instruction_mem_read_data
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x800000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->instruction_mem_read_data
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x1000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->instruction_mem_read_data
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x2000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->instruction_mem_read_data
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x4000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->instruction_mem_read_data
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x8000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->instruction_mem_read_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x10000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->instruction_mem_read_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x20000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->instruction_mem_read_data
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x40000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if (((vlSelf->instruction_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_data
                [0U]) | (0x80000000U & vlSelf->instruction_mem_read_data
                         [0U]));
    }
    if ((1U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (1U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((2U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (2U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((4U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (4U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((8U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (8U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x10U & (vlSelf->data_mem_read_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x10U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x20U & (vlSelf->data_mem_read_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x20U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x40U & (vlSelf->data_mem_read_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x40U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x80U & (vlSelf->data_mem_read_data[0U] ^ 
                  vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x80U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x100U & (vlSelf->data_mem_read_data[0U] ^ 
                   vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x100U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x200U & (vlSelf->data_mem_read_data[0U] ^ 
                   vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x200U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x400U & (vlSelf->data_mem_read_data[0U] ^ 
                   vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x400U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x800U & (vlSelf->data_mem_read_data[0U] ^ 
                   vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x800U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x1000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x1000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x2000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x2000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x4000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x4000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x8000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x8000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x10000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x10000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x20000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x20000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x40000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x40000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x80000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x80000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x100000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x100000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x200000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x200000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x400000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x400000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x800000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x800000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x1000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x2000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x4000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x8000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x10000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x20000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x40000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if (((vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->gpu__DOT____Vtogcov__data_mem_read_data[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__data_mem_read_data
                [0U]) | (0x80000000U & vlSelf->data_mem_read_data
                         [0U]));
    }
    if ((1U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (1U & vlSelf->data_mem_read_data[0U]));
    }
    if ((2U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (2U & vlSelf->data_mem_read_data[0U]));
    }
    if ((4U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (4U & vlSelf->data_mem_read_data[0U]));
    }
    if ((8U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (8U & vlSelf->data_mem_read_data[0U]));
    }
    if ((0x10U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x10U & vlSelf->data_mem_read_data[0U]));
    }
    if ((0x20U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x20U & vlSelf->data_mem_read_data[0U]));
    }
    if ((0x40U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x40U & vlSelf->data_mem_read_data[0U]));
    }
    if ((0x80U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x80U & vlSelf->data_mem_read_data[0U]));
    }
    if ((0x100U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x100U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x200U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x200U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x400U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x400U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x800U & (vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x800U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x1000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x1000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x2000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x2000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x4000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x4000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x8000U & (vlSelf->data_mem_read_data[0U] 
                    ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x8000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x10000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x10000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x20000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x20000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x40000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x40000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x80000U & (vlSelf->data_mem_read_data[0U] 
                     ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x80000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x100000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x100000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x200000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x200000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x400000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x400000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x800000U & (vlSelf->data_mem_read_data[0U] 
                      ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x800000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x1000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x1000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x2000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x2000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x4000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x4000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x8000000U & (vlSelf->data_mem_read_data[0U] 
                       ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x8000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x10000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x10000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x20000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x20000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((0x40000000U & (vlSelf->data_mem_read_data[0U] 
                        ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x40000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if (((vlSelf->data_mem_read_data[0U] ^ vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->gpu__DOT____Vtogcov__m_axi_rdata = 
            ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__m_axi_rdata) 
             | (0x80000000U & vlSelf->data_mem_read_data
                [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
               [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (1U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
               [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (2U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
               [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (4U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
               [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (8U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                  [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x10U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                  [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x20U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                  [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x40U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                  [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x80U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                   [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x100U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                   [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x200U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                   [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x400U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                   [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x800U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x1000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x2000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x4000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x8000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x10000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x20000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x40000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x80000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x100000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x200000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x400000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x800000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x1000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x2000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x4000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x8000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x10000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x20000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x40000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
    }
    if (((vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
          [0U] ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__core_block_id
                [0U]) | (0x80000000U & vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
                         [0U]));
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
    if ((1U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffffeU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (1U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((2U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffffdU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (2U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((4U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffffbU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (4U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((8U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffff7U & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (8U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x10U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffffefU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x10U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x20U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffffdfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x20U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x40U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffffbfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x40U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x80U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffff7fU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x80U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x100U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffeffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x100U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x200U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffdffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x200U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x400U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffffbffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x400U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x800U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x800U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffefffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x1000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffdfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x2000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffffbfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x4000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffff7fffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x8000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffeffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x10000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffdffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x20000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfffbffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x40000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x80000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffefffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x100000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffdfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x200000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xffbfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x400000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xff7fffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x800000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfeffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x1000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfdffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x2000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xfbffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x4000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x8000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xefffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x10000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xdfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x20000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0xbfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x40000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if (((vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done 
          ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done 
            = ((0x7fffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_done) 
               | (0x80000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done));
    }
    if ((1U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffffeU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (1U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((2U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffffdU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (2U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((4U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffffbU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (4U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((8U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
               ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffff7U & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (8U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x10U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffffefU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x10U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x20U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffffdfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x20U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x40U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffffbfU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x40U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x80U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                  ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffff7fU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x80U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x100U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffeffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x100U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x200U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffdffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x200U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x400U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffffbffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x400U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x800U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                   ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x800U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffefffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x1000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffdfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x2000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffffbfffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x4000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                    ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffff7fffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x8000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffeffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x10000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffdffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x20000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfffbffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x40000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                     ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x80000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffefffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x100000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffdfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x200000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xffbfffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x400000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                      ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xff7fffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x800000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfeffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x1000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfdffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x2000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xfbffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x4000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                       ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x8000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xefffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x10000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xdfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x20000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
                        ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0xbfffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x40000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
    }
    if (((vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched 
          ^ vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched 
            = ((0x7fffffffU & vlSelf->gpu__DOT__dispatcher_inst__DOT____Vtogcov__blocks_dispatched) 
               | (0x80000000U & vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched));
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
    if ((1U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (1U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((2U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (2U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((4U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (4U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((8U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (8U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x10U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x10U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x20U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x20U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x40U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x40U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x80U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x80U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x100U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x100U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x200U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x200U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x400U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x400U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x800U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x800U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x1000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x1000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x2000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x2000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x4000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x4000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x8000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x8000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x10000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x10000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x20000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x20000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x40000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x40000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x80000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x80000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x100000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x100000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x200000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x200000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x400000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x400000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x800000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x800000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x1000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x2000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x4000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x8000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x10000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x20000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x40000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if (((vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__scalar_lsu_out) 
               | (0x80000000U & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__vector_to_scalar_data
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__fetcher_inst__DOT____Vtogcov__instruction) 
               | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
                        ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate 
          ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__decoded_immediate) 
               | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address;
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
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s 
        = ((0x7fe0U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       >> 0xeU)) | (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b 
        = ((0xffc0U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                       >> 0xdU)) | ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                              >> 8U)) 
                                    | (0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction)));
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0x10U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_data;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0x10U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0x10U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_read_address;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask[0U] 
        = (0xffffU & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
           [0x1fU]);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask[0U] 
        = (0xffffU & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers
           [0x1fU]);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
        = ((0x3fffc00U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                          >> 3U)) | (0x3ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.lsu_state;
    vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address;
    vlSelf->gpu__DOT__core_block_id[0U] = vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id
        [0U];
    vlSelf->gpu__DOT__fetcher_read_data_core[0U] = 
        vlSelf->instruction_mem_read_data[0U];
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
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.lsu_out;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.lsu_out;
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
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead;
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs1[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[1U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[2U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[3U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[4U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[5U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[6U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[7U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[8U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[9U] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xaU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xbU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xcU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xdU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xeU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs1[0xfU] 
        = vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1
        [0xfU];
    if (((IData)(vlSelf->instruction_mem_read_valid) 
         ^ (IData)(vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_valid))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->gpu__DOT____Vtogcov__instruction_mem_read_valid 
            = vlSelf->instruction_mem_read_valid;
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_write_enable
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_write_enable
         [0U])) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_write_enable[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_write_enable
            [0U];
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingWrite_flag
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingWrite_flag
         [0U])) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingWrite_flag[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingWrite_flag
            [0U];
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_branch
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_branch
         [0U])) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_branch[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_branch
            [0U];
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_halt
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_halt
         [0U])) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_halt[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_halt
            [0U];
    }
    if (((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done) 
         ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__all_warps_done))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__all_warps_done 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done;
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state[0U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state[0U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetcher_state
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state
                         [0U]));
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_read_enable_per_warp
         [0U])) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_read_enable_per_warp[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp
            [0U];
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_read_enable 
        = ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)) 
           & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp
           [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]);
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_write_enable_per_warp
         [0U])) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_mem_write_enable_per_warp[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp
            [0U];
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_write_enable 
        = ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)) 
           & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp
           [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]);
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux[0U] 
            = ((6U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux[0U] 
            = ((5U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux[0U] 
            = ((3U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_reg_input_mux
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
                         [0U]));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__decoded_reg_write_enable 
        = ((IData)(gpu__DOT__mcu_inst__DOT__core_instance__DOT____VdfgTmp_hb1713a12__0) 
           & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__decoded_reg_write_enable 
        = ((~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite)) 
           & (IData)(gpu__DOT__mcu_inst__DOT__core_instance__DOT____VdfgTmp_hb1713a12__0));
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state 
        = ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
            ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
           [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]
            : 0U);
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state 
            = ((0xeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state 
            = ((0xdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state 
            = ((0xbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state 
            = ((7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__current_warp_state)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state)));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[0U] 
            = ((0x1eU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[0U] 
            = ((0x1dU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[0U] 
            = ((0x1bU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[0U] 
            = ((0x17U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address[0U] 
            = ((0xfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rd_address
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[0U] 
            = ((0x1eU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[0U] 
            = ((0x1dU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[0U] 
            = ((0x1bU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[0U] 
            = ((0x17U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address[0U] 
            = ((0xfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs1_address
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[0U] 
            = ((0x1eU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[0U] 
            = ((0x1dU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[0U] 
            = ((0x1bU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[0U] 
            = ((0x17U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address[0U] 
            = ((0xfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_rs2_address
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address
                         [0U]));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7ffeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7ffdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7ffbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7ff7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7fefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7fdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7fbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7f7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x100U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7effU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x100U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x200U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7dffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x200U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x400U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x7bffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x400U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x800U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x77ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x800U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x6fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x1000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x5fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x2000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s 
            = ((0x3fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_s)) 
               | (0x4000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s)));
    }
    if ((1U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfffeU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (1U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((2U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfffdU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (2U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((4U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfffbU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (4U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((8U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
               ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfff7U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (8U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x10U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xffefU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x10U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x20U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xffdfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x20U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x40U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xffbfU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x40U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x80U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                  ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xff7fU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x80U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x100U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfeffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x100U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x200U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfdffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x200U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x400U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xfbffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x400U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x800U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                   ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xf7ffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x800U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x1000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xefffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x1000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x2000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xdfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x2000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x4000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0xbfffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x4000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
    if ((0x8000U & ((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b) 
                    ^ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b 
            = ((0x7fffU & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_b)) 
               | (0x8000U & (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b)));
    }
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
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                    ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3ff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3feffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3fbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                     ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3f7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3efffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3dfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x3bfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                      ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x37fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x2ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j 
                       ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j 
            = ((0x1ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT____Vtogcov__imm_j) 
               | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__fetched_instruction
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [1U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[1U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [1U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [1U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [1U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[1U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [1U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [1U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [2U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[2U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [2U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [2U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [2U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[2U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [2U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [2U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [3U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[3U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [3U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [3U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [3U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[3U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [3U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [3U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [4U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[4U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [4U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [4U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [4U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[4U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [4U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [4U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [5U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[5U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [5U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [5U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [5U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[5U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [5U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [5U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [6U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[6U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [6U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [6U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [6U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[6U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [6U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [6U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [7U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[7U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [7U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [7U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [7U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[7U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [7U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [7U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [8U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[8U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [8U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [8U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [8U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[8U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [8U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [8U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [9U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[9U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [9U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [9U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [9U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[9U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [9U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                         [9U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xaU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xaU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xaU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xaU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xaU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xaU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xaU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xaU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xbU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xbU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xbU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xbU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xbU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xbU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xbU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xbU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xcU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xcU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xcU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xcU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xcU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xcU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xcU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xcU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xdU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xdU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xdU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xdU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xdU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xdU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xdU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xdU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xeU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xeU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xeU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xeU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xeU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xeU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xeU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xeU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xfU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xfU] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xfU]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xfU]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
               [0xfU] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state[0xfU] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__lsu_state
                [0xfU]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                           [0xfU]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xfbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xf7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0xbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address[0U] 
            = ((0x7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__instruction_mem_read_address
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
                         [0U]));
    }
    vlSelf->gpu__DOT____Vcellout__mcu_inst__fetcher_read_address_core[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address
        [0U];
    if ((1U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (1U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (2U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (4U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
               [0U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (8U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x10U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x20U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x40U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x80U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x100U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x200U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x400U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x800U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x1000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x2000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x4000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x8000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x10000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x20000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x40000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x80000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x100000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x200000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x400000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x800000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__core_block_id[0U] ^ vlSelf->gpu__DOT____Vtogcov__core_block_id
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->gpu__DOT____Vtogcov__core_block_id[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__core_block_id
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__core_block_id
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (1U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (2U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (4U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__core_block_id[0U] 
               ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (8U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x10U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x20U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x40U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__core_block_id[0U] 
                  ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x80U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x100U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x200U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x400U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__core_block_id[0U] 
                   ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x800U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x1000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x2000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x4000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__core_block_id
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x8000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x10000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x20000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x40000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__core_block_id
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x80000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x100000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x200000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x400000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__core_block_id
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x800000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x1000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x2000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x4000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__core_block_id
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x8000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x10000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x20000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__core_block_id
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x40000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if (((vlSelf->gpu__DOT__core_block_id[0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT____Vtogcov__block_id) 
               | (0x80000000U & vlSelf->gpu__DOT__core_block_id
                  [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__fetcher_read_data_core
               [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
               [0U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (1U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__fetcher_read_data_core
               [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
               [0U]))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (2U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__fetcher_read_data_core
               [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
               [0U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (4U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__fetcher_read_data_core
               [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
               [0U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (8U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__fetcher_read_data_core
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x10U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__fetcher_read_data_core
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x20U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__fetcher_read_data_core
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x40U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__fetcher_read_data_core
                  [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x80U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__fetcher_read_data_core
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x100U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__fetcher_read_data_core
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x200U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__fetcher_read_data_core
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x400U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__fetcher_read_data_core
                   [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x800U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x1000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x2000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x4000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                    [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x8000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x10000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x20000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x40000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                     [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x80000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x100000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x200000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x400000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                      [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x800000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                       [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__fetcher_read_data_core
                        [0U] ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__fetcher_read_data_core[0U] 
          ^ vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT____Vtogcov__fetcher_read_data_core
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__fetcher_read_data_core
                         [0U]));
    }
    vlSelf->gpu__DOT____Vcellinp__mcu_inst__fetcher_read_data_core[0U] 
        = vlSelf->gpu__DOT__fetcher_read_data_core[0U];
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
    vlSelf->gpu__DOT__mcu_inst__DOT__next_state = vlSelf->gpu__DOT__mcu_inst__DOT__state;
    vlSelf->gpu__DOT__m_axi_awvalid = 0U;
    vlSelf->gpu__DOT__m_axi_arvalid = 0U;
    if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
    } else {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask = 0U;
    }
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
                            goto __Vlabel2;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel2: ;
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
                            goto __Vlabel3;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel3: ;
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
                            goto __Vlabel4;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel4: ;
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
                            goto __Vlabel5;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel5: ;
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
                            goto __Vlabel6;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel6: ;
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
                            goto __Vlabel7;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel7: ;
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
                            goto __Vlabel8;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel8: ;
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
                            goto __Vlabel9;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel9: ;
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
                            goto __Vlabel10;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel10: ;
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
                            goto __Vlabel11;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel11: ;
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
                            goto __Vlabel12;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel12: ;
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
                            goto __Vlabel13;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel13: ;
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
                            goto __Vlabel14;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel14: ;
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
                            goto __Vlabel15;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel15: ;
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
                            goto __Vlabel16;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel16: ;
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
                            goto __Vlabel17;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel17: ;
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
                            goto __Vlabel18;
                        }
                        ++(vlSymsp->__Vcoverage[1095]);
                        vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                            = ((IData)(1U) + vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                    }
                    __Vlabel18: ;
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
    if ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))) {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
            [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp];
    } else {
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM = 0U;
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction = 0U;
    }
    ++(vlSymsp->__Vcoverage[1124]);
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__lsu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__lsu_out[0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out
        [0xfU];
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffffeU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffffdU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffffbU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffff7U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffffefU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x20U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffffdfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x20U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x40U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffffbfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x40U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x80U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffff7fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x80U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x100U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffeffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x100U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x200U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffdffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x200U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x400U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffffbffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x400U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x800U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                   [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffff7ffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x800U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x1000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffefffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x1000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x2000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffdfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x2000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x4000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffffbfffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x4000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x8000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                    [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffff7fffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x8000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x10000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffeffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x10000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x20000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffdffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x20000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x40000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfffbffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x40000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x80000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                     [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfff7ffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x80000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x100000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffefffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x100000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x200000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffdfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x200000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x400000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xffbfffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x400000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x800000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                      [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xff7fffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x800000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfeffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x1000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfdffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x2000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xfbffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x4000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                       [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xf7ffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x8000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xefffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x10000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xdfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x20000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                        [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0xbfffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x40000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if (((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
          [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate[0U] 
            = ((0x7fffffffU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_immediate
                [0U]) | (0x80000000U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate
                         [0U]));
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[0U] 
            = ((0x1eU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[0U] 
            = ((0x1dU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                         [0U]));
    }
    if ((4U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[0U] 
            = ((0x1bU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                [0U]) | (4U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                         [0U]));
    }
    if ((8U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[0U] 
            = ((0x17U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                [0U]) | (8U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                         [0U]));
    }
    if ((0x10U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                  [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction[0U] 
            = ((0xfU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_alu_instruction
                [0U]) | (0x10U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction
                         [0U]));
    }
    if ((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction
         [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_scalar_instruction
         [0U])) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__decoded_scalar_instruction[0U] 
            = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction
            [0U];
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable 
        = ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)) 
           & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction
           [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]);
    if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
          ? (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
             [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
          : 0U)) {
        if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
              ? (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                 [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
              : 0U)) {
            ++(vlSymsp->__Vcoverage[1722]);
            ++(vlSymsp->__Vcoverage[1728]);
            ++(vlSymsp->__Vcoverage[1734]);
            ++(vlSymsp->__Vcoverage[1740]);
            ++(vlSymsp->__Vcoverage[1746]);
            ++(vlSymsp->__Vcoverage[1752]);
            ++(vlSymsp->__Vcoverage[1758]);
            ++(vlSymsp->__Vcoverage[1764]);
            ++(vlSymsp->__Vcoverage[1770]);
            ++(vlSymsp->__Vcoverage[1776]);
            ++(vlSymsp->__Vcoverage[1782]);
            ++(vlSymsp->__Vcoverage[1788]);
            ++(vlSymsp->__Vcoverage[1794]);
            ++(vlSymsp->__Vcoverage[1800]);
            ++(vlSymsp->__Vcoverage[1806]);
            ++(vlSymsp->__Vcoverage[1812]);
            ++(vlSymsp->__Vcoverage[1818]);
        }
        if ((1U & (~ ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
                       ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                      [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]
                       : 0U)))) {
            ++(vlSymsp->__Vcoverage[1721]);
            ++(vlSymsp->__Vcoverage[1727]);
            ++(vlSymsp->__Vcoverage[1733]);
            ++(vlSymsp->__Vcoverage[1739]);
            ++(vlSymsp->__Vcoverage[1745]);
            ++(vlSymsp->__Vcoverage[1751]);
            ++(vlSymsp->__Vcoverage[1757]);
            ++(vlSymsp->__Vcoverage[1763]);
            ++(vlSymsp->__Vcoverage[1769]);
            ++(vlSymsp->__Vcoverage[1775]);
            ++(vlSymsp->__Vcoverage[1781]);
            ++(vlSymsp->__Vcoverage[1787]);
            ++(vlSymsp->__Vcoverage[1793]);
            ++(vlSymsp->__Vcoverage[1799]);
            ++(vlSymsp->__Vcoverage[1805]);
            ++(vlSymsp->__Vcoverage[1811]);
            ++(vlSymsp->__Vcoverage[1817]);
        }
    }
    if ((1U & (~ (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
                    ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                   [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]
                    : 0U) >> 1U)))) {
        if (((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
              ? (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                 [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp])
              : 0U)) {
            ++(vlSymsp->__Vcoverage[1720]);
            ++(vlSymsp->__Vcoverage[1726]);
            ++(vlSymsp->__Vcoverage[1732]);
            ++(vlSymsp->__Vcoverage[1738]);
            ++(vlSymsp->__Vcoverage[1744]);
            ++(vlSymsp->__Vcoverage[1750]);
            ++(vlSymsp->__Vcoverage[1756]);
            ++(vlSymsp->__Vcoverage[1762]);
            ++(vlSymsp->__Vcoverage[1768]);
            ++(vlSymsp->__Vcoverage[1774]);
            ++(vlSymsp->__Vcoverage[1780]);
            ++(vlSymsp->__Vcoverage[1786]);
            ++(vlSymsp->__Vcoverage[1792]);
            ++(vlSymsp->__Vcoverage[1798]);
            ++(vlSymsp->__Vcoverage[1804]);
            ++(vlSymsp->__Vcoverage[1810]);
            ++(vlSymsp->__Vcoverage[1816]);
        }
        if ((1U & (~ ((0U >= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp))
                       ? vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                      [vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp]
                       : 0U)))) {
            ++(vlSymsp->__Vcoverage[1719]);
            ++(vlSymsp->__Vcoverage[1725]);
            ++(vlSymsp->__Vcoverage[1731]);
            ++(vlSymsp->__Vcoverage[1737]);
            ++(vlSymsp->__Vcoverage[1743]);
            ++(vlSymsp->__Vcoverage[1749]);
            ++(vlSymsp->__Vcoverage[1755]);
            ++(vlSymsp->__Vcoverage[1761]);
            ++(vlSymsp->__Vcoverage[1767]);
            ++(vlSymsp->__Vcoverage[1773]);
            ++(vlSymsp->__Vcoverage[1779]);
            ++(vlSymsp->__Vcoverage[1785]);
            ++(vlSymsp->__Vcoverage[1791]);
            ++(vlSymsp->__Vcoverage[1797]);
            ++(vlSymsp->__Vcoverage[1803]);
            ++(vlSymsp->__Vcoverage[1809]);
            ++(vlSymsp->__Vcoverage[1815]);
        }
    }
    if ((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag[0U] 
            = ((2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag
                [0U]) | (1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                         [0U]));
    }
    if ((2U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
               [0U] ^ vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag[0U] 
            = ((1U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vtogcov__floatingRead_flag
                [0U]) | (2U & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag
                         [0U]));
    }
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xeU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2[0U][0xfU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__rs2
        [0xfU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][1U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [1U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][2U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [2U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][3U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [3U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][4U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [4U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][5U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [5U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][6U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [6U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][7U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [7U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][8U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [8U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][9U] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [9U];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0xaU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0xaU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0xbU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0xbU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0xcU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0xcU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0xdU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0xdU];
    vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2[0U][0xeU] 
        = vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__reg_file_inst__rs2
        [0xeU];
}
