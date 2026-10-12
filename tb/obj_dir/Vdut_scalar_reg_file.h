// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_SCALAR_REG_FILE_H_
#define VERILATED_VDUT_SCALAR_REG_FILE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut_scalar_reg_file final : public VerilatedModule {
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
    CData/*0:0*/ __Vtogcov__enable;
    CData/*0:0*/ __Vtogcov__decoded_reg_write_enable;
    CData/*0:0*/ __Vdlyvset__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__registers__v33;
    CData/*0:0*/ __Vdlyvset__registers__v33;
    CData/*4:0*/ __Vdlyvdim0__registers__v34;
    CData/*0:0*/ __Vdlyvset__registers__v34;
    VL_IN16(pc,15,0);
    VL_OUT(warp_execution_mask,31,0);
    VL_IN(decoded_immediate,31,0);
    VL_IN(alu_out,31,0);
    VL_IN(lsu_out,31,0);
    VL_IN(vector_to_scalar_data,31,0);
    VL_OUT(rs1,31,0);
    VL_OUT(rs2,31,0);
    IData/*31:0*/ __Vtogcov__warp_execution_mask;
    IData/*31:0*/ __Vtogcov__vector_to_scalar_data;
    IData/*31:0*/ __Vtogcov__rs1;
    IData/*31:0*/ __Vtogcov__rs2;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vdlyvval__registers__v33;
    IData/*31:0*/ __Vdlyvval__registers__v34;
    VlUnpacked<IData/*31:0*/, 32> __PVT__registers;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_scalar_reg_file(Vdut__Syms* symsp, const char* name);
    ~Vdut_scalar_reg_file();
    VL_UNCOPYABLE(Vdut_scalar_reg_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
