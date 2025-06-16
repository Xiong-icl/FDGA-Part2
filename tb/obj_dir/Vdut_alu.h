// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT_ALU_H_
#define VERILATED_VDUT_ALU_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut_alu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(instruction,4,0);
    CData/*4:0*/ __Vtogcov__instruction;
    VL_IN16(pc,15,0);
    SData/*15:0*/ __Vtogcov__pc;
    VL_IN(ALUop1,31,0);
    VL_IN(ALUop2,31,0);
    VL_IN(IMM,31,0);
    VL_OUT(Result,31,0);
    IData/*31:0*/ __Vtogcov__ALUop1;
    IData/*31:0*/ __Vtogcov__ALUop2;
    IData/*31:0*/ __Vtogcov__IMM;
    IData/*31:0*/ __Vtogcov__Result;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_alu(Vdut__Syms* symsp, const char* name);
    ~Vdut_alu();
    VL_UNCOPYABLE(Vdut_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
