// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut_floating_alu.h"

void Vdut_floating_alu___ctor_var_reset(Vdut_floating_alu* vlSelf);

Vdut_floating_alu::Vdut_floating_alu(Vdut__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdut_floating_alu___ctor_var_reset(this);
}

void Vdut_floating_alu___configure_coverage(Vdut_floating_alu* vlSelf, bool first);

void Vdut_floating_alu::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vdut_floating_alu___configure_coverage(this, first);
}

Vdut_floating_alu::~Vdut_floating_alu() {
}

// Coverage
void Vdut_floating_alu::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
