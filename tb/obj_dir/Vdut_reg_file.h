// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_REG_FILE_H_
#define VERILATED_VDUT_REG_FILE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut_reg_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(warp_state,3,0);
    VL_IN8(decoded_reg_write_enable,0,0);
    VL_IN8(decoded_reg_input_mux,2,0);
    VL_IN8(decoded_rd_address,4,0);
    VL_IN8(decoded_rs1_address,4,0);
    VL_IN8(decoded_rs2_address,4,0);
    CData/*0:0*/ __Vtogcov__decoded_reg_write_enable;
    VL_IN16(thread_enable,15,0);
    SData/*15:0*/ __Vtogcov__thread_enable;
    VL_IN(warp_id,31,0);
    VL_IN(block_id,31,0);
    VL_IN(block_size,31,0);
    VL_IN(decoded_immediate,31,0);
    IData/*31:0*/ __Vtogcov__warp_id;
    IData/*31:0*/ __Vtogcov__block_size;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__unnamedblk3__DOT__j;
    IData/*31:0*/ __PVT__unnamedblk4__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk5__DOT__i;
    VL_IN(alu_out[16],31,0);
    VL_IN(lsu_out[16],31,0);
    VL_OUT(rs1[16],31,0);
    VL_OUT(rs2[16],31,0);
    VlUnpacked<VlUnpacked<IData/*31:0*/, 32>, 16> __PVT__registers;
    VlUnpacked<IData/*31:0*/, 16> __PVT__thread_ids;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_reg_file(Vdut__Syms* symsp, const char* name);
    ~Vdut_reg_file();
    VL_UNCOPYABLE(Vdut_reg_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
