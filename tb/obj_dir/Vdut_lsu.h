// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_LSU_H_
#define VERILATED_VDUT_LSU_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut_lsu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(warp_state,3,0);
    VL_IN8(decoded_mem_read_enable,0,0);
    VL_IN8(decoded_mem_write_enable,0,0);
    VL_OUT8(mem_read_valid,0,0);
    VL_IN8(mem_read_ready,0,0);
    VL_OUT8(mem_write_valid,0,0);
    VL_IN8(mem_write_ready,0,0);
    VL_OUT8(lsu_state,1,0);
    CData/*0:0*/ __Vtogcov__enable;
    CData/*0:0*/ __Vtogcov__decoded_mem_read_enable;
    CData/*0:0*/ __Vtogcov__decoded_mem_write_enable;
    CData/*0:0*/ __Vtogcov__mem_read_valid;
    CData/*0:0*/ __Vtogcov__mem_write_valid;
    CData/*1:0*/ __Vtogcov__lsu_state;
    VL_IN(rs1,31,0);
    VL_IN(rs2,31,0);
    VL_IN(imm,31,0);
    VL_OUT(mem_read_address,16,0);
    VL_IN(mem_read_data,31,0);
    VL_OUT(mem_write_address,16,0);
    VL_OUT(mem_write_data,31,0);
    VL_OUT(lsu_out,31,0);
    IData/*31:0*/ __PVT__offset_address;
    IData/*16:0*/ __Vtogcov__mem_read_address;
    IData/*31:0*/ __Vtogcov__mem_read_data;
    IData/*16:0*/ __Vtogcov__mem_write_address;
    IData/*31:0*/ __Vtogcov__mem_write_data;
    IData/*31:0*/ __Vtogcov__lsu_out;
    IData/*31:0*/ __Vtogcov__offset_address;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_lsu(Vdut__Syms* symsp, const char* name);
    ~Vdut_lsu();
    VL_UNCOPYABLE(Vdut_lsu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
