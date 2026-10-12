// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut__Syms.h"
#include "Vdut___024unit.h"

void Vdut___024unit___ctor_var_reset(Vdut___024unit* vlSelf);

Vdut___024unit::Vdut___024unit(Vdut__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdut___024unit___ctor_var_reset(this);
}

void Vdut___024unit___configure_coverage(Vdut___024unit* vlSelf, bool first);

void Vdut___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vdut___024unit___configure_coverage(this, first);
}

Vdut___024unit::~Vdut___024unit() {
}

// Coverage
void Vdut___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
