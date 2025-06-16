// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+1644,"reset", false,-1);
    tracep->declBus(c+1645,"base_instr", false,-1, 31,0);
    tracep->declBus(c+1646,"base_data", false,-1, 31,0);
    tracep->declBus(c+1647,"num_blocks", false,-1, 31,0);
    tracep->declBus(c+1648,"warps_per_block", false,-1, 31,0);
    tracep->declBit(c+1649,"execution_start", false,-1);
    tracep->declBit(c+1650,"execution_done", false,-1);
    tracep->declBus(c+1651,"instruction_mem_read_valid", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1652+i*1,"instruction_mem_read_address", true,(i+0), 15,0);
    }
    tracep->declBus(c+1653,"instruction_mem_read_ready", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1654+i*1,"instruction_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1655,"data_mem_read_valid", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1656+i*1,"data_mem_read_address", true,(i+0), 16,0);
    }
    tracep->declBit(c+1657,"data_mem_read_ready", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1658+i*1,"data_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1659,"data_mem_write_valid", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1660+i*1,"data_mem_write_address", true,(i+0), 16,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1661+i*1,"data_mem_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1662,"data_mem_write_ready", false,-1);
    tracep->pushNamePrefix("gpu ");
    tracep->declBus(c+1666,"DATA_MEM_NUM_CHANNELS", false,-1, 31,0);
    tracep->declBus(c+1666,"INSTRUCTION_MEM_NUM_CHANNELS", false,-1, 31,0);
    tracep->declBus(c+1666,"NUM_CORES", false,-1, 31,0);
    tracep->declBus(c+1666,"WARPS_PER_CORE", false,-1, 31,0);
    tracep->declBus(c+1667,"THREADS_PER_WARP", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+1644,"reset", false,-1);
    tracep->declBus(c+1645,"base_instr", false,-1, 31,0);
    tracep->declBus(c+1646,"base_data", false,-1, 31,0);
    tracep->declBus(c+1647,"num_blocks", false,-1, 31,0);
    tracep->declBus(c+1648,"warps_per_block", false,-1, 31,0);
    tracep->declBit(c+1649,"execution_start", false,-1);
    tracep->declBit(c+1650,"execution_done", false,-1);
    tracep->declBus(c+1651,"instruction_mem_read_valid", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1652+i*1,"instruction_mem_read_address", true,(i+0), 15,0);
    }
    tracep->declBus(c+1653,"instruction_mem_read_ready", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1654+i*1,"instruction_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1655,"data_mem_read_valid", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1656+i*1,"data_mem_read_address", true,(i+0), 16,0);
    }
    tracep->declBit(c+1657,"data_mem_read_ready", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1658+i*1,"data_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1659,"data_mem_write_valid", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1660+i*1,"data_mem_write_address", true,(i+0), 16,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1661+i*1,"data_mem_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+1662,"data_mem_write_ready", false,-1);
    tracep->declArray(c+1471,"kernel_config_reg", false,-1, 96,0);
    tracep->declBit(c+1475,"start_execution", false,-1);
    tracep->declBus(c+83,"core_done", false,-1, 0,0);
    tracep->declBus(c+84,"core_start", false,-1, 0,0);
    tracep->declBus(c+85,"core_reset", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+86+i*1,"core_block_id", true,(i+0), 31,0);
    }
    tracep->declBus(c+1668,"NUM_LSUS_PER_CORE", false,-1, 31,0);
    tracep->declBus(c+1669,"lsu_read_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1670+i*1,"lsu_read_address", true,(i+0), 16,0);
    }
    tracep->declBus(c+1687,"lsu_read_ready", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1688+i*1,"lsu_read_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1705,"lsu_write_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1706+i*1,"lsu_write_address", true,(i+0), 16,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1723+i*1,"lsu_write_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1740,"lsu_write_ready", false,-1, 16,0);
    tracep->declBus(c+37,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+38,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1663,"m_axi_rdata", false,-1, 31,0);
    tracep->declBit(c+40,"m_axi_awvalid", false,-1);
    tracep->declBit(c+41,"m_axi_wvalid", false,-1);
    tracep->declBit(c+42,"m_axi_arvalid", false,-1);
    tracep->declBit(c+1662,"m_axi_bvalid_to_mcu", false,-1);
    tracep->declBit(c+1657,"m_axi_rvalid_to_mcu", false,-1);
    tracep->declBus(c+87,"fetcher_read_valid_core", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+88+i*1,"fetcher_read_address_core", true,(i+0), 15,0);
    }
    tracep->declBus(c+1653,"fetcher_read_ready_core", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+33+i*1,"fetcher_read_data_core", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("dispatcher_inst ");
    tracep->declBus(c+1666,"NUM_CORES", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+1644,"reset", false,-1);
    tracep->declBit(c+1475,"start", false,-1);
    tracep->declArray(c+1471,"kernel_config", false,-1, 96,0);
    tracep->declBus(c+83,"core_done", false,-1, 0,0);
    tracep->declBus(c+84,"core_start", false,-1, 0,0);
    tracep->declBus(c+85,"core_reset", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+89+i*1,"core_block_id", true,(i+0), 31,0);
    }
    tracep->declBit(c+1650,"done", false,-1);
    tracep->declBus(c+1476,"total_blocks", false,-1, 31,0);
    tracep->declBus(c+90,"blocks_done", false,-1, 31,0);
    tracep->declBus(c+91,"blocks_dispatched", false,-1, 31,0);
    tracep->declBit(c+92,"start_execution", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+93,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+94,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+95,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+96,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcu_inst ");
    tracep->declBus(c+1741,"THREADS_PER_WARP", false,-1, 31,0);
    tracep->declBus(c+1742,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1742,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1743,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1743,"WARPS_PER_CORE", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+1644,"reset", false,-1);
    tracep->declBit(c+85,"core_reset", false,-1);
    tracep->declBit(c+84,"core_start", false,-1);
    tracep->declBit(c+83,"core_done", false,-1);
    tracep->declBus(c+97,"block_id", false,-1, 31,0);
    tracep->declArray(c+1471,"kernel_config", false,-1, 96,0);
    tracep->declBus(c+1653,"fetcher_read_ready_core", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+34+i*1,"fetcher_read_data_core", true,(i+0), 31,0);
    }
    tracep->declBus(c+87,"fetcher_read_valid_core", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+98+i*1,"fetcher_read_address_core", true,(i+0), 15,0);
    }
    tracep->declBit(c+1477,"mcu_is_busy", false,-1);
    tracep->declBus(c+43,"m_axi_awid", false,-1, 0,0);
    tracep->declBus(c+37,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+44,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+45,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+46,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+40,"m_axi_awvalid", false,-1);
    tracep->declBit(c+1662,"m_axi_awready", false,-1);
    tracep->declBus(c+39,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"m_axi_wlast", false,-1);
    tracep->declBit(c+41,"m_axi_wvalid", false,-1);
    tracep->declBit(c+1662,"m_axi_wready", false,-1);
    tracep->declBus(c+1744,"m_axi_bid", false,-1, 0,0);
    tracep->declBus(c+1745,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1662,"m_axi_bvalid", false,-1);
    tracep->declBit(c+49,"m_axi_bready", false,-1);
    tracep->declBus(c+50,"m_axi_arid", false,-1, 0,0);
    tracep->declBus(c+38,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+51,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+52,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+53,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+42,"m_axi_arvalid", false,-1);
    tracep->declBit(c+1657,"m_axi_arready", false,-1);
    tracep->declBus(c+1746,"m_axi_rid", false,-1, 0,0);
    tracep->declBus(c+1663,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1747,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1748,"m_axi_rlast", false,-1);
    tracep->declBit(c+1657,"m_axi_rvalid", false,-1);
    tracep->declBit(c+54,"m_axi_rready", false,-1);
    tracep->declBus(c+1668,"thread_length", false,-1, 31,0);
    tracep->declBus(c+1590,"consumer_read_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1591+i*1,"consumer_read_address", true,(i+0), 16,0);
    }
    tracep->declBus(c+1478,"consumer_read_ready", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1479+i*1,"consumer_read_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1608,"consumer_write_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1609+i*1,"consumer_write_address", true,(i+0), 16,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1626+i*1,"consumer_write_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+55,"consumer_write_ready", false,-1, 16,0);
    tracep->declBus(c+1667,"SCALAR_LSU_IDX", false,-1, 31,0);
    tracep->declBus(c+1749,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+1496,"state", false,-1, 3,0);
    tracep->declBus(c+56,"next_state", false,-1, 3,0);
    tracep->declBus(c+57,"burst_start_idx", false,-1, 4,0);
    tracep->declBus(c+58,"burst_len_count", false,-1, 7,0);
    tracep->declBus(c+1497,"burst_data_counter", false,-1, 7,0);
    tracep->declBus(c+1498,"req_valid", false,-1, 16,0);
    tracep->declBus(c+1499,"req_is_write", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1500+i*1,"req_addr", true,(i+0), 16,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1517+i*1,"req_wdata", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("core_instance ");
    tracep->declBus(c+1666,"WARPS_PER_CORE", false,-1, 31,0);
    tracep->declBus(c+1667,"THREADS_PER_WARP", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+84,"start", false,-1);
    tracep->declBit(c+83,"done", false,-1);
    tracep->declBus(c+97,"block_id", false,-1, 31,0);
    tracep->declArray(c+1471,"kernel_config", false,-1, 96,0);
    tracep->declBus(c+1653,"instruction_mem_read_ready", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+35+i*1,"instruction_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+87,"instruction_mem_read_valid", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+99+i*1,"instruction_mem_read_address", true,(i+0), 15,0);
    }
    tracep->declBus(c+1590,"data_mem_read_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+100+i*1,"data_mem_read_address", true,(i+0), 16,0);
    }
    tracep->declBus(c+1478,"data_mem_read_ready", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1534+i*1,"data_mem_read_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+1608,"data_mem_write_valid", false,-1, 16,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+117+i*1,"data_mem_write_address", true,(i+0), 16,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+134+i*1,"data_mem_write_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+55,"data_mem_write_ready", false,-1, 16,0);
    tracep->declBus(c+1668,"NUM_LSUS", false,-1, 31,0);
    tracep->declBus(c+1666,"WARP_INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"current_warp", false,-1, 0,0);
    tracep->pushNamePrefix("warp_state");
    tracep->declBus(c+152,"[0]", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetcher_state");
    tracep->declBus(c+153,"[0]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+154,"current_warp_state", false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+155+i*1,"fetched_instruction", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+156+i*1,"pc", true,(i+0), 15,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+157+i*1,"next_pc", true,(i+0), 15,0);
    }
    tracep->declBit(c+158,"start_execution", false,-1);
    tracep->declBus(c+1551,"num_warps", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+159+i*1,"decoded_reg_write_enable", true,(i+0));
    }
    tracep->pushNamePrefix("decoded_reg_input_mux");
    tracep->declBus(c+160,"[0]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+161+i*1,"decoded_immediate", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+162+i*1,"decoded_branch", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+163+i*1,"decoded_scalar_instruction", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+164+i*1,"decoded_rd_address", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+165+i*1,"decoded_rs1_address", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+166+i*1,"decoded_rs2_address", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+167+i*1,"decoded_alu_instruction", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+168+i*1,"decoded_halt", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+169+i*1,"floatingRead_flag", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+170+i*1,"floatingWrite_flag", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+171+i*1,"decoded_mem_read_enable_per_warp", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+172+i*1,"decoded_mem_write_enable_per_warp", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+173+i*1,"scalar_int_rs1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+174+i*1,"scalar_int_rs2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+175+i*1,"scalar_float_rs1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+176+i*1,"scalar_float_rs2", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("vector_int_rs1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+177,"[0]", false,-1, 31,0);
    tracep->declBus(c+178,"[1]", false,-1, 31,0);
    tracep->declBus(c+179,"[2]", false,-1, 31,0);
    tracep->declBus(c+180,"[3]", false,-1, 31,0);
    tracep->declBus(c+181,"[4]", false,-1, 31,0);
    tracep->declBus(c+182,"[5]", false,-1, 31,0);
    tracep->declBus(c+183,"[6]", false,-1, 31,0);
    tracep->declBus(c+184,"[7]", false,-1, 31,0);
    tracep->declBus(c+185,"[8]", false,-1, 31,0);
    tracep->declBus(c+186,"[9]", false,-1, 31,0);
    tracep->declBus(c+187,"[10]", false,-1, 31,0);
    tracep->declBus(c+188,"[11]", false,-1, 31,0);
    tracep->declBus(c+189,"[12]", false,-1, 31,0);
    tracep->declBus(c+190,"[13]", false,-1, 31,0);
    tracep->declBus(c+191,"[14]", false,-1, 31,0);
    tracep->declBus(c+192,"[15]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_int_rs2");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+193,"[0]", false,-1, 31,0);
    tracep->declBus(c+194,"[1]", false,-1, 31,0);
    tracep->declBus(c+195,"[2]", false,-1, 31,0);
    tracep->declBus(c+196,"[3]", false,-1, 31,0);
    tracep->declBus(c+197,"[4]", false,-1, 31,0);
    tracep->declBus(c+198,"[5]", false,-1, 31,0);
    tracep->declBus(c+199,"[6]", false,-1, 31,0);
    tracep->declBus(c+200,"[7]", false,-1, 31,0);
    tracep->declBus(c+201,"[8]", false,-1, 31,0);
    tracep->declBus(c+202,"[9]", false,-1, 31,0);
    tracep->declBus(c+203,"[10]", false,-1, 31,0);
    tracep->declBus(c+204,"[11]", false,-1, 31,0);
    tracep->declBus(c+205,"[12]", false,-1, 31,0);
    tracep->declBus(c+206,"[13]", false,-1, 31,0);
    tracep->declBus(c+207,"[14]", false,-1, 31,0);
    tracep->declBus(c+208,"[15]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_float_rs1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+209,"[0]", false,-1, 31,0);
    tracep->declBus(c+210,"[1]", false,-1, 31,0);
    tracep->declBus(c+211,"[2]", false,-1, 31,0);
    tracep->declBus(c+212,"[3]", false,-1, 31,0);
    tracep->declBus(c+213,"[4]", false,-1, 31,0);
    tracep->declBus(c+214,"[5]", false,-1, 31,0);
    tracep->declBus(c+215,"[6]", false,-1, 31,0);
    tracep->declBus(c+216,"[7]", false,-1, 31,0);
    tracep->declBus(c+217,"[8]", false,-1, 31,0);
    tracep->declBus(c+218,"[9]", false,-1, 31,0);
    tracep->declBus(c+219,"[10]", false,-1, 31,0);
    tracep->declBus(c+220,"[11]", false,-1, 31,0);
    tracep->declBus(c+221,"[12]", false,-1, 31,0);
    tracep->declBus(c+222,"[13]", false,-1, 31,0);
    tracep->declBus(c+223,"[14]", false,-1, 31,0);
    tracep->declBus(c+224,"[15]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_float_rs2");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+225,"[0]", false,-1, 31,0);
    tracep->declBus(c+226,"[1]", false,-1, 31,0);
    tracep->declBus(c+227,"[2]", false,-1, 31,0);
    tracep->declBus(c+228,"[3]", false,-1, 31,0);
    tracep->declBus(c+229,"[4]", false,-1, 31,0);
    tracep->declBus(c+230,"[5]", false,-1, 31,0);
    tracep->declBus(c+231,"[6]", false,-1, 31,0);
    tracep->declBus(c+232,"[7]", false,-1, 31,0);
    tracep->declBus(c+233,"[8]", false,-1, 31,0);
    tracep->declBus(c+234,"[9]", false,-1, 31,0);
    tracep->declBus(c+235,"[10]", false,-1, 31,0);
    tracep->declBus(c+236,"[11]", false,-1, 31,0);
    tracep->declBus(c+237,"[12]", false,-1, 31,0);
    tracep->declBus(c+238,"[13]", false,-1, 31,0);
    tracep->declBus(c+239,"[14]", false,-1, 31,0);
    tracep->declBus(c+240,"[15]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+241+i*1,"warp_execution_mask", true,(i+0), 15,0);
    }
    tracep->declBit(c+1664,"all_warps_done", false,-1);
    tracep->declBit(c+242,"any_lsu_waiting", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+243+i*1,"final_op1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+259+i*1,"final_op2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+275+i*1,"alu_out", true,(i+0), 31,0);
    }
    tracep->declBus(c+291,"scalar_alu_out", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+292+i*1,"lsu_out", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("lsu_state");
    tracep->declBus(c+308,"[0]", false,-1, 1,0);
    tracep->declBus(c+309,"[1]", false,-1, 1,0);
    tracep->declBus(c+310,"[2]", false,-1, 1,0);
    tracep->declBus(c+311,"[3]", false,-1, 1,0);
    tracep->declBus(c+312,"[4]", false,-1, 1,0);
    tracep->declBus(c+313,"[5]", false,-1, 1,0);
    tracep->declBus(c+314,"[6]", false,-1, 1,0);
    tracep->declBus(c+315,"[7]", false,-1, 1,0);
    tracep->declBus(c+316,"[8]", false,-1, 1,0);
    tracep->declBus(c+317,"[9]", false,-1, 1,0);
    tracep->declBus(c+318,"[10]", false,-1, 1,0);
    tracep->declBus(c+319,"[11]", false,-1, 1,0);
    tracep->declBus(c+320,"[12]", false,-1, 1,0);
    tracep->declBus(c+321,"[13]", false,-1, 1,0);
    tracep->declBus(c+322,"[14]", false,-1, 1,0);
    tracep->declBus(c+323,"[15]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+324,"scalar_lsu_out", false,-1, 31,0);
    tracep->declBus(c+325,"scalar_lsu_state", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+326+i*1,"vector_to_scalar_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+327,"current_warp_execution_mask", false,-1, 15,0);
    tracep->declBus(c+328,"scalar_op1", false,-1, 31,0);
    tracep->declBus(c+329,"scalar_op2", false,-1, 31,0);
    tracep->declBus(c+330,"scalar_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+331,"scalar_float_alu_result", false,-1, 31,0);
    tracep->declBit(c+332,"is_scalar_float_op", false,-1);
    tracep->declBit(c+333,"is_scalar_int_op", false,-1);
    tracep->declBit(c+334,"more_fadd", false,-1);
    tracep->declBit(c+335,"less_beqz", false,-1);
    tracep->pushNamePrefix("g_operand_mux ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[0] ");
    tracep->declBus(c+336,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+337,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[10] ");
    tracep->declBus(c+338,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+339,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[11] ");
    tracep->declBus(c+340,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+341,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[12] ");
    tracep->declBus(c+342,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+343,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[13] ");
    tracep->declBus(c+344,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+345,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[14] ");
    tracep->declBus(c+346,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+347,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[15] ");
    tracep->declBus(c+348,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+349,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[1] ");
    tracep->declBus(c+350,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+351,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[2] ");
    tracep->declBus(c+352,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+353,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[3] ");
    tracep->declBus(c+354,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+355,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[4] ");
    tracep->declBus(c+356,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+357,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[5] ");
    tracep->declBus(c+358,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+359,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[6] ");
    tracep->declBus(c+360,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+361,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[7] ");
    tracep->declBus(c+362,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+363,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[8] ");
    tracep->declBus(c+364,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+365,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_operand_mux[9] ");
    tracep->declBus(c+366,"vector_op1", false,-1, 31,0);
    tracep->declBus(c+367,"vector_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[0] ");
    tracep->declBit(c+368,"t_enable", false,-1);
    tracep->declBit(c+369,"is_vector_float_op", false,-1);
    tracep->declBit(c+370,"is_vector_int_op", false,-1);
    tracep->declBus(c+371,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+372,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[10] ");
    tracep->declBit(c+373,"t_enable", false,-1);
    tracep->declBit(c+374,"is_vector_float_op", false,-1);
    tracep->declBit(c+375,"is_vector_int_op", false,-1);
    tracep->declBus(c+376,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+377,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[11] ");
    tracep->declBit(c+378,"t_enable", false,-1);
    tracep->declBit(c+379,"is_vector_float_op", false,-1);
    tracep->declBit(c+380,"is_vector_int_op", false,-1);
    tracep->declBus(c+381,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+382,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[12] ");
    tracep->declBit(c+383,"t_enable", false,-1);
    tracep->declBit(c+384,"is_vector_float_op", false,-1);
    tracep->declBit(c+385,"is_vector_int_op", false,-1);
    tracep->declBus(c+386,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+387,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[13] ");
    tracep->declBit(c+388,"t_enable", false,-1);
    tracep->declBit(c+389,"is_vector_float_op", false,-1);
    tracep->declBit(c+390,"is_vector_int_op", false,-1);
    tracep->declBus(c+391,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+392,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[14] ");
    tracep->declBit(c+393,"t_enable", false,-1);
    tracep->declBit(c+394,"is_vector_float_op", false,-1);
    tracep->declBit(c+395,"is_vector_int_op", false,-1);
    tracep->declBus(c+396,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+397,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[15] ");
    tracep->declBit(c+398,"t_enable", false,-1);
    tracep->declBit(c+399,"is_vector_float_op", false,-1);
    tracep->declBit(c+400,"is_vector_int_op", false,-1);
    tracep->declBus(c+401,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+402,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[1] ");
    tracep->declBit(c+403,"t_enable", false,-1);
    tracep->declBit(c+404,"is_vector_float_op", false,-1);
    tracep->declBit(c+405,"is_vector_int_op", false,-1);
    tracep->declBus(c+406,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+407,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[2] ");
    tracep->declBit(c+408,"t_enable", false,-1);
    tracep->declBit(c+409,"is_vector_float_op", false,-1);
    tracep->declBit(c+410,"is_vector_int_op", false,-1);
    tracep->declBus(c+411,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+412,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[3] ");
    tracep->declBit(c+413,"t_enable", false,-1);
    tracep->declBit(c+414,"is_vector_float_op", false,-1);
    tracep->declBit(c+415,"is_vector_int_op", false,-1);
    tracep->declBus(c+416,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+417,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[4] ");
    tracep->declBit(c+418,"t_enable", false,-1);
    tracep->declBit(c+419,"is_vector_float_op", false,-1);
    tracep->declBit(c+420,"is_vector_int_op", false,-1);
    tracep->declBus(c+421,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+422,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[5] ");
    tracep->declBit(c+423,"t_enable", false,-1);
    tracep->declBit(c+424,"is_vector_float_op", false,-1);
    tracep->declBit(c+425,"is_vector_int_op", false,-1);
    tracep->declBus(c+426,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+427,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[6] ");
    tracep->declBit(c+428,"t_enable", false,-1);
    tracep->declBit(c+429,"is_vector_float_op", false,-1);
    tracep->declBit(c+430,"is_vector_int_op", false,-1);
    tracep->declBus(c+431,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+432,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[7] ");
    tracep->declBit(c+433,"t_enable", false,-1);
    tracep->declBit(c+434,"is_vector_float_op", false,-1);
    tracep->declBit(c+435,"is_vector_int_op", false,-1);
    tracep->declBus(c+436,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+437,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[8] ");
    tracep->declBit(c+438,"t_enable", false,-1);
    tracep->declBit(c+439,"is_vector_float_op", false,-1);
    tracep->declBit(c+440,"is_vector_int_op", false,-1);
    tracep->declBus(c+441,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+442,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_vector_units[9] ");
    tracep->declBit(c+443,"t_enable", false,-1);
    tracep->declBit(c+444,"is_vector_float_op", false,-1);
    tracep->declBit(c+445,"is_vector_int_op", false,-1);
    tracep->declBus(c+446,"vector_int_alu_result", false,-1, 31,0);
    tracep->declBus(c+447,"vector_float_alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_warp ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_warp[0] ");
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBus(c+449,"instruction", false,-1, 31,0);
    tracep->declBit(c+450,"decoded_reg_write_enable", false,-1);
    tracep->declBit(c+451,"decoded_mem_write_enable", false,-1);
    tracep->declBit(c+452,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+453,"decoded_branch", false,-1);
    tracep->declBus(c+454,"decoded_reg_input_mux", false,-1, 2,0);
    tracep->declBit(c+455,"decoded_scalar_instruction", false,-1);
    tracep->declBus(c+456,"decoded_immediate", false,-1, 31,0);
    tracep->declBus(c+457,"decoded_rd_address", false,-1, 4,0);
    tracep->declBus(c+458,"decoded_rs1_address", false,-1, 4,0);
    tracep->declBus(c+459,"decoded_rs2_address", false,-1, 4,0);
    tracep->declBus(c+460,"decoded_alu_instruction", false,-1, 4,0);
    tracep->declBit(c+461,"decoded_halt", false,-1);
    tracep->declBus(c+462,"floatingRead", false,-1, 1,0);
    tracep->declBit(c+463,"floatingWrite", false,-1);
    tracep->declBus(c+464,"opcode", false,-1, 2,0);
    tracep->declBus(c+465,"rd", false,-1, 4,0);
    tracep->declBus(c+466,"funct3", false,-1, 2,0);
    tracep->declBus(c+467,"rs1", false,-1, 4,0);
    tracep->declBus(c+468,"funct4", false,-1, 3,0);
    tracep->declBus(c+469,"rs2", false,-1, 4,0);
    tracep->declBus(c+470,"imm_i", false,-1, 13,0);
    tracep->declBus(c+471,"imm_load", false,-1, 14,0);
    tracep->declBus(c+472,"imm_s", false,-1, 14,0);
    tracep->declBus(c+473,"imm_b", false,-1, 15,0);
    tracep->declBus(c+474,"imm_u", false,-1, 31,12);
    tracep->declBus(c+475,"imm_j", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetcher_inst ");
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBus(c+476,"pc", false,-1, 15,0);
    tracep->declBit(c+1653,"instruction_mem_read_ready", false,-1);
    tracep->declBus(c+36,"instruction_mem_read_data", false,-1, 31,0);
    tracep->declBit(c+87,"instruction_mem_read_valid", false,-1);
    tracep->declBus(c+477,"instruction_mem_read_address", false,-1, 15,0);
    tracep->declBus(c+478,"fetcher_state", false,-1, 1,0);
    tracep->declBus(c+449,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1665,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+479,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+480,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+481,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+482,"next_warp", false,-1, 31,0);
    tracep->declBus(c+483,"found_warp", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+484,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+485,"warp_index", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+487,"scalar_write_value", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+488,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+1552,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBit(c+59,"found_burst", false,-1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+61,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+62,"byte_addr", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+63,"byte_addr", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+64,"byte_addr", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+1553,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+1554,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+65,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP____024unit__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1750,"GLOBAL_MEM_BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1751,"GLOBAL_MEM_END_ADDR", false,-1, 31,0);
    tracep->declBus(c+1752,"THREAD_LOCAL_MEM_BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1753,"THREAD_LOCAL_MEM_PARTITION_SIZE_WORDS", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+489,"enable", false,-1);
    tracep->declBus(c+490,"warp_execution_mask", false,-1, 31,0);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBit(c+491,"decoded_reg_write_enable", false,-1);
    tracep->declBus(c+454,"decoded_reg_input_mux", false,-1, 2,0);
    tracep->declBus(c+456,"decoded_immediate", false,-1, 31,0);
    tracep->declBus(c+457,"decoded_rd_address", false,-1, 4,0);
    tracep->declBus(c+458,"decoded_rs1_address", false,-1, 4,0);
    tracep->declBus(c+459,"decoded_rs2_address", false,-1, 4,0);
    tracep->declBus(c+291,"alu_out", false,-1, 31,0);
    tracep->declBus(c+324,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+476,"pc", false,-1, 15,0);
    tracep->declBus(c+492,"vector_to_scalar_data", false,-1, 31,0);
    tracep->declBus(c+493,"rs1", false,-1, 31,0);
    tracep->declBus(c+494,"rs2", false,-1, 31,0);
    tracep->declBus(c+1750,"ZERO_REG", false,-1, 31,0);
    tracep->declBus(c+1755,"EXECUTION_MASK_REG", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+495+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+527,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+489,"enable", false,-1);
    tracep->declBus(c+528,"warp_execution_mask", false,-1, 31,0);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBit(c+529,"decoded_reg_write_enable", false,-1);
    tracep->declBus(c+454,"decoded_reg_input_mux", false,-1, 2,0);
    tracep->declBus(c+456,"decoded_immediate", false,-1, 31,0);
    tracep->declBus(c+457,"decoded_rd_address", false,-1, 4,0);
    tracep->declBus(c+458,"decoded_rs1_address", false,-1, 4,0);
    tracep->declBus(c+459,"decoded_rs2_address", false,-1, 4,0);
    tracep->declBus(c+291,"alu_out", false,-1, 31,0);
    tracep->declBus(c+324,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+476,"pc", false,-1, 15,0);
    tracep->declBus(c+492,"vector_to_scalar_data", false,-1, 31,0);
    tracep->declBus(c+530,"rs1", false,-1, 31,0);
    tracep->declBus(c+531,"rs2", false,-1, 31,0);
    tracep->declBus(c+1750,"ZERO_REG", false,-1, 31,0);
    tracep->declBus(c+1755,"EXECUTION_MASK_REG", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+532+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+564,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1667,"THREADS_PER_WARP", false,-1, 31,0);
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+489,"enable", false,-1);
    tracep->declBus(c+565,"thread_enable", false,-1, 15,0);
    tracep->declBus(c+1756,"warp_id", false,-1, 31,0);
    tracep->declBus(c+97,"block_id", false,-1, 31,0);
    tracep->declBus(c+1555,"block_size", false,-1, 31,0);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBit(c+566,"decoded_reg_write_enable", false,-1);
    tracep->declBus(c+454,"decoded_reg_input_mux", false,-1, 2,0);
    tracep->declBus(c+456,"decoded_immediate", false,-1, 31,0);
    tracep->declBus(c+457,"decoded_rd_address", false,-1, 4,0);
    tracep->declBus(c+458,"decoded_rs1_address", false,-1, 4,0);
    tracep->declBus(c+459,"decoded_rs2_address", false,-1, 4,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+567+i*1,"alu_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+583+i*1,"lsu_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+599+i*1,"rs1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+615+i*1,"rs2", true,(i+0), 31,0);
    }
    tracep->declBus(c+1750,"ZERO_REG", false,-1, 31,0);
    tracep->declBus(c+1757,"THREAD_ID_REG", false,-1, 31,0);
    tracep->declBus(c+1758,"BLOCK_ID_REG", false,-1, 31,0);
    tracep->declBus(c+1755,"BLOCK_SIZE_REG", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"thread_ids", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1759,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+631,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+632,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+633,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+634,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1667,"THREADS_PER_WARP", false,-1, 31,0);
    tracep->declBus(c+1754,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+489,"enable", false,-1);
    tracep->declBus(c+565,"thread_enable", false,-1, 15,0);
    tracep->declBus(c+1756,"warp_id", false,-1, 31,0);
    tracep->declBus(c+97,"block_id", false,-1, 31,0);
    tracep->declBus(c+1555,"block_size", false,-1, 31,0);
    tracep->declBus(c+448,"warp_state", false,-1, 3,0);
    tracep->declBit(c+635,"decoded_reg_write_enable", false,-1);
    tracep->declBus(c+454,"decoded_reg_input_mux", false,-1, 2,0);
    tracep->declBus(c+456,"decoded_immediate", false,-1, 31,0);
    tracep->declBus(c+457,"decoded_rd_address", false,-1, 4,0);
    tracep->declBus(c+458,"decoded_rs1_address", false,-1, 4,0);
    tracep->declBus(c+459,"decoded_rs2_address", false,-1, 4,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+636+i*1,"alu_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+652+i*1,"lsu_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+668+i*1,"rs1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+684+i*1,"rs2", true,(i+0), 31,0);
    }
    tracep->declBus(c+1750,"ZERO_REG", false,-1, 31,0);
    tracep->declBus(c+1757,"THREAD_ID_REG", false,-1, 31,0);
    tracep->declBus(c+1758,"BLOCK_ID_REG", false,-1, 31,0);
    tracep->declBus(c+1755,"BLOCK_SIZE_REG", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,"thread_ids", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1759,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+700,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+701,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+702,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+703,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+328,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+329,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+330,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+707,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+708,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+371,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+709,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+710,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+406,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+711,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+712,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+411,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+713,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+714,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+416,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+715,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+716,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+421,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+717,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+718,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+426,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+719,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+720,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+431,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+721,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+722,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+436,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+723,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+724,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+441,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+725,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+726,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+446,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+727,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+728,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+376,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+729,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+730,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+381,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+731,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+732,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+386,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+733,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+734,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+391,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+735,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+736,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+396,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+704,"pc", false,-1, 15,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+737,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+738,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+706,"IMM", false,-1, 31,0);
    tracep->declBus(c+401,"Result", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+328,"op1", false,-1, 31,0);
    tracep->declBus(c+329,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+331,"result", false,-1, 31,0);
    tracep->declBit(c+739,"op1_sign_bit", false,-1);
    tracep->declBit(c+740,"op2_sign_bit", false,-1);
    tracep->declBus(c+741,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+742,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+743,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+744,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+745,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+746,"result_exp", false,-1, 7,0);
    tracep->declBus(c+747,"sum", false,-1, 24,0);
    tracep->declBus(c+748,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+749,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+750,"result_sign_bit", false,-1);
    tracep->declBit(c+751,"guard_bit", false,-1);
    tracep->declBit(c+752,"round_bit", false,-1);
    tracep->declBit(c+753,"round_up", false,-1);
    tracep->declBus(c+754,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+755,"product", false,-1, 47,0);
    tracep->declQuad(c+757,"quotient", false,-1, 47,0);
    tracep->declQuad(c+759,"numerator", false,-1, 47,0);
    tracep->declQuad(c+761,"denominator", false,-1, 47,0);
    tracep->declBus(c+763,"shift_count", false,-1, 31,0);
    tracep->declBit(c+764,"sticky_bit", false,-1);
    tracep->declBus(c+765,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+766,"op1_int", false,-1, 31,0);
    tracep->declBus(c+767,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+768,"significant_one", false,-1, 31,0);
    tracep->declBus(c+769,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+770,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+771,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+772,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+773,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+707,"op1", false,-1, 31,0);
    tracep->declBus(c+708,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+372,"result", false,-1, 31,0);
    tracep->declBit(c+774,"op1_sign_bit", false,-1);
    tracep->declBit(c+775,"op2_sign_bit", false,-1);
    tracep->declBus(c+776,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+777,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+778,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+779,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+780,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+781,"result_exp", false,-1, 7,0);
    tracep->declBus(c+782,"sum", false,-1, 24,0);
    tracep->declBus(c+783,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+784,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+785,"result_sign_bit", false,-1);
    tracep->declBit(c+786,"guard_bit", false,-1);
    tracep->declBit(c+787,"round_bit", false,-1);
    tracep->declBit(c+788,"round_up", false,-1);
    tracep->declBus(c+789,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+790,"product", false,-1, 47,0);
    tracep->declQuad(c+792,"quotient", false,-1, 47,0);
    tracep->declQuad(c+794,"numerator", false,-1, 47,0);
    tracep->declQuad(c+796,"denominator", false,-1, 47,0);
    tracep->declBus(c+798,"shift_count", false,-1, 31,0);
    tracep->declBit(c+799,"sticky_bit", false,-1);
    tracep->declBus(c+800,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+801,"op1_int", false,-1, 31,0);
    tracep->declBus(c+802,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+803,"significant_one", false,-1, 31,0);
    tracep->declBus(c+804,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+805,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+806,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+807,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+808,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+709,"op1", false,-1, 31,0);
    tracep->declBus(c+710,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+407,"result", false,-1, 31,0);
    tracep->declBit(c+809,"op1_sign_bit", false,-1);
    tracep->declBit(c+810,"op2_sign_bit", false,-1);
    tracep->declBus(c+811,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+812,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+813,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+814,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+815,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+816,"result_exp", false,-1, 7,0);
    tracep->declBus(c+817,"sum", false,-1, 24,0);
    tracep->declBus(c+818,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+819,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+820,"result_sign_bit", false,-1);
    tracep->declBit(c+821,"guard_bit", false,-1);
    tracep->declBit(c+822,"round_bit", false,-1);
    tracep->declBit(c+823,"round_up", false,-1);
    tracep->declBus(c+824,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+825,"product", false,-1, 47,0);
    tracep->declQuad(c+827,"quotient", false,-1, 47,0);
    tracep->declQuad(c+829,"numerator", false,-1, 47,0);
    tracep->declQuad(c+831,"denominator", false,-1, 47,0);
    tracep->declBus(c+833,"shift_count", false,-1, 31,0);
    tracep->declBit(c+834,"sticky_bit", false,-1);
    tracep->declBus(c+835,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+836,"op1_int", false,-1, 31,0);
    tracep->declBus(c+837,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+838,"significant_one", false,-1, 31,0);
    tracep->declBus(c+839,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+840,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+841,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+842,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+843,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+711,"op1", false,-1, 31,0);
    tracep->declBus(c+712,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+412,"result", false,-1, 31,0);
    tracep->declBit(c+844,"op1_sign_bit", false,-1);
    tracep->declBit(c+845,"op2_sign_bit", false,-1);
    tracep->declBus(c+846,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+847,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+848,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+849,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+850,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+851,"result_exp", false,-1, 7,0);
    tracep->declBus(c+852,"sum", false,-1, 24,0);
    tracep->declBus(c+853,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+854,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+855,"result_sign_bit", false,-1);
    tracep->declBit(c+856,"guard_bit", false,-1);
    tracep->declBit(c+857,"round_bit", false,-1);
    tracep->declBit(c+858,"round_up", false,-1);
    tracep->declBus(c+859,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+860,"product", false,-1, 47,0);
    tracep->declQuad(c+862,"quotient", false,-1, 47,0);
    tracep->declQuad(c+864,"numerator", false,-1, 47,0);
    tracep->declQuad(c+866,"denominator", false,-1, 47,0);
    tracep->declBus(c+868,"shift_count", false,-1, 31,0);
    tracep->declBit(c+869,"sticky_bit", false,-1);
    tracep->declBus(c+870,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+871,"op1_int", false,-1, 31,0);
    tracep->declBus(c+872,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+873,"significant_one", false,-1, 31,0);
    tracep->declBus(c+874,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+875,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+876,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+877,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+878,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+713,"op1", false,-1, 31,0);
    tracep->declBus(c+714,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+417,"result", false,-1, 31,0);
    tracep->declBit(c+879,"op1_sign_bit", false,-1);
    tracep->declBit(c+880,"op2_sign_bit", false,-1);
    tracep->declBus(c+881,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+882,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+883,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+884,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+885,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+886,"result_exp", false,-1, 7,0);
    tracep->declBus(c+887,"sum", false,-1, 24,0);
    tracep->declBus(c+888,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+889,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+890,"result_sign_bit", false,-1);
    tracep->declBit(c+891,"guard_bit", false,-1);
    tracep->declBit(c+892,"round_bit", false,-1);
    tracep->declBit(c+893,"round_up", false,-1);
    tracep->declBus(c+894,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+895,"product", false,-1, 47,0);
    tracep->declQuad(c+897,"quotient", false,-1, 47,0);
    tracep->declQuad(c+899,"numerator", false,-1, 47,0);
    tracep->declQuad(c+901,"denominator", false,-1, 47,0);
    tracep->declBus(c+903,"shift_count", false,-1, 31,0);
    tracep->declBit(c+904,"sticky_bit", false,-1);
    tracep->declBus(c+905,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+906,"op1_int", false,-1, 31,0);
    tracep->declBus(c+907,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+908,"significant_one", false,-1, 31,0);
    tracep->declBus(c+909,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+910,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+911,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+912,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+913,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+715,"op1", false,-1, 31,0);
    tracep->declBus(c+716,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+422,"result", false,-1, 31,0);
    tracep->declBit(c+914,"op1_sign_bit", false,-1);
    tracep->declBit(c+915,"op2_sign_bit", false,-1);
    tracep->declBus(c+916,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+917,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+918,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+919,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+920,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+921,"result_exp", false,-1, 7,0);
    tracep->declBus(c+922,"sum", false,-1, 24,0);
    tracep->declBus(c+923,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+924,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+925,"result_sign_bit", false,-1);
    tracep->declBit(c+926,"guard_bit", false,-1);
    tracep->declBit(c+927,"round_bit", false,-1);
    tracep->declBit(c+928,"round_up", false,-1);
    tracep->declBus(c+929,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+930,"product", false,-1, 47,0);
    tracep->declQuad(c+932,"quotient", false,-1, 47,0);
    tracep->declQuad(c+934,"numerator", false,-1, 47,0);
    tracep->declQuad(c+936,"denominator", false,-1, 47,0);
    tracep->declBus(c+938,"shift_count", false,-1, 31,0);
    tracep->declBit(c+939,"sticky_bit", false,-1);
    tracep->declBus(c+940,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+941,"op1_int", false,-1, 31,0);
    tracep->declBus(c+942,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+943,"significant_one", false,-1, 31,0);
    tracep->declBus(c+944,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+945,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+946,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+947,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+948,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+717,"op1", false,-1, 31,0);
    tracep->declBus(c+718,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+427,"result", false,-1, 31,0);
    tracep->declBit(c+949,"op1_sign_bit", false,-1);
    tracep->declBit(c+950,"op2_sign_bit", false,-1);
    tracep->declBus(c+951,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+952,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+953,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+954,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+955,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+956,"result_exp", false,-1, 7,0);
    tracep->declBus(c+957,"sum", false,-1, 24,0);
    tracep->declBus(c+958,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+959,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+960,"result_sign_bit", false,-1);
    tracep->declBit(c+961,"guard_bit", false,-1);
    tracep->declBit(c+962,"round_bit", false,-1);
    tracep->declBit(c+963,"round_up", false,-1);
    tracep->declBus(c+964,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+965,"product", false,-1, 47,0);
    tracep->declQuad(c+967,"quotient", false,-1, 47,0);
    tracep->declQuad(c+969,"numerator", false,-1, 47,0);
    tracep->declQuad(c+971,"denominator", false,-1, 47,0);
    tracep->declBus(c+973,"shift_count", false,-1, 31,0);
    tracep->declBit(c+974,"sticky_bit", false,-1);
    tracep->declBus(c+975,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+976,"op1_int", false,-1, 31,0);
    tracep->declBus(c+977,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+978,"significant_one", false,-1, 31,0);
    tracep->declBus(c+979,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+980,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+981,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+982,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+983,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+719,"op1", false,-1, 31,0);
    tracep->declBus(c+720,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+432,"result", false,-1, 31,0);
    tracep->declBit(c+984,"op1_sign_bit", false,-1);
    tracep->declBit(c+985,"op2_sign_bit", false,-1);
    tracep->declBus(c+986,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+987,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+988,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+989,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+990,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+991,"result_exp", false,-1, 7,0);
    tracep->declBus(c+992,"sum", false,-1, 24,0);
    tracep->declBus(c+993,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+994,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+995,"result_sign_bit", false,-1);
    tracep->declBit(c+996,"guard_bit", false,-1);
    tracep->declBit(c+997,"round_bit", false,-1);
    tracep->declBit(c+998,"round_up", false,-1);
    tracep->declBus(c+999,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1000,"product", false,-1, 47,0);
    tracep->declQuad(c+1002,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1004,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1006,"denominator", false,-1, 47,0);
    tracep->declBus(c+1008,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1009,"sticky_bit", false,-1);
    tracep->declBus(c+1010,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1011,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1012,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1013,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1014,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1015,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1016,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1017,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1018,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+721,"op1", false,-1, 31,0);
    tracep->declBus(c+722,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+437,"result", false,-1, 31,0);
    tracep->declBit(c+1019,"op1_sign_bit", false,-1);
    tracep->declBit(c+1020,"op2_sign_bit", false,-1);
    tracep->declBus(c+1021,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1022,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1023,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1024,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1025,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1026,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1027,"sum", false,-1, 24,0);
    tracep->declBus(c+1028,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1029,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1030,"result_sign_bit", false,-1);
    tracep->declBit(c+1031,"guard_bit", false,-1);
    tracep->declBit(c+1032,"round_bit", false,-1);
    tracep->declBit(c+1033,"round_up", false,-1);
    tracep->declBus(c+1034,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1035,"product", false,-1, 47,0);
    tracep->declQuad(c+1037,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1039,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1041,"denominator", false,-1, 47,0);
    tracep->declBus(c+1043,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1044,"sticky_bit", false,-1);
    tracep->declBus(c+1045,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1046,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1047,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1048,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1049,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1050,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1051,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1052,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1053,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+723,"op1", false,-1, 31,0);
    tracep->declBus(c+724,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+442,"result", false,-1, 31,0);
    tracep->declBit(c+1054,"op1_sign_bit", false,-1);
    tracep->declBit(c+1055,"op2_sign_bit", false,-1);
    tracep->declBus(c+1056,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1057,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1058,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1059,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1060,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1061,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1062,"sum", false,-1, 24,0);
    tracep->declBus(c+1063,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1064,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1065,"result_sign_bit", false,-1);
    tracep->declBit(c+1066,"guard_bit", false,-1);
    tracep->declBit(c+1067,"round_bit", false,-1);
    tracep->declBit(c+1068,"round_up", false,-1);
    tracep->declBus(c+1069,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1070,"product", false,-1, 47,0);
    tracep->declQuad(c+1072,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1074,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1076,"denominator", false,-1, 47,0);
    tracep->declBus(c+1078,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1079,"sticky_bit", false,-1);
    tracep->declBus(c+1080,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1081,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1082,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1083,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1084,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1085,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1086,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1087,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1088,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+725,"op1", false,-1, 31,0);
    tracep->declBus(c+726,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+447,"result", false,-1, 31,0);
    tracep->declBit(c+1089,"op1_sign_bit", false,-1);
    tracep->declBit(c+1090,"op2_sign_bit", false,-1);
    tracep->declBus(c+1091,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1092,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1093,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1094,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1095,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1096,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1097,"sum", false,-1, 24,0);
    tracep->declBus(c+1098,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1099,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1100,"result_sign_bit", false,-1);
    tracep->declBit(c+1101,"guard_bit", false,-1);
    tracep->declBit(c+1102,"round_bit", false,-1);
    tracep->declBit(c+1103,"round_up", false,-1);
    tracep->declBus(c+1104,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1105,"product", false,-1, 47,0);
    tracep->declQuad(c+1107,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1109,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1111,"denominator", false,-1, 47,0);
    tracep->declBus(c+1113,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1114,"sticky_bit", false,-1);
    tracep->declBus(c+1115,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1116,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1117,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1118,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1119,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1120,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1121,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1122,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1123,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+727,"op1", false,-1, 31,0);
    tracep->declBus(c+728,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+377,"result", false,-1, 31,0);
    tracep->declBit(c+1124,"op1_sign_bit", false,-1);
    tracep->declBit(c+1125,"op2_sign_bit", false,-1);
    tracep->declBus(c+1126,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1127,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1128,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1129,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1130,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1131,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1132,"sum", false,-1, 24,0);
    tracep->declBus(c+1133,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1134,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1135,"result_sign_bit", false,-1);
    tracep->declBit(c+1136,"guard_bit", false,-1);
    tracep->declBit(c+1137,"round_bit", false,-1);
    tracep->declBit(c+1138,"round_up", false,-1);
    tracep->declBus(c+1139,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1140,"product", false,-1, 47,0);
    tracep->declQuad(c+1142,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1144,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1146,"denominator", false,-1, 47,0);
    tracep->declBus(c+1148,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1149,"sticky_bit", false,-1);
    tracep->declBus(c+1150,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1151,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1152,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1153,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1154,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1155,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1156,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1157,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1158,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+729,"op1", false,-1, 31,0);
    tracep->declBus(c+730,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+382,"result", false,-1, 31,0);
    tracep->declBit(c+1159,"op1_sign_bit", false,-1);
    tracep->declBit(c+1160,"op2_sign_bit", false,-1);
    tracep->declBus(c+1161,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1162,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1163,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1164,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1165,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1166,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1167,"sum", false,-1, 24,0);
    tracep->declBus(c+1168,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1169,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1170,"result_sign_bit", false,-1);
    tracep->declBit(c+1171,"guard_bit", false,-1);
    tracep->declBit(c+1172,"round_bit", false,-1);
    tracep->declBit(c+1173,"round_up", false,-1);
    tracep->declBus(c+1174,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1175,"product", false,-1, 47,0);
    tracep->declQuad(c+1177,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1179,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1181,"denominator", false,-1, 47,0);
    tracep->declBus(c+1183,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1184,"sticky_bit", false,-1);
    tracep->declBus(c+1185,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1186,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1187,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1188,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1189,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1190,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1191,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1192,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1193,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+731,"op1", false,-1, 31,0);
    tracep->declBus(c+732,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+387,"result", false,-1, 31,0);
    tracep->declBit(c+1194,"op1_sign_bit", false,-1);
    tracep->declBit(c+1195,"op2_sign_bit", false,-1);
    tracep->declBus(c+1196,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1197,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1198,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1199,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1200,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1201,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1202,"sum", false,-1, 24,0);
    tracep->declBus(c+1203,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1204,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1205,"result_sign_bit", false,-1);
    tracep->declBit(c+1206,"guard_bit", false,-1);
    tracep->declBit(c+1207,"round_bit", false,-1);
    tracep->declBit(c+1208,"round_up", false,-1);
    tracep->declBus(c+1209,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1210,"product", false,-1, 47,0);
    tracep->declQuad(c+1212,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1214,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1216,"denominator", false,-1, 47,0);
    tracep->declBus(c+1218,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1219,"sticky_bit", false,-1);
    tracep->declBus(c+1220,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1221,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1222,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1223,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1224,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1225,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1226,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1227,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1228,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+733,"op1", false,-1, 31,0);
    tracep->declBus(c+734,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+392,"result", false,-1, 31,0);
    tracep->declBit(c+1229,"op1_sign_bit", false,-1);
    tracep->declBit(c+1230,"op2_sign_bit", false,-1);
    tracep->declBus(c+1231,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1232,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1233,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1234,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1235,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1236,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1237,"sum", false,-1, 24,0);
    tracep->declBus(c+1238,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1239,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1240,"result_sign_bit", false,-1);
    tracep->declBit(c+1241,"guard_bit", false,-1);
    tracep->declBit(c+1242,"round_bit", false,-1);
    tracep->declBit(c+1243,"round_up", false,-1);
    tracep->declBus(c+1244,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1245,"product", false,-1, 47,0);
    tracep->declQuad(c+1247,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1249,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1251,"denominator", false,-1, 47,0);
    tracep->declBus(c+1253,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1254,"sticky_bit", false,-1);
    tracep->declBus(c+1255,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1256,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1257,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1258,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1259,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1260,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1261,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1262,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1263,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+735,"op1", false,-1, 31,0);
    tracep->declBus(c+736,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+397,"result", false,-1, 31,0);
    tracep->declBit(c+1264,"op1_sign_bit", false,-1);
    tracep->declBit(c+1265,"op2_sign_bit", false,-1);
    tracep->declBus(c+1266,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1267,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1268,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1269,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1270,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1271,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1272,"sum", false,-1, 24,0);
    tracep->declBus(c+1273,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1274,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1275,"result_sign_bit", false,-1);
    tracep->declBit(c+1276,"guard_bit", false,-1);
    tracep->declBit(c+1277,"round_bit", false,-1);
    tracep->declBit(c+1278,"round_up", false,-1);
    tracep->declBus(c+1279,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1280,"product", false,-1, 47,0);
    tracep->declQuad(c+1282,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1284,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1286,"denominator", false,-1, 47,0);
    tracep->declBus(c+1288,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1289,"sticky_bit", false,-1);
    tracep->declBus(c+1290,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1291,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1292,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1293,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1294,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1295,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1296,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1297,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1298,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+737,"op1", false,-1, 31,0);
    tracep->declBus(c+738,"op2", false,-1, 31,0);
    tracep->declBus(c+705,"instruction", false,-1, 4,0);
    tracep->declBus(c+402,"result", false,-1, 31,0);
    tracep->declBit(c+1299,"op1_sign_bit", false,-1);
    tracep->declBit(c+1300,"op2_sign_bit", false,-1);
    tracep->declBus(c+1301,"op1_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1302,"op2_biased_exponent", false,-1, 7,0);
    tracep->declBus(c+1303,"op1_significand", false,-1, 23,0);
    tracep->declBus(c+1304,"op2_significand", false,-1, 23,0);
    tracep->declBus(c+1305,"exp_diff", false,-1, 7,0);
    tracep->declBus(c+1306,"result_exp", false,-1, 7,0);
    tracep->declBus(c+1307,"sum", false,-1, 24,0);
    tracep->declBus(c+1308,"mantissa_shift_op1", false,-1, 24,0);
    tracep->declBus(c+1309,"mantissa_shift_op2", false,-1, 24,0);
    tracep->declBit(c+1310,"result_sign_bit", false,-1);
    tracep->declBit(c+1311,"guard_bit", false,-1);
    tracep->declBit(c+1312,"round_bit", false,-1);
    tracep->declBit(c+1313,"round_up", false,-1);
    tracep->declBus(c+1314,"rounded_sum", false,-1, 23,0);
    tracep->declQuad(c+1315,"product", false,-1, 47,0);
    tracep->declQuad(c+1317,"quotient", false,-1, 47,0);
    tracep->declQuad(c+1319,"numerator", false,-1, 47,0);
    tracep->declQuad(c+1321,"denominator", false,-1, 47,0);
    tracep->declBus(c+1323,"shift_count", false,-1, 31,0);
    tracep->declBit(c+1324,"sticky_bit", false,-1);
    tracep->declBus(c+1325,"op1_unbiased_exponent", false,-1, 7,0);
    tracep->declBus(c+1326,"op1_int", false,-1, 31,0);
    tracep->declBus(c+1327,"abs_op1", false,-1, 31,0);
    tracep->declBus(c+1328,"significant_one", false,-1, 31,0);
    tracep->declBus(c+1329,"norm_exponent", false,-1, 8,0);
    tracep->declBus(c+1330,"norm_mantissa", false,-1, 22,0);
    tracep->declBus(c+1331,"intermediary_exponent", false,-1, 8,0);
    tracep->declBus(c+1332,"shift", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1333,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+1334,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+328,"rs1", false,-1, 31,0);
    tracep->declBus(c+329,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1337,"mem_read_valid", false,-1);
    tracep->declBus(c+1338,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1556,"mem_read_ready", false,-1);
    tracep->declBus(c+1557,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1339,"mem_write_valid", false,-1);
    tracep->declBus(c+1340,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1341,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+66,"mem_write_ready", false,-1);
    tracep->declBus(c+325,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+324,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1342,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+368,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+707,"rs1", false,-1, 31,0);
    tracep->declBus(c+708,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1343,"mem_read_valid", false,-1);
    tracep->declBus(c+1344,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1558,"mem_read_ready", false,-1);
    tracep->declBus(c+1559,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1345,"mem_write_valid", false,-1);
    tracep->declBus(c+1346,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1347,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+67,"mem_write_ready", false,-1);
    tracep->declBus(c+1348,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1349,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1350,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+403,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+709,"rs1", false,-1, 31,0);
    tracep->declBus(c+710,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1351,"mem_read_valid", false,-1);
    tracep->declBus(c+1352,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1560,"mem_read_ready", false,-1);
    tracep->declBus(c+1561,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1353,"mem_write_valid", false,-1);
    tracep->declBus(c+1354,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1355,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+68,"mem_write_ready", false,-1);
    tracep->declBus(c+1356,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1357,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1358,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+408,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+711,"rs1", false,-1, 31,0);
    tracep->declBus(c+712,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1359,"mem_read_valid", false,-1);
    tracep->declBus(c+1360,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1562,"mem_read_ready", false,-1);
    tracep->declBus(c+1563,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1361,"mem_write_valid", false,-1);
    tracep->declBus(c+1362,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1363,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+69,"mem_write_ready", false,-1);
    tracep->declBus(c+1364,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1365,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1366,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+413,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+713,"rs1", false,-1, 31,0);
    tracep->declBus(c+714,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1367,"mem_read_valid", false,-1);
    tracep->declBus(c+1368,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1564,"mem_read_ready", false,-1);
    tracep->declBus(c+1565,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1369,"mem_write_valid", false,-1);
    tracep->declBus(c+1370,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1371,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+70,"mem_write_ready", false,-1);
    tracep->declBus(c+1372,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1373,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1374,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+418,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+715,"rs1", false,-1, 31,0);
    tracep->declBus(c+716,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1375,"mem_read_valid", false,-1);
    tracep->declBus(c+1376,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1566,"mem_read_ready", false,-1);
    tracep->declBus(c+1567,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1377,"mem_write_valid", false,-1);
    tracep->declBus(c+1378,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1379,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+71,"mem_write_ready", false,-1);
    tracep->declBus(c+1380,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1381,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1382,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+423,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+717,"rs1", false,-1, 31,0);
    tracep->declBus(c+718,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1383,"mem_read_valid", false,-1);
    tracep->declBus(c+1384,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1568,"mem_read_ready", false,-1);
    tracep->declBus(c+1569,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1385,"mem_write_valid", false,-1);
    tracep->declBus(c+1386,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1387,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+72,"mem_write_ready", false,-1);
    tracep->declBus(c+1388,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1389,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1390,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+428,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+719,"rs1", false,-1, 31,0);
    tracep->declBus(c+720,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1391,"mem_read_valid", false,-1);
    tracep->declBus(c+1392,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1570,"mem_read_ready", false,-1);
    tracep->declBus(c+1571,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1393,"mem_write_valid", false,-1);
    tracep->declBus(c+1394,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1395,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+73,"mem_write_ready", false,-1);
    tracep->declBus(c+1396,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1397,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1398,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+433,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+721,"rs1", false,-1, 31,0);
    tracep->declBus(c+722,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1399,"mem_read_valid", false,-1);
    tracep->declBus(c+1400,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1572,"mem_read_ready", false,-1);
    tracep->declBus(c+1573,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1401,"mem_write_valid", false,-1);
    tracep->declBus(c+1402,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1403,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+74,"mem_write_ready", false,-1);
    tracep->declBus(c+1404,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1405,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1406,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+438,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+723,"rs1", false,-1, 31,0);
    tracep->declBus(c+724,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1407,"mem_read_valid", false,-1);
    tracep->declBus(c+1408,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1574,"mem_read_ready", false,-1);
    tracep->declBus(c+1575,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1409,"mem_write_valid", false,-1);
    tracep->declBus(c+1410,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1411,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+75,"mem_write_ready", false,-1);
    tracep->declBus(c+1412,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1413,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1414,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+443,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+725,"rs1", false,-1, 31,0);
    tracep->declBus(c+726,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1415,"mem_read_valid", false,-1);
    tracep->declBus(c+1416,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1576,"mem_read_ready", false,-1);
    tracep->declBus(c+1577,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1417,"mem_write_valid", false,-1);
    tracep->declBus(c+1418,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1419,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+76,"mem_write_ready", false,-1);
    tracep->declBus(c+1420,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1421,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1422,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+373,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+727,"rs1", false,-1, 31,0);
    tracep->declBus(c+728,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1423,"mem_read_valid", false,-1);
    tracep->declBus(c+1424,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1578,"mem_read_ready", false,-1);
    tracep->declBus(c+1579,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1425,"mem_write_valid", false,-1);
    tracep->declBus(c+1426,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1427,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+77,"mem_write_ready", false,-1);
    tracep->declBus(c+1428,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1429,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1430,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+378,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+729,"rs1", false,-1, 31,0);
    tracep->declBus(c+730,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1431,"mem_read_valid", false,-1);
    tracep->declBus(c+1432,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1580,"mem_read_ready", false,-1);
    tracep->declBus(c+1581,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1433,"mem_write_valid", false,-1);
    tracep->declBus(c+1434,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1435,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+78,"mem_write_ready", false,-1);
    tracep->declBus(c+1436,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1437,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1438,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+383,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+731,"rs1", false,-1, 31,0);
    tracep->declBus(c+732,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1439,"mem_read_valid", false,-1);
    tracep->declBus(c+1440,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1582,"mem_read_ready", false,-1);
    tracep->declBus(c+1583,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1441,"mem_write_valid", false,-1);
    tracep->declBus(c+1442,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1443,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+79,"mem_write_ready", false,-1);
    tracep->declBus(c+1444,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1445,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1446,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+388,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+733,"rs1", false,-1, 31,0);
    tracep->declBus(c+734,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1447,"mem_read_valid", false,-1);
    tracep->declBus(c+1448,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1584,"mem_read_ready", false,-1);
    tracep->declBus(c+1585,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1449,"mem_write_valid", false,-1);
    tracep->declBus(c+1450,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1451,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+80,"mem_write_ready", false,-1);
    tracep->declBus(c+1452,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1453,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1454,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+393,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+735,"rs1", false,-1, 31,0);
    tracep->declBus(c+736,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1455,"mem_read_valid", false,-1);
    tracep->declBus(c+1456,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1586,"mem_read_ready", false,-1);
    tracep->declBus(c+1587,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1457,"mem_write_valid", false,-1);
    tracep->declBus(c+1458,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1459,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+81,"mem_write_ready", false,-1);
    tracep->declBus(c+1460,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1461,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1462,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1643,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+398,"enable", false,-1);
    tracep->declBus(c+154,"warp_state", false,-1, 3,0);
    tracep->declBit(c+1335,"decoded_mem_read_enable", false,-1);
    tracep->declBit(c+1336,"decoded_mem_write_enable", false,-1);
    tracep->declBus(c+737,"rs1", false,-1, 31,0);
    tracep->declBus(c+738,"rs2", false,-1, 31,0);
    tracep->declBus(c+706,"imm", false,-1, 31,0);
    tracep->declBit(c+1463,"mem_read_valid", false,-1);
    tracep->declBus(c+1464,"mem_read_address", false,-1, 16,0);
    tracep->declBit(c+1588,"mem_read_ready", false,-1);
    tracep->declBus(c+1589,"mem_read_data", false,-1, 31,0);
    tracep->declBit(c+1465,"mem_write_valid", false,-1);
    tracep->declBus(c+1466,"mem_write_address", false,-1, 16,0);
    tracep->declBus(c+1467,"mem_write_data", false,-1, 31,0);
    tracep->declBit(c+82,"mem_write_ready", false,-1);
    tracep->declBus(c+1468,"lsu_state", false,-1, 1,0);
    tracep->declBus(c+1469,"lsu_out", false,-1, 31,0);
    tracep->declBus(c+1470,"offset_address", false,-1, 31,0);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vdut___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gpu ");
    tracep->pushNamePrefix("mcu_inst ");
    tracep->pushNamePrefix("core_instance ");
    tracep->pushNamePrefix("g_vector_units[0] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[10] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[11] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[12] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[13] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[14] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[15] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[1] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[2] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[3] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[4] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[5] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[6] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[7] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[8] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_vector_units[9] ");
    tracep->pushNamePrefix("lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vector_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_warp[0] ");
    tracep->pushNamePrefix("floating_reg_file_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("floating_scalar_reg_file_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scalar_reg_file_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("scalar_alu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scalar_fpu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scalar_lsu_inst ");
    Vdut___024root__trace_init_sub__TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[0]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[1]),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[2]),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[3]),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[4]),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[5]),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[6]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[7]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[8]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[9]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[10]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[11]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[12]),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[13]),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[14]),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__thread_ids[15]),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[0]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[1]),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[2]),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[3]),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[4]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[5]),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[6]),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[7]),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[8]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[9]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[10]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[11]),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[12]),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[13]),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[14]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__thread_ids[15]),32);
    bufp->fullIData(oldp+33,(vlSelf->gpu__DOT__fetcher_read_data_core[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->gpu__DOT____Vcellinp__mcu_inst__fetcher_read_data_core[0]),32);
    bufp->fullIData(oldp+35,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__instruction_mem_read_data[0]),32);
    bufp->fullIData(oldp+36,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__instruction_mem_read_data
                             [0U]),32);
    bufp->fullIData(oldp+37,(vlSelf->gpu__DOT__m_axi_awaddr),32);
    bufp->fullIData(oldp+38,(vlSelf->gpu__DOT__m_axi_araddr),32);
    bufp->fullIData(oldp+39,(vlSelf->gpu__DOT__m_axi_wdata),32);
    bufp->fullBit(oldp+40,(vlSelf->gpu__DOT__m_axi_awvalid));
    bufp->fullBit(oldp+41,(vlSelf->gpu__DOT__m_axi_wvalid));
    bufp->fullBit(oldp+42,(vlSelf->gpu__DOT__m_axi_arvalid));
    bufp->fullBit(oldp+43,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awid));
    bufp->fullCData(oldp+44,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awlen),8);
    bufp->fullCData(oldp+45,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awsize),3);
    bufp->fullCData(oldp+46,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_awburst),2);
    bufp->fullCData(oldp+47,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wstrb),4);
    bufp->fullBit(oldp+48,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_wlast));
    bufp->fullBit(oldp+49,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bready));
    bufp->fullBit(oldp+50,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arid));
    bufp->fullCData(oldp+51,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arlen),8);
    bufp->fullCData(oldp+52,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arsize),3);
    bufp->fullCData(oldp+53,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_arburst),2);
    bufp->fullBit(oldp+54,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rready));
    bufp->fullIData(oldp+55,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready),17);
    bufp->fullCData(oldp+56,(vlSelf->gpu__DOT__mcu_inst__DOT__next_state),4);
    bufp->fullCData(oldp+57,(vlSelf->gpu__DOT__mcu_inst__DOT__burst_start_idx),5);
    bufp->fullCData(oldp+58,(vlSelf->gpu__DOT__mcu_inst__DOT__burst_len_count),8);
    bufp->fullBit(oldp+59,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__found_burst));
    bufp->fullIData(oldp+60,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+61,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+62,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk5__DOT__byte_addr),17);
    bufp->fullIData(oldp+63,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk6__DOT__byte_addr),17);
    bufp->fullIData(oldp+64,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk7__DOT__byte_addr),17);
    bufp->fullIData(oldp+65,(vlSelf->gpu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+66,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0x10U))));
    bufp->fullBit(oldp+67,((1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready)));
    bufp->fullBit(oldp+68,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 1U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 2U))));
    bufp->fullBit(oldp+70,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 3U))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 4U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 5U))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 6U))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 7U))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 8U))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 9U))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xaU))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xbU))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xcU))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xdU))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xeU))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_ready 
                                  >> 0xfU))));
    bufp->fullBit(oldp+83,(vlSelf->gpu__DOT__core_done));
    bufp->fullBit(oldp+84,(vlSelf->gpu__DOT__core_start));
    bufp->fullBit(oldp+85,(vlSelf->gpu__DOT__core_reset));
    bufp->fullIData(oldp+86,(vlSelf->gpu__DOT__core_block_id[0]),32);
    bufp->fullBit(oldp+87,(vlSelf->gpu__DOT__fetcher_read_valid_core));
    bufp->fullSData(oldp+88,(vlSelf->gpu__DOT__fetcher_read_address_core[0]),16);
    bufp->fullIData(oldp+89,(vlSelf->gpu__DOT____Vcellout__dispatcher_inst__core_block_id[0]),32);
    bufp->fullIData(oldp+90,(vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_done),32);
    bufp->fullIData(oldp+91,(vlSelf->gpu__DOT__dispatcher_inst__DOT__blocks_dispatched),32);
    bufp->fullBit(oldp+92,(vlSelf->gpu__DOT__dispatcher_inst__DOT__start_execution));
    bufp->fullIData(oldp+93,(vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+94,(vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+95,(vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+96,(vlSelf->gpu__DOT__dispatcher_inst__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+97,(vlSelf->gpu__DOT__core_block_id
                             [0U]),32);
    bufp->fullSData(oldp+98,(vlSelf->gpu__DOT____Vcellout__mcu_inst__fetcher_read_address_core[0]),16);
    bufp->fullSData(oldp+99,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__instruction_mem_read_address[0]),16);
    bufp->fullIData(oldp+100,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[0]),17);
    bufp->fullIData(oldp+101,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[1]),17);
    bufp->fullIData(oldp+102,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[2]),17);
    bufp->fullIData(oldp+103,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[3]),17);
    bufp->fullIData(oldp+104,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[4]),17);
    bufp->fullIData(oldp+105,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[5]),17);
    bufp->fullIData(oldp+106,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[6]),17);
    bufp->fullIData(oldp+107,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[7]),17);
    bufp->fullIData(oldp+108,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[8]),17);
    bufp->fullIData(oldp+109,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[9]),17);
    bufp->fullIData(oldp+110,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[10]),17);
    bufp->fullIData(oldp+111,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[11]),17);
    bufp->fullIData(oldp+112,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[12]),17);
    bufp->fullIData(oldp+113,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[13]),17);
    bufp->fullIData(oldp+114,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[14]),17);
    bufp->fullIData(oldp+115,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[15]),17);
    bufp->fullIData(oldp+116,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_read_address[16]),17);
    bufp->fullIData(oldp+117,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[0]),17);
    bufp->fullIData(oldp+118,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[1]),17);
    bufp->fullIData(oldp+119,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[2]),17);
    bufp->fullIData(oldp+120,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[3]),17);
    bufp->fullIData(oldp+121,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[4]),17);
    bufp->fullIData(oldp+122,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[5]),17);
    bufp->fullIData(oldp+123,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[6]),17);
    bufp->fullIData(oldp+124,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[7]),17);
    bufp->fullIData(oldp+125,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[8]),17);
    bufp->fullIData(oldp+126,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[9]),17);
    bufp->fullIData(oldp+127,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[10]),17);
    bufp->fullIData(oldp+128,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[11]),17);
    bufp->fullIData(oldp+129,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[12]),17);
    bufp->fullIData(oldp+130,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[13]),17);
    bufp->fullIData(oldp+131,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[14]),17);
    bufp->fullIData(oldp+132,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[15]),17);
    bufp->fullIData(oldp+133,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_address[16]),17);
    bufp->fullIData(oldp+134,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[0]),32);
    bufp->fullIData(oldp+135,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[1]),32);
    bufp->fullIData(oldp+136,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[2]),32);
    bufp->fullIData(oldp+137,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[3]),32);
    bufp->fullIData(oldp+138,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[4]),32);
    bufp->fullIData(oldp+139,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[5]),32);
    bufp->fullIData(oldp+140,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[6]),32);
    bufp->fullIData(oldp+141,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[7]),32);
    bufp->fullIData(oldp+142,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[8]),32);
    bufp->fullIData(oldp+143,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[9]),32);
    bufp->fullIData(oldp+144,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[10]),32);
    bufp->fullIData(oldp+145,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[11]),32);
    bufp->fullIData(oldp+146,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[12]),32);
    bufp->fullIData(oldp+147,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[13]),32);
    bufp->fullIData(oldp+148,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[14]),32);
    bufp->fullIData(oldp+149,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[15]),32);
    bufp->fullIData(oldp+150,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellout__core_instance__data_mem_write_data[16]),32);
    bufp->fullBit(oldp+151,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp));
    bufp->fullCData(oldp+152,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                              [0U]),4);
    bufp->fullCData(oldp+153,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetcher_state
                              [0U]),2);
    bufp->fullCData(oldp+154,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_state),4);
    bufp->fullIData(oldp+155,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__fetched_instruction[0]),32);
    bufp->fullSData(oldp+156,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc[0]),16);
    bufp->fullSData(oldp+157,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__next_pc[0]),16);
    bufp->fullBit(oldp+158,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__start_execution));
    bufp->fullBit(oldp+159,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_write_enable[0]));
    bufp->fullCData(oldp+160,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_reg_input_mux
                              [0U]),3);
    bufp->fullIData(oldp+161,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_immediate[0]),32);
    bufp->fullBit(oldp+162,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_branch[0]));
    bufp->fullBit(oldp+163,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_scalar_instruction[0]));
    bufp->fullCData(oldp+164,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rd_address[0]),5);
    bufp->fullCData(oldp+165,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs1_address[0]),5);
    bufp->fullCData(oldp+166,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_rs2_address[0]),5);
    bufp->fullCData(oldp+167,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_alu_instruction[0]),5);
    bufp->fullBit(oldp+168,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_halt[0]));
    bufp->fullCData(oldp+169,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingRead_flag[0]),2);
    bufp->fullBit(oldp+170,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__floatingWrite_flag[0]));
    bufp->fullBit(oldp+171,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_read_enable_per_warp[0]));
    bufp->fullBit(oldp+172,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__decoded_mem_write_enable_per_warp[0]));
    bufp->fullIData(oldp+173,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs1[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_int_rs2[0]),32);
    bufp->fullIData(oldp+175,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs1[0]),32);
    bufp->fullIData(oldp+176,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_float_rs2[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0U]),32);
    bufp->fullIData(oldp+178,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][1U]),32);
    bufp->fullIData(oldp+179,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][2U]),32);
    bufp->fullIData(oldp+180,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][3U]),32);
    bufp->fullIData(oldp+181,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][4U]),32);
    bufp->fullIData(oldp+182,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][5U]),32);
    bufp->fullIData(oldp+183,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][6U]),32);
    bufp->fullIData(oldp+184,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][7U]),32);
    bufp->fullIData(oldp+185,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][8U]),32);
    bufp->fullIData(oldp+186,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][9U]),32);
    bufp->fullIData(oldp+187,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xaU]),32);
    bufp->fullIData(oldp+188,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xbU]),32);
    bufp->fullIData(oldp+189,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xcU]),32);
    bufp->fullIData(oldp+190,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xdU]),32);
    bufp->fullIData(oldp+191,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xeU]),32);
    bufp->fullIData(oldp+192,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs1
                              [0U][0xfU]),32);
    bufp->fullIData(oldp+193,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0U]),32);
    bufp->fullIData(oldp+194,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][1U]),32);
    bufp->fullIData(oldp+195,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][2U]),32);
    bufp->fullIData(oldp+196,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][3U]),32);
    bufp->fullIData(oldp+197,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][4U]),32);
    bufp->fullIData(oldp+198,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][5U]),32);
    bufp->fullIData(oldp+199,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][6U]),32);
    bufp->fullIData(oldp+200,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][7U]),32);
    bufp->fullIData(oldp+201,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][8U]),32);
    bufp->fullIData(oldp+202,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][9U]),32);
    bufp->fullIData(oldp+203,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xaU]),32);
    bufp->fullIData(oldp+204,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xbU]),32);
    bufp->fullIData(oldp+205,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xcU]),32);
    bufp->fullIData(oldp+206,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xdU]),32);
    bufp->fullIData(oldp+207,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xeU]),32);
    bufp->fullIData(oldp+208,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_int_rs2
                              [0U][0xfU]),32);
    bufp->fullIData(oldp+209,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0U]),32);
    bufp->fullIData(oldp+210,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][1U]),32);
    bufp->fullIData(oldp+211,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][2U]),32);
    bufp->fullIData(oldp+212,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][3U]),32);
    bufp->fullIData(oldp+213,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][4U]),32);
    bufp->fullIData(oldp+214,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][5U]),32);
    bufp->fullIData(oldp+215,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][6U]),32);
    bufp->fullIData(oldp+216,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][7U]),32);
    bufp->fullIData(oldp+217,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][8U]),32);
    bufp->fullIData(oldp+218,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][9U]),32);
    bufp->fullIData(oldp+219,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xaU]),32);
    bufp->fullIData(oldp+220,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xbU]),32);
    bufp->fullIData(oldp+221,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xcU]),32);
    bufp->fullIData(oldp+222,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xdU]),32);
    bufp->fullIData(oldp+223,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xeU]),32);
    bufp->fullIData(oldp+224,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs1
                              [0U][0xfU]),32);
    bufp->fullIData(oldp+225,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0U]),32);
    bufp->fullIData(oldp+226,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][1U]),32);
    bufp->fullIData(oldp+227,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][2U]),32);
    bufp->fullIData(oldp+228,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][3U]),32);
    bufp->fullIData(oldp+229,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][4U]),32);
    bufp->fullIData(oldp+230,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][5U]),32);
    bufp->fullIData(oldp+231,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][6U]),32);
    bufp->fullIData(oldp+232,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][7U]),32);
    bufp->fullIData(oldp+233,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][8U]),32);
    bufp->fullIData(oldp+234,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][9U]),32);
    bufp->fullIData(oldp+235,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xaU]),32);
    bufp->fullIData(oldp+236,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xbU]),32);
    bufp->fullIData(oldp+237,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xcU]),32);
    bufp->fullIData(oldp+238,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xdU]),32);
    bufp->fullIData(oldp+239,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xeU]),32);
    bufp->fullIData(oldp+240,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_float_rs2
                              [0U][0xfU]),32);
    bufp->fullSData(oldp+241,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_execution_mask[0]),16);
    bufp->fullBit(oldp+242,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__any_lsu_waiting));
    bufp->fullIData(oldp+243,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[0]),32);
    bufp->fullIData(oldp+244,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[1]),32);
    bufp->fullIData(oldp+245,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[2]),32);
    bufp->fullIData(oldp+246,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[3]),32);
    bufp->fullIData(oldp+247,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[4]),32);
    bufp->fullIData(oldp+248,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[5]),32);
    bufp->fullIData(oldp+249,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[6]),32);
    bufp->fullIData(oldp+250,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[7]),32);
    bufp->fullIData(oldp+251,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[8]),32);
    bufp->fullIData(oldp+252,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[9]),32);
    bufp->fullIData(oldp+253,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[10]),32);
    bufp->fullIData(oldp+254,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[11]),32);
    bufp->fullIData(oldp+255,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[12]),32);
    bufp->fullIData(oldp+256,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[13]),32);
    bufp->fullIData(oldp+257,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[14]),32);
    bufp->fullIData(oldp+258,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op1[15]),32);
    bufp->fullIData(oldp+259,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[0]),32);
    bufp->fullIData(oldp+260,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[1]),32);
    bufp->fullIData(oldp+261,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[2]),32);
    bufp->fullIData(oldp+262,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[3]),32);
    bufp->fullIData(oldp+263,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[4]),32);
    bufp->fullIData(oldp+264,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[5]),32);
    bufp->fullIData(oldp+265,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[6]),32);
    bufp->fullIData(oldp+266,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[7]),32);
    bufp->fullIData(oldp+267,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[8]),32);
    bufp->fullIData(oldp+268,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[9]),32);
    bufp->fullIData(oldp+269,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[10]),32);
    bufp->fullIData(oldp+270,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[11]),32);
    bufp->fullIData(oldp+271,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[12]),32);
    bufp->fullIData(oldp+272,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[13]),32);
    bufp->fullIData(oldp+273,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[14]),32);
    bufp->fullIData(oldp+274,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__final_op2[15]),32);
    bufp->fullIData(oldp+275,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[0]),32);
    bufp->fullIData(oldp+276,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[1]),32);
    bufp->fullIData(oldp+277,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[2]),32);
    bufp->fullIData(oldp+278,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[3]),32);
    bufp->fullIData(oldp+279,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[4]),32);
    bufp->fullIData(oldp+280,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[5]),32);
    bufp->fullIData(oldp+281,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[6]),32);
    bufp->fullIData(oldp+282,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[7]),32);
    bufp->fullIData(oldp+283,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[8]),32);
    bufp->fullIData(oldp+284,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[9]),32);
    bufp->fullIData(oldp+285,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[10]),32);
    bufp->fullIData(oldp+286,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[11]),32);
    bufp->fullIData(oldp+287,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[12]),32);
    bufp->fullIData(oldp+288,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[13]),32);
    bufp->fullIData(oldp+289,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[14]),32);
    bufp->fullIData(oldp+290,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__alu_out[15]),32);
    bufp->fullIData(oldp+291,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_out),32);
    bufp->fullIData(oldp+292,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[0]),32);
    bufp->fullIData(oldp+293,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[1]),32);
    bufp->fullIData(oldp+294,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[2]),32);
    bufp->fullIData(oldp+295,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[3]),32);
    bufp->fullIData(oldp+296,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[4]),32);
    bufp->fullIData(oldp+297,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[5]),32);
    bufp->fullIData(oldp+298,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[6]),32);
    bufp->fullIData(oldp+299,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[7]),32);
    bufp->fullIData(oldp+300,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[8]),32);
    bufp->fullIData(oldp+301,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[9]),32);
    bufp->fullIData(oldp+302,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[10]),32);
    bufp->fullIData(oldp+303,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[11]),32);
    bufp->fullIData(oldp+304,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[12]),32);
    bufp->fullIData(oldp+305,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[13]),32);
    bufp->fullIData(oldp+306,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[14]),32);
    bufp->fullIData(oldp+307,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_out[15]),32);
    bufp->fullCData(oldp+308,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0U]),2);
    bufp->fullCData(oldp+309,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [1U]),2);
    bufp->fullCData(oldp+310,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [2U]),2);
    bufp->fullCData(oldp+311,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [3U]),2);
    bufp->fullCData(oldp+312,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [4U]),2);
    bufp->fullCData(oldp+313,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [5U]),2);
    bufp->fullCData(oldp+314,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [6U]),2);
    bufp->fullCData(oldp+315,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [7U]),2);
    bufp->fullCData(oldp+316,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [8U]),2);
    bufp->fullCData(oldp+317,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [9U]),2);
    bufp->fullCData(oldp+318,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xaU]),2);
    bufp->fullCData(oldp+319,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xbU]),2);
    bufp->fullCData(oldp+320,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xcU]),2);
    bufp->fullCData(oldp+321,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xdU]),2);
    bufp->fullCData(oldp+322,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xeU]),2);
    bufp->fullCData(oldp+323,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__lsu_state
                              [0xfU]),2);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_out),32);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+326,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data[0]),32);
    bufp->fullSData(oldp+327,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp_execution_mask),16);
    bufp->fullIData(oldp+328,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op1),32);
    bufp->fullIData(oldp+329,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_op2),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst.Result),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.result),32);
    bufp->fullBit(oldp+332,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+333,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+334,((0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))));
    bufp->fullBit(oldp+335,((0x19U > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction))));
    bufp->fullIData(oldp+336,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+337,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__0__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+338,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+339,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__10__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+340,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+341,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__11__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+342,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+343,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__12__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+344,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+345,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__13__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+346,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+347,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__14__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+348,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+349,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__15__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+350,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+351,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__1__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+352,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+353,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__2__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+354,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+355,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__3__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+356,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+357,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__4__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+358,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+359,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__5__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+360,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+361,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__6__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+362,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+363,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__7__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+364,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+365,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__8__KET____DOT__vector_op2),32);
    bufp->fullIData(oldp+366,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op1),32);
    bufp->fullIData(oldp+367,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_operand_mux__BRA__9__KET____DOT__vector_op2),32);
    bufp->fullBit(oldp+368,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable));
    bufp->fullBit(oldp+369,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+370,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+371,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+373,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__t_enable));
    bufp->fullBit(oldp+374,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+375,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+376,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+378,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__t_enable));
    bufp->fullBit(oldp+379,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+380,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+381,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+382,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+383,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__t_enable));
    bufp->fullBit(oldp+384,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+385,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+386,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+387,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+388,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__t_enable));
    bufp->fullBit(oldp+389,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+390,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+391,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+392,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+393,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable));
    bufp->fullBit(oldp+394,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+395,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+396,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+398,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable));
    bufp->fullBit(oldp+399,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+400,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+401,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+402,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+403,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable));
    bufp->fullBit(oldp+404,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+405,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+406,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+407,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+408,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable));
    bufp->fullBit(oldp+409,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+411,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+413,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+415,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+416,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+417,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+418,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+420,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+421,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+422,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+423,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable));
    bufp->fullBit(oldp+424,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+425,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+426,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+427,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+428,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable));
    bufp->fullBit(oldp+429,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+430,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+431,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+432,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+433,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__t_enable));
    bufp->fullBit(oldp+434,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+435,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+436,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+437,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+438,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__t_enable));
    bufp->fullBit(oldp+439,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+440,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+441,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+442,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullBit(oldp+443,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__t_enable));
    bufp->fullBit(oldp+444,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__t_enable) 
                             & (0xeU <= (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullBit(oldp+445,(((IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__t_enable) 
                             & (0xeU > (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction)))));
    bufp->fullIData(oldp+446,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst.Result),32);
    bufp->fullIData(oldp+447,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.result),32);
    bufp->fullCData(oldp+448,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__warp_state
                              [0U]),4);
    bufp->fullIData(oldp+449,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction),32);
    bufp->fullBit(oldp+450,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_write_enable));
    bufp->fullBit(oldp+451,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_write_enable));
    bufp->fullBit(oldp+452,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_mem_read_enable));
    bufp->fullBit(oldp+453,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_branch));
    bufp->fullCData(oldp+454,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_reg_input_mux),3);
    bufp->fullBit(oldp+455,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_scalar_instruction));
    bufp->fullIData(oldp+456,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_immediate),32);
    bufp->fullCData(oldp+457,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rd_address),5);
    bufp->fullCData(oldp+458,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs1_address),5);
    bufp->fullCData(oldp+459,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_rs2_address),5);
    bufp->fullCData(oldp+460,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_alu_instruction),5);
    bufp->fullBit(oldp+461,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__decoded_halt));
    bufp->fullCData(oldp+462,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingRead),2);
    bufp->fullBit(oldp+463,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__decoder_inst__floatingWrite));
    bufp->fullCData(oldp+464,((vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                               >> 0x1dU)),3);
    bufp->fullCData(oldp+465,((0x1fU & vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction)),5);
    bufp->fullCData(oldp+466,((7U & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                     >> 0xaU))),3);
    bufp->fullCData(oldp+467,((0x1fU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                        >> 5U))),5);
    bufp->fullCData(oldp+468,((0xfU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+469,((0x1fU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                        >> 0xeU))),5);
    bufp->fullSData(oldp+470,((0x3fffU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                          >> 0xeU))),14);
    bufp->fullSData(oldp+471,((0x7fffU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                          >> 0xeU))),15);
    bufp->fullSData(oldp+472,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_s),15);
    bufp->fullSData(oldp+473,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_b),16);
    bufp->fullIData(oldp+474,((0xfffffU & (vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction 
                                           >> 9U))),20);
    bufp->fullIData(oldp+475,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__decoder_inst__DOT__imm_j),26);
    bufp->fullSData(oldp+476,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__pc
                              [0U]),16);
    bufp->fullSData(oldp+477,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__instruction_mem_read_address),16);
    bufp->fullCData(oldp+478,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellout__g_warp__BRA__0__KET____DOT__fetcher_inst__fetcher_state),2);
    bufp->fullIData(oldp+479,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+480,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+481,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+482,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__next_warp),32);
    bufp->fullIData(oldp+483,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__found_warp),32);
    bufp->fullIData(oldp+484,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+485,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__warp_index),32);
    bufp->fullIData(oldp+486,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+487,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk9__DOT__scalar_write_value),32);
    bufp->fullIData(oldp+488,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i),32);
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__current_warp)))));
    bufp->fullIData(oldp+490,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                              [0x1fU]),32);
    bufp->fullBit(oldp+491,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst__decoded_reg_write_enable));
    bufp->fullIData(oldp+492,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__vector_to_scalar_data
                              [0U]),32);
    bufp->fullIData(oldp+493,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.rs1),32);
    bufp->fullIData(oldp+494,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.rs2),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[0]),32);
    bufp->fullIData(oldp+496,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[1]),32);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[2]),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[3]),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[4]),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[5]),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[6]),32);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[7]),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[8]),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[9]),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[10]),32);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[11]),32);
    bufp->fullIData(oldp+507,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[12]),32);
    bufp->fullIData(oldp+508,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[13]),32);
    bufp->fullIData(oldp+509,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[14]),32);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[15]),32);
    bufp->fullIData(oldp+511,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[16]),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[17]),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[18]),32);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[19]),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[20]),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[21]),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[22]),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[23]),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[24]),32);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[25]),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[26]),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[27]),32);
    bufp->fullIData(oldp+523,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[28]),32);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[29]),32);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[30]),32);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers[31]),32);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers
                              [0x1fU]),32);
    bufp->fullBit(oldp+529,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst__decoded_reg_write_enable));
    bufp->fullIData(oldp+530,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.rs1),32);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.rs2),32);
    bufp->fullIData(oldp+532,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[0]),32);
    bufp->fullIData(oldp+533,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[1]),32);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[2]),32);
    bufp->fullIData(oldp+535,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[3]),32);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[4]),32);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[5]),32);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[6]),32);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[7]),32);
    bufp->fullIData(oldp+540,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[8]),32);
    bufp->fullIData(oldp+541,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[9]),32);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[10]),32);
    bufp->fullIData(oldp+543,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[11]),32);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[12]),32);
    bufp->fullIData(oldp+545,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[13]),32);
    bufp->fullIData(oldp+546,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[14]),32);
    bufp->fullIData(oldp+547,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[15]),32);
    bufp->fullIData(oldp+548,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[16]),32);
    bufp->fullIData(oldp+549,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[17]),32);
    bufp->fullIData(oldp+550,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[18]),32);
    bufp->fullIData(oldp+551,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[19]),32);
    bufp->fullIData(oldp+552,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[20]),32);
    bufp->fullIData(oldp+553,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[21]),32);
    bufp->fullIData(oldp+554,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[22]),32);
    bufp->fullIData(oldp+555,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[23]),32);
    bufp->fullIData(oldp+556,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[24]),32);
    bufp->fullIData(oldp+557,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[25]),32);
    bufp->fullIData(oldp+558,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[26]),32);
    bufp->fullIData(oldp+559,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[27]),32);
    bufp->fullIData(oldp+560,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[28]),32);
    bufp->fullIData(oldp+561,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[29]),32);
    bufp->fullIData(oldp+562,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[30]),32);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__registers[31]),32);
    bufp->fullIData(oldp+564,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+565,((0xffffU & vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst.__PVT__registers
                               [0x1fU])),16);
    bufp->fullBit(oldp+566,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__floating_reg_file_inst__decoded_reg_write_enable));
    bufp->fullIData(oldp+567,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[0]),32);
    bufp->fullIData(oldp+568,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[1]),32);
    bufp->fullIData(oldp+569,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[2]),32);
    bufp->fullIData(oldp+570,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[3]),32);
    bufp->fullIData(oldp+571,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[4]),32);
    bufp->fullIData(oldp+572,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[5]),32);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[6]),32);
    bufp->fullIData(oldp+574,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[7]),32);
    bufp->fullIData(oldp+575,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[8]),32);
    bufp->fullIData(oldp+576,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[9]),32);
    bufp->fullIData(oldp+577,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[10]),32);
    bufp->fullIData(oldp+578,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[11]),32);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[12]),32);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[13]),32);
    bufp->fullIData(oldp+581,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[14]),32);
    bufp->fullIData(oldp+582,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.alu_out[15]),32);
    bufp->fullIData(oldp+583,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[0]),32);
    bufp->fullIData(oldp+584,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[1]),32);
    bufp->fullIData(oldp+585,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[2]),32);
    bufp->fullIData(oldp+586,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[3]),32);
    bufp->fullIData(oldp+587,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[4]),32);
    bufp->fullIData(oldp+588,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[5]),32);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[6]),32);
    bufp->fullIData(oldp+590,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[7]),32);
    bufp->fullIData(oldp+591,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[8]),32);
    bufp->fullIData(oldp+592,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[9]),32);
    bufp->fullIData(oldp+593,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[10]),32);
    bufp->fullIData(oldp+594,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[11]),32);
    bufp->fullIData(oldp+595,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[12]),32);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[13]),32);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[14]),32);
    bufp->fullIData(oldp+598,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.lsu_out[15]),32);
    bufp->fullIData(oldp+599,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[0]),32);
    bufp->fullIData(oldp+600,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[1]),32);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[2]),32);
    bufp->fullIData(oldp+602,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[3]),32);
    bufp->fullIData(oldp+603,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[4]),32);
    bufp->fullIData(oldp+604,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[5]),32);
    bufp->fullIData(oldp+605,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[6]),32);
    bufp->fullIData(oldp+606,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[7]),32);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[8]),32);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[9]),32);
    bufp->fullIData(oldp+609,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[10]),32);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[11]),32);
    bufp->fullIData(oldp+611,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[12]),32);
    bufp->fullIData(oldp+612,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[13]),32);
    bufp->fullIData(oldp+613,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[14]),32);
    bufp->fullIData(oldp+614,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs1[15]),32);
    bufp->fullIData(oldp+615,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[0]),32);
    bufp->fullIData(oldp+616,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[1]),32);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[2]),32);
    bufp->fullIData(oldp+618,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[3]),32);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[4]),32);
    bufp->fullIData(oldp+620,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[5]),32);
    bufp->fullIData(oldp+621,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[6]),32);
    bufp->fullIData(oldp+622,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[7]),32);
    bufp->fullIData(oldp+623,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[8]),32);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[9]),32);
    bufp->fullIData(oldp+625,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[10]),32);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[11]),32);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[12]),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[13]),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[14]),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.rs2[15]),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+632,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+633,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+634,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst.__PVT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+635,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_warp__BRA__0__KET____DOT__reg_file_inst__decoded_reg_write_enable));
    bufp->fullIData(oldp+636,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[0]),32);
    bufp->fullIData(oldp+637,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[1]),32);
    bufp->fullIData(oldp+638,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[2]),32);
    bufp->fullIData(oldp+639,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[3]),32);
    bufp->fullIData(oldp+640,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[4]),32);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[5]),32);
    bufp->fullIData(oldp+642,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[6]),32);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[7]),32);
    bufp->fullIData(oldp+644,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[8]),32);
    bufp->fullIData(oldp+645,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[9]),32);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[10]),32);
    bufp->fullIData(oldp+647,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[11]),32);
    bufp->fullIData(oldp+648,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[12]),32);
    bufp->fullIData(oldp+649,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[13]),32);
    bufp->fullIData(oldp+650,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[14]),32);
    bufp->fullIData(oldp+651,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.alu_out[15]),32);
    bufp->fullIData(oldp+652,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[0]),32);
    bufp->fullIData(oldp+653,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[1]),32);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[2]),32);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[3]),32);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[4]),32);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[5]),32);
    bufp->fullIData(oldp+658,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[6]),32);
    bufp->fullIData(oldp+659,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[7]),32);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[8]),32);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[9]),32);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[10]),32);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[11]),32);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[12]),32);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[13]),32);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[14]),32);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.lsu_out[15]),32);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[0]),32);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[1]),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[2]),32);
    bufp->fullIData(oldp+671,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[3]),32);
    bufp->fullIData(oldp+672,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[4]),32);
    bufp->fullIData(oldp+673,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[5]),32);
    bufp->fullIData(oldp+674,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[6]),32);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[7]),32);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[8]),32);
    bufp->fullIData(oldp+677,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[9]),32);
    bufp->fullIData(oldp+678,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[10]),32);
    bufp->fullIData(oldp+679,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[11]),32);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[12]),32);
    bufp->fullIData(oldp+681,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[13]),32);
    bufp->fullIData(oldp+682,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[14]),32);
    bufp->fullIData(oldp+683,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs1[15]),32);
    bufp->fullIData(oldp+684,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[0]),32);
    bufp->fullIData(oldp+685,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[1]),32);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[2]),32);
    bufp->fullIData(oldp+687,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[3]),32);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[4]),32);
    bufp->fullIData(oldp+689,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[5]),32);
    bufp->fullIData(oldp+690,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[6]),32);
    bufp->fullIData(oldp+691,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[7]),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[8]),32);
    bufp->fullIData(oldp+693,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[9]),32);
    bufp->fullIData(oldp+694,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[10]),32);
    bufp->fullIData(oldp+695,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[11]),32);
    bufp->fullIData(oldp+696,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[12]),32);
    bufp->fullIData(oldp+697,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[13]),32);
    bufp->fullIData(oldp+698,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[14]),32);
    bufp->fullIData(oldp+699,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.rs2[15]),32);
    bufp->fullIData(oldp+700,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+701,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+703,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst.__PVT__unnamedblk5__DOT__i),32);
    bufp->fullSData(oldp+704,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__pc),16);
    bufp->fullCData(oldp+705,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__instruction),5);
    bufp->fullIData(oldp+706,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__IMM),32);
    bufp->fullIData(oldp+707,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+708,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+709,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+710,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__1__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+711,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+712,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__2__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+713,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+714,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__3__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+715,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+716,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__4__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+717,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+718,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__5__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+719,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+720,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__6__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+721,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+722,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__7__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+723,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+724,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__8__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+725,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+726,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__9__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+727,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+728,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__10__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+729,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+730,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__11__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+731,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+732,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__12__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+733,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+734,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__13__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+735,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+736,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__14__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullIData(oldp+737,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop1),32);
    bufp->fullIData(oldp+738,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__15__KET____DOT__vector_alu_inst__ALUop2),32);
    bufp->fullBit(oldp+739,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+740,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+741,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+742,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+745,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+746,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+747,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+748,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+749,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+750,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+751,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+752,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+753,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+754,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+755,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+757,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+759,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+761,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+763,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+764,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+765,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+766,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+769,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+770,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+771,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+772,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+774,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+775,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+776,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+777,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+780,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+781,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+784,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+785,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+786,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+787,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+788,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+789,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+790,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+792,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+794,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+796,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+798,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+799,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+800,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+801,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+803,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+804,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+806,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+807,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+809,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+811,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+812,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+815,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+816,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+817,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+818,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+819,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+821,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+822,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+823,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+824,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+825,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+827,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+829,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+831,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+833,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+835,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+836,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+837,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+838,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+839,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+840,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+841,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+842,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+843,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+844,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+846,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+847,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+849,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+850,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+851,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+852,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+853,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+854,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+855,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+859,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+860,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+862,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+864,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+866,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+870,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+871,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+872,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+873,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+874,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+876,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+877,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+878,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+879,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+881,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+882,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+883,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+884,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+885,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+886,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+888,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+889,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+890,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+891,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+892,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+894,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+895,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+897,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+899,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+901,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+904,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+905,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+909,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+911,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+912,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+914,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+915,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+916,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+917,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+920,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+921,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+922,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+925,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+926,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+927,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+928,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+929,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+930,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+932,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+934,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+936,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+938,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+940,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+941,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+942,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+943,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+944,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+945,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+946,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+947,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+948,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+949,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+950,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+951,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+952,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+953,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+954,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+955,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+956,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+957,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+958,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+959,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+960,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+961,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+962,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+963,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+964,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+965,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+967,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+969,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+971,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+973,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+974,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+975,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+978,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+979,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+980,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+981,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+982,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+984,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+985,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+986,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+987,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+989,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+990,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+991,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+992,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+993,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+994,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+995,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+996,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+997,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+998,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+999,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1000,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1002,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1004,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1006,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1009,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1010,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1014,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1016,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1017,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1021,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1022,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1025,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1026,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1027,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1029,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1031,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1035,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1037,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1039,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1041,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1043,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1044,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1045,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1047,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1048,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1049,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1051,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1052,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1053,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1054,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1055,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1056,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1057,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1058,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1059,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1060,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1061,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1062,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1063,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1064,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1065,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1066,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1067,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1068,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1069,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1070,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1072,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1074,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1076,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1078,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1079,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1080,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1081,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1083,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1084,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1085,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1086,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1087,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1089,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1090,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1091,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1092,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1093,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1095,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1096,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1097,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1098,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1099,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1100,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1102,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1105,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1107,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1109,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1111,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1114,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1115,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1119,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1121,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1122,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1123,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1124,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1126,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1127,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1128,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1129,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1130,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1131,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1132,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1134,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1135,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1138,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1139,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1140,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1142,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1144,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1146,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1148,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1150,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1151,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1152,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1153,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1154,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1156,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1157,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1158,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1160,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1161,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1162,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1164,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1165,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1166,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1167,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1168,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1169,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1170,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1171,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1172,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1173,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1174,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1175,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1177,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1179,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1181,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1183,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1184,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1185,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1186,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1187,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1188,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1189,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1190,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1191,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1192,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1193,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1194,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1195,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1197,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1198,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1199,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1200,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1201,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1202,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1203,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1204,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1205,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1206,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1207,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1208,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1209,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1210,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1212,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1214,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1216,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1219,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1220,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1221,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1222,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1223,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1224,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1225,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1226,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1227,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1228,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1229,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1230,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1231,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1232,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1233,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1234,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1235,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1236,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1237,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1238,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1239,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1240,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1241,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1242,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1243,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1244,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1245,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1247,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1249,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1251,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1253,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1254,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1255,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1256,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1257,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1258,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1259,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1260,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1261,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1262,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1263,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1264,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1265,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1266,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1267,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1268,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1269,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1270,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1271,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1272,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1273,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1274,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1275,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1276,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1277,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1278,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1279,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1280,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1282,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1284,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1286,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1288,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1289,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1290,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1291,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1292,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1293,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1294,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1295,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1296,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1297,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1298,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1299,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op1_sign_bit));
    bufp->fullBit(oldp+1300,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op2_sign_bit));
    bufp->fullCData(oldp+1301,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op1_biased_exponent),8);
    bufp->fullCData(oldp+1302,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op2_biased_exponent),8);
    bufp->fullIData(oldp+1303,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op1_significand),24);
    bufp->fullIData(oldp+1304,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op2_significand),24);
    bufp->fullCData(oldp+1305,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__exp_diff),8);
    bufp->fullCData(oldp+1306,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__result_exp),8);
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__sum),25);
    bufp->fullIData(oldp+1308,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op1),25);
    bufp->fullIData(oldp+1309,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__mantissa_shift_op2),25);
    bufp->fullBit(oldp+1310,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__result_sign_bit));
    bufp->fullBit(oldp+1311,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__guard_bit));
    bufp->fullBit(oldp+1312,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__round_bit));
    bufp->fullBit(oldp+1313,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__round_up));
    bufp->fullIData(oldp+1314,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__rounded_sum),24);
    bufp->fullQData(oldp+1315,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__product),48);
    bufp->fullQData(oldp+1317,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__quotient),48);
    bufp->fullQData(oldp+1319,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__numerator),48);
    bufp->fullQData(oldp+1321,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__denominator),48);
    bufp->fullIData(oldp+1323,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__shift_count),32);
    bufp->fullBit(oldp+1324,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__sticky_bit));
    bufp->fullCData(oldp+1325,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op1_unbiased_exponent),8);
    bufp->fullIData(oldp+1326,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__op1_int),32);
    bufp->fullIData(oldp+1327,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__abs_op1),32);
    bufp->fullIData(oldp+1328,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__significant_one),32);
    bufp->fullSData(oldp+1329,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__norm_exponent),9);
    bufp->fullIData(oldp+1330,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__norm_mantissa),23);
    bufp->fullSData(oldp+1331,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__intermediary_exponent),9);
    bufp->fullSData(oldp+1332,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__shift),9);
    bufp->fullIData(oldp+1333,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1334,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__scalar_lsu_inst__enable));
    bufp->fullBit(oldp+1335,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_read_enable));
    bufp->fullBit(oldp+1336,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT____Vcellinp__g_vector_units__BRA__0__KET____DOT__lsu_inst__decoded_mem_write_enable));
    bufp->fullBit(oldp+1337,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1338,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1339,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1340,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1341,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.mem_write_data),32);
    bufp->fullIData(oldp+1342,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1343,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1344,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1345,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1346,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1347,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1348,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1349,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1350,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1351,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1352,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1353,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1354,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1355,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1356,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1357,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1358,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1360,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1361,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1362,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1363,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1364,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1365,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1366,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1367,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1368,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1369,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1370,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1371,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1372,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1373,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1374,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1375,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1376,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1377,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1378,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1379,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1380,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1381,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1382,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1384,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1385,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1386,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1387,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1388,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1389,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1390,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1391,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1392,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1393,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1394,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1395,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1396,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1397,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1398,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1399,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1400,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1401,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1402,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1403,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1404,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1405,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1406,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1407,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1408,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1409,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1410,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1411,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1412,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1413,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1414,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1415,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1416,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1417,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1419,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1420,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1421,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1423,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1425,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1426,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1427,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1428,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1429,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1430,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1431,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1432,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1433,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1434,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1435,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1436,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1437,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1438,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1439,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1440,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1441,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1442,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1443,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1444,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1445,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1446,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1447,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1448,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1449,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1450,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1451,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1452,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1453,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1454,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1455,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1456,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1457,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1458,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1459,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1460,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1461,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1462,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullBit(oldp+1463,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_read_valid));
    bufp->fullIData(oldp+1464,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_read_address),17);
    bufp->fullBit(oldp+1465,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_valid));
    bufp->fullIData(oldp+1466,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_address),17);
    bufp->fullIData(oldp+1467,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.mem_write_data),32);
    bufp->fullCData(oldp+1468,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.lsu_state),2);
    bufp->fullIData(oldp+1469,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.lsu_out),32);
    bufp->fullIData(oldp+1470,(vlSymsp->TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst.__PVT__offset_address),32);
    bufp->fullWData(oldp+1471,(vlSelf->gpu__DOT__kernel_config_reg),97);
    bufp->fullBit(oldp+1475,(vlSelf->gpu__DOT__start_execution));
    bufp->fullIData(oldp+1476,(vlSelf->gpu__DOT__kernel_config_reg[1U]),32);
    bufp->fullBit(oldp+1477,((0U != (IData)(vlSelf->gpu__DOT__mcu_inst__DOT__state))));
    bufp->fullIData(oldp+1478,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready),17);
    bufp->fullIData(oldp+1479,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[0]),32);
    bufp->fullIData(oldp+1480,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[1]),32);
    bufp->fullIData(oldp+1481,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[2]),32);
    bufp->fullIData(oldp+1482,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[3]),32);
    bufp->fullIData(oldp+1483,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[4]),32);
    bufp->fullIData(oldp+1484,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[5]),32);
    bufp->fullIData(oldp+1485,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[6]),32);
    bufp->fullIData(oldp+1486,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[7]),32);
    bufp->fullIData(oldp+1487,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[8]),32);
    bufp->fullIData(oldp+1488,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[9]),32);
    bufp->fullIData(oldp+1489,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[10]),32);
    bufp->fullIData(oldp+1490,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[11]),32);
    bufp->fullIData(oldp+1491,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[12]),32);
    bufp->fullIData(oldp+1492,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[13]),32);
    bufp->fullIData(oldp+1493,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[14]),32);
    bufp->fullIData(oldp+1494,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[15]),32);
    bufp->fullIData(oldp+1495,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_data[16]),32);
    bufp->fullCData(oldp+1496,(vlSelf->gpu__DOT__mcu_inst__DOT__state),4);
    bufp->fullCData(oldp+1497,(vlSelf->gpu__DOT__mcu_inst__DOT__burst_data_counter),8);
    bufp->fullIData(oldp+1498,(vlSelf->gpu__DOT__mcu_inst__DOT__req_valid),17);
    bufp->fullIData(oldp+1499,(vlSelf->gpu__DOT__mcu_inst__DOT__req_is_write),17);
    bufp->fullIData(oldp+1500,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[0]),17);
    bufp->fullIData(oldp+1501,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[1]),17);
    bufp->fullIData(oldp+1502,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[2]),17);
    bufp->fullIData(oldp+1503,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[3]),17);
    bufp->fullIData(oldp+1504,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[4]),17);
    bufp->fullIData(oldp+1505,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[5]),17);
    bufp->fullIData(oldp+1506,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[6]),17);
    bufp->fullIData(oldp+1507,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[7]),17);
    bufp->fullIData(oldp+1508,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[8]),17);
    bufp->fullIData(oldp+1509,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[9]),17);
    bufp->fullIData(oldp+1510,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[10]),17);
    bufp->fullIData(oldp+1511,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[11]),17);
    bufp->fullIData(oldp+1512,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[12]),17);
    bufp->fullIData(oldp+1513,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[13]),17);
    bufp->fullIData(oldp+1514,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[14]),17);
    bufp->fullIData(oldp+1515,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[15]),17);
    bufp->fullIData(oldp+1516,(vlSelf->gpu__DOT__mcu_inst__DOT__req_addr[16]),17);
    bufp->fullIData(oldp+1517,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[0]),32);
    bufp->fullIData(oldp+1518,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[1]),32);
    bufp->fullIData(oldp+1519,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[2]),32);
    bufp->fullIData(oldp+1520,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[3]),32);
    bufp->fullIData(oldp+1521,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[4]),32);
    bufp->fullIData(oldp+1522,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[5]),32);
    bufp->fullIData(oldp+1523,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[6]),32);
    bufp->fullIData(oldp+1524,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[7]),32);
    bufp->fullIData(oldp+1525,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[8]),32);
    bufp->fullIData(oldp+1526,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[9]),32);
    bufp->fullIData(oldp+1527,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[10]),32);
    bufp->fullIData(oldp+1528,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[11]),32);
    bufp->fullIData(oldp+1529,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[12]),32);
    bufp->fullIData(oldp+1530,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[13]),32);
    bufp->fullIData(oldp+1531,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[14]),32);
    bufp->fullIData(oldp+1532,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[15]),32);
    bufp->fullIData(oldp+1533,(vlSelf->gpu__DOT__mcu_inst__DOT__req_wdata[16]),32);
    bufp->fullIData(oldp+1534,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[0]),32);
    bufp->fullIData(oldp+1535,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[1]),32);
    bufp->fullIData(oldp+1536,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[2]),32);
    bufp->fullIData(oldp+1537,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[3]),32);
    bufp->fullIData(oldp+1538,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[4]),32);
    bufp->fullIData(oldp+1539,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[5]),32);
    bufp->fullIData(oldp+1540,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[6]),32);
    bufp->fullIData(oldp+1541,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[7]),32);
    bufp->fullIData(oldp+1542,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[8]),32);
    bufp->fullIData(oldp+1543,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[9]),32);
    bufp->fullIData(oldp+1544,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[10]),32);
    bufp->fullIData(oldp+1545,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[11]),32);
    bufp->fullIData(oldp+1546,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[12]),32);
    bufp->fullIData(oldp+1547,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[13]),32);
    bufp->fullIData(oldp+1548,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[14]),32);
    bufp->fullIData(oldp+1549,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[15]),32);
    bufp->fullIData(oldp+1550,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data[16]),32);
    bufp->fullIData(oldp+1551,(vlSelf->gpu__DOT__kernel_config_reg[0U]),32);
    bufp->fullIData(oldp+1552,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+1553,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+1554,(vlSelf->gpu__DOT__mcu_inst__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+1555,((vlSelf->gpu__DOT__kernel_config_reg[0U] 
                                << 4U)),32);
    bufp->fullBit(oldp+1556,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0x10U))));
    bufp->fullIData(oldp+1557,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0x10U]),32);
    bufp->fullBit(oldp+1558,((1U & vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready)));
    bufp->fullIData(oldp+1559,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0U]),32);
    bufp->fullBit(oldp+1560,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 1U))));
    bufp->fullIData(oldp+1561,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [1U]),32);
    bufp->fullBit(oldp+1562,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 2U))));
    bufp->fullIData(oldp+1563,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [2U]),32);
    bufp->fullBit(oldp+1564,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 3U))));
    bufp->fullIData(oldp+1565,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [3U]),32);
    bufp->fullBit(oldp+1566,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 4U))));
    bufp->fullIData(oldp+1567,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [4U]),32);
    bufp->fullBit(oldp+1568,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 5U))));
    bufp->fullIData(oldp+1569,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [5U]),32);
    bufp->fullBit(oldp+1570,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 6U))));
    bufp->fullIData(oldp+1571,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [6U]),32);
    bufp->fullBit(oldp+1572,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 7U))));
    bufp->fullIData(oldp+1573,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [7U]),32);
    bufp->fullBit(oldp+1574,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 8U))));
    bufp->fullIData(oldp+1575,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [8U]),32);
    bufp->fullBit(oldp+1576,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 9U))));
    bufp->fullIData(oldp+1577,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [9U]),32);
    bufp->fullBit(oldp+1578,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xaU))));
    bufp->fullIData(oldp+1579,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xaU]),32);
    bufp->fullBit(oldp+1580,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xbU))));
    bufp->fullIData(oldp+1581,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xbU]),32);
    bufp->fullBit(oldp+1582,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xcU))));
    bufp->fullIData(oldp+1583,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xcU]),32);
    bufp->fullBit(oldp+1584,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xdU))));
    bufp->fullIData(oldp+1585,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xdU]),32);
    bufp->fullBit(oldp+1586,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xeU))));
    bufp->fullIData(oldp+1587,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xeU]),32);
    bufp->fullBit(oldp+1588,((1U & (vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_ready 
                                    >> 0xfU))));
    bufp->fullIData(oldp+1589,(vlSelf->gpu__DOT__mcu_inst__DOT____Vcellinp__core_instance__data_mem_read_data
                               [0xfU]),32);
    bufp->fullIData(oldp+1590,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_valid),17);
    bufp->fullIData(oldp+1591,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[0]),17);
    bufp->fullIData(oldp+1592,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[1]),17);
    bufp->fullIData(oldp+1593,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[2]),17);
    bufp->fullIData(oldp+1594,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[3]),17);
    bufp->fullIData(oldp+1595,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[4]),17);
    bufp->fullIData(oldp+1596,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[5]),17);
    bufp->fullIData(oldp+1597,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[6]),17);
    bufp->fullIData(oldp+1598,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[7]),17);
    bufp->fullIData(oldp+1599,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[8]),17);
    bufp->fullIData(oldp+1600,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[9]),17);
    bufp->fullIData(oldp+1601,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[10]),17);
    bufp->fullIData(oldp+1602,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[11]),17);
    bufp->fullIData(oldp+1603,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[12]),17);
    bufp->fullIData(oldp+1604,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[13]),17);
    bufp->fullIData(oldp+1605,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[14]),17);
    bufp->fullIData(oldp+1606,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[15]),17);
    bufp->fullIData(oldp+1607,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_read_address[16]),17);
    bufp->fullIData(oldp+1608,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_valid),17);
    bufp->fullIData(oldp+1609,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[0]),17);
    bufp->fullIData(oldp+1610,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[1]),17);
    bufp->fullIData(oldp+1611,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[2]),17);
    bufp->fullIData(oldp+1612,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[3]),17);
    bufp->fullIData(oldp+1613,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[4]),17);
    bufp->fullIData(oldp+1614,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[5]),17);
    bufp->fullIData(oldp+1615,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[6]),17);
    bufp->fullIData(oldp+1616,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[7]),17);
    bufp->fullIData(oldp+1617,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[8]),17);
    bufp->fullIData(oldp+1618,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[9]),17);
    bufp->fullIData(oldp+1619,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[10]),17);
    bufp->fullIData(oldp+1620,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[11]),17);
    bufp->fullIData(oldp+1621,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[12]),17);
    bufp->fullIData(oldp+1622,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[13]),17);
    bufp->fullIData(oldp+1623,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[14]),17);
    bufp->fullIData(oldp+1624,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[15]),17);
    bufp->fullIData(oldp+1625,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_address[16]),17);
    bufp->fullIData(oldp+1626,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[0]),32);
    bufp->fullIData(oldp+1627,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[1]),32);
    bufp->fullIData(oldp+1628,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[2]),32);
    bufp->fullIData(oldp+1629,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[3]),32);
    bufp->fullIData(oldp+1630,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[4]),32);
    bufp->fullIData(oldp+1631,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[5]),32);
    bufp->fullIData(oldp+1632,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[6]),32);
    bufp->fullIData(oldp+1633,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[7]),32);
    bufp->fullIData(oldp+1634,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[8]),32);
    bufp->fullIData(oldp+1635,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[9]),32);
    bufp->fullIData(oldp+1636,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[10]),32);
    bufp->fullIData(oldp+1637,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[11]),32);
    bufp->fullIData(oldp+1638,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[12]),32);
    bufp->fullIData(oldp+1639,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[13]),32);
    bufp->fullIData(oldp+1640,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[14]),32);
    bufp->fullIData(oldp+1641,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[15]),32);
    bufp->fullIData(oldp+1642,(vlSelf->gpu__DOT__mcu_inst__DOT__consumer_write_data[16]),32);
    bufp->fullBit(oldp+1643,(vlSelf->clk));
    bufp->fullBit(oldp+1644,(vlSelf->reset));
    bufp->fullIData(oldp+1645,(vlSelf->base_instr),32);
    bufp->fullIData(oldp+1646,(vlSelf->base_data),32);
    bufp->fullIData(oldp+1647,(vlSelf->num_blocks),32);
    bufp->fullIData(oldp+1648,(vlSelf->warps_per_block),32);
    bufp->fullBit(oldp+1649,(vlSelf->execution_start));
    bufp->fullBit(oldp+1650,(vlSelf->execution_done));
    bufp->fullBit(oldp+1651,(vlSelf->instruction_mem_read_valid));
    bufp->fullSData(oldp+1652,(vlSelf->instruction_mem_read_address[0]),16);
    bufp->fullBit(oldp+1653,(vlSelf->instruction_mem_read_ready));
    bufp->fullIData(oldp+1654,(vlSelf->instruction_mem_read_data[0]),32);
    bufp->fullBit(oldp+1655,(vlSelf->data_mem_read_valid));
    bufp->fullIData(oldp+1656,(vlSelf->data_mem_read_address[0]),17);
    bufp->fullBit(oldp+1657,(vlSelf->data_mem_read_ready));
    bufp->fullIData(oldp+1658,(vlSelf->data_mem_read_data[0]),32);
    bufp->fullBit(oldp+1659,(vlSelf->data_mem_write_valid));
    bufp->fullIData(oldp+1660,(vlSelf->data_mem_write_address[0]),17);
    bufp->fullIData(oldp+1661,(vlSelf->data_mem_write_data[0]),32);
    bufp->fullBit(oldp+1662,(vlSelf->data_mem_write_ready));
    bufp->fullIData(oldp+1663,(vlSelf->data_mem_read_data
                               [0U]),32);
    bufp->fullBit(oldp+1664,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__all_warps_done));
    bufp->fullIData(oldp+1665,(vlSelf->gpu__DOT__mcu_inst__DOT__core_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1666,(1U),32);
    bufp->fullIData(oldp+1667,(0x10U),32);
    bufp->fullIData(oldp+1668,(0x11U),32);
    bufp->fullIData(oldp+1669,(vlSelf->gpu__DOT__lsu_read_valid),17);
    bufp->fullIData(oldp+1670,(vlSelf->gpu__DOT__lsu_read_address[0]),17);
    bufp->fullIData(oldp+1671,(vlSelf->gpu__DOT__lsu_read_address[1]),17);
    bufp->fullIData(oldp+1672,(vlSelf->gpu__DOT__lsu_read_address[2]),17);
    bufp->fullIData(oldp+1673,(vlSelf->gpu__DOT__lsu_read_address[3]),17);
    bufp->fullIData(oldp+1674,(vlSelf->gpu__DOT__lsu_read_address[4]),17);
    bufp->fullIData(oldp+1675,(vlSelf->gpu__DOT__lsu_read_address[5]),17);
    bufp->fullIData(oldp+1676,(vlSelf->gpu__DOT__lsu_read_address[6]),17);
    bufp->fullIData(oldp+1677,(vlSelf->gpu__DOT__lsu_read_address[7]),17);
    bufp->fullIData(oldp+1678,(vlSelf->gpu__DOT__lsu_read_address[8]),17);
    bufp->fullIData(oldp+1679,(vlSelf->gpu__DOT__lsu_read_address[9]),17);
    bufp->fullIData(oldp+1680,(vlSelf->gpu__DOT__lsu_read_address[10]),17);
    bufp->fullIData(oldp+1681,(vlSelf->gpu__DOT__lsu_read_address[11]),17);
    bufp->fullIData(oldp+1682,(vlSelf->gpu__DOT__lsu_read_address[12]),17);
    bufp->fullIData(oldp+1683,(vlSelf->gpu__DOT__lsu_read_address[13]),17);
    bufp->fullIData(oldp+1684,(vlSelf->gpu__DOT__lsu_read_address[14]),17);
    bufp->fullIData(oldp+1685,(vlSelf->gpu__DOT__lsu_read_address[15]),17);
    bufp->fullIData(oldp+1686,(vlSelf->gpu__DOT__lsu_read_address[16]),17);
    bufp->fullIData(oldp+1687,(vlSelf->gpu__DOT__lsu_read_ready),17);
    bufp->fullIData(oldp+1688,(vlSelf->gpu__DOT__lsu_read_data[0]),32);
    bufp->fullIData(oldp+1689,(vlSelf->gpu__DOT__lsu_read_data[1]),32);
    bufp->fullIData(oldp+1690,(vlSelf->gpu__DOT__lsu_read_data[2]),32);
    bufp->fullIData(oldp+1691,(vlSelf->gpu__DOT__lsu_read_data[3]),32);
    bufp->fullIData(oldp+1692,(vlSelf->gpu__DOT__lsu_read_data[4]),32);
    bufp->fullIData(oldp+1693,(vlSelf->gpu__DOT__lsu_read_data[5]),32);
    bufp->fullIData(oldp+1694,(vlSelf->gpu__DOT__lsu_read_data[6]),32);
    bufp->fullIData(oldp+1695,(vlSelf->gpu__DOT__lsu_read_data[7]),32);
    bufp->fullIData(oldp+1696,(vlSelf->gpu__DOT__lsu_read_data[8]),32);
    bufp->fullIData(oldp+1697,(vlSelf->gpu__DOT__lsu_read_data[9]),32);
    bufp->fullIData(oldp+1698,(vlSelf->gpu__DOT__lsu_read_data[10]),32);
    bufp->fullIData(oldp+1699,(vlSelf->gpu__DOT__lsu_read_data[11]),32);
    bufp->fullIData(oldp+1700,(vlSelf->gpu__DOT__lsu_read_data[12]),32);
    bufp->fullIData(oldp+1701,(vlSelf->gpu__DOT__lsu_read_data[13]),32);
    bufp->fullIData(oldp+1702,(vlSelf->gpu__DOT__lsu_read_data[14]),32);
    bufp->fullIData(oldp+1703,(vlSelf->gpu__DOT__lsu_read_data[15]),32);
    bufp->fullIData(oldp+1704,(vlSelf->gpu__DOT__lsu_read_data[16]),32);
    bufp->fullIData(oldp+1705,(vlSelf->gpu__DOT__lsu_write_valid),17);
    bufp->fullIData(oldp+1706,(vlSelf->gpu__DOT__lsu_write_address[0]),17);
    bufp->fullIData(oldp+1707,(vlSelf->gpu__DOT__lsu_write_address[1]),17);
    bufp->fullIData(oldp+1708,(vlSelf->gpu__DOT__lsu_write_address[2]),17);
    bufp->fullIData(oldp+1709,(vlSelf->gpu__DOT__lsu_write_address[3]),17);
    bufp->fullIData(oldp+1710,(vlSelf->gpu__DOT__lsu_write_address[4]),17);
    bufp->fullIData(oldp+1711,(vlSelf->gpu__DOT__lsu_write_address[5]),17);
    bufp->fullIData(oldp+1712,(vlSelf->gpu__DOT__lsu_write_address[6]),17);
    bufp->fullIData(oldp+1713,(vlSelf->gpu__DOT__lsu_write_address[7]),17);
    bufp->fullIData(oldp+1714,(vlSelf->gpu__DOT__lsu_write_address[8]),17);
    bufp->fullIData(oldp+1715,(vlSelf->gpu__DOT__lsu_write_address[9]),17);
    bufp->fullIData(oldp+1716,(vlSelf->gpu__DOT__lsu_write_address[10]),17);
    bufp->fullIData(oldp+1717,(vlSelf->gpu__DOT__lsu_write_address[11]),17);
    bufp->fullIData(oldp+1718,(vlSelf->gpu__DOT__lsu_write_address[12]),17);
    bufp->fullIData(oldp+1719,(vlSelf->gpu__DOT__lsu_write_address[13]),17);
    bufp->fullIData(oldp+1720,(vlSelf->gpu__DOT__lsu_write_address[14]),17);
    bufp->fullIData(oldp+1721,(vlSelf->gpu__DOT__lsu_write_address[15]),17);
    bufp->fullIData(oldp+1722,(vlSelf->gpu__DOT__lsu_write_address[16]),17);
    bufp->fullIData(oldp+1723,(vlSelf->gpu__DOT__lsu_write_data[0]),32);
    bufp->fullIData(oldp+1724,(vlSelf->gpu__DOT__lsu_write_data[1]),32);
    bufp->fullIData(oldp+1725,(vlSelf->gpu__DOT__lsu_write_data[2]),32);
    bufp->fullIData(oldp+1726,(vlSelf->gpu__DOT__lsu_write_data[3]),32);
    bufp->fullIData(oldp+1727,(vlSelf->gpu__DOT__lsu_write_data[4]),32);
    bufp->fullIData(oldp+1728,(vlSelf->gpu__DOT__lsu_write_data[5]),32);
    bufp->fullIData(oldp+1729,(vlSelf->gpu__DOT__lsu_write_data[6]),32);
    bufp->fullIData(oldp+1730,(vlSelf->gpu__DOT__lsu_write_data[7]),32);
    bufp->fullIData(oldp+1731,(vlSelf->gpu__DOT__lsu_write_data[8]),32);
    bufp->fullIData(oldp+1732,(vlSelf->gpu__DOT__lsu_write_data[9]),32);
    bufp->fullIData(oldp+1733,(vlSelf->gpu__DOT__lsu_write_data[10]),32);
    bufp->fullIData(oldp+1734,(vlSelf->gpu__DOT__lsu_write_data[11]),32);
    bufp->fullIData(oldp+1735,(vlSelf->gpu__DOT__lsu_write_data[12]),32);
    bufp->fullIData(oldp+1736,(vlSelf->gpu__DOT__lsu_write_data[13]),32);
    bufp->fullIData(oldp+1737,(vlSelf->gpu__DOT__lsu_write_data[14]),32);
    bufp->fullIData(oldp+1738,(vlSelf->gpu__DOT__lsu_write_data[15]),32);
    bufp->fullIData(oldp+1739,(vlSelf->gpu__DOT__lsu_write_data[16]),32);
    bufp->fullIData(oldp+1740,(vlSelf->gpu__DOT__lsu_write_ready),17);
    bufp->fullIData(oldp+1741,(0x10U),32);
    bufp->fullIData(oldp+1742,(0x20U),32);
    bufp->fullIData(oldp+1743,(1U),32);
    bufp->fullBit(oldp+1744,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bid));
    bufp->fullCData(oldp+1745,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_bresp),2);
    bufp->fullBit(oldp+1746,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rid));
    bufp->fullCData(oldp+1747,(vlSelf->gpu__DOT__mcu_inst__DOT__m_axi_rresp),2);
    bufp->fullBit(oldp+1748,(1U));
    bufp->fullIData(oldp+1749,(4U),32);
    bufp->fullIData(oldp+1750,(0U),32);
    bufp->fullIData(oldp+1751,(0x1ffU),32);
    bufp->fullIData(oldp+1752,(0x200U),32);
    bufp->fullIData(oldp+1753,(0x40U),32);
    bufp->fullIData(oldp+1754,(0x20U),32);
    bufp->fullIData(oldp+1755,(0x1fU),32);
    bufp->fullIData(oldp+1756,(0U),32);
    bufp->fullIData(oldp+1757,(0x1dU),32);
    bufp->fullIData(oldp+1758,(0x1eU),32);
    bufp->fullIData(oldp+1759,(0x10U),32);
}
