// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUT__SYMS_H_
#define VERILATED_VDUT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdut.h"

// INCLUDE MODULE CLASSES
#include "Vdut___024root.h"
#include "Vdut___024unit.h"
#include "Vdut_scalar_reg_file.h"
#include "Vdut_reg_file.h"
#include "Vdut_alu.h"
#include "Vdut_floating_alu.h"
#include "Vdut_lsu.h"

// SYMS CLASS (contains all model state)
class Vdut__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdut* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdut___024root                 TOP;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst;
    Vdut_reg_file                  TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst;
    Vdut_scalar_reg_file           TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst;
    Vdut_reg_file                  TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst;
    Vdut_scalar_reg_file           TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst;
    Vdut_alu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst;
    Vdut_floating_alu              TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst;
    Vdut_lsu                       TOP__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst;

    // COVERAGE
    uint32_t __Vcoverage[3150];

    // SCOPE NAMES
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____decoder_inst;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____fetcher_inst;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____floating_reg_file_inst;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____floating_reg_file_inst__unnamedblk5;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____floating_scalar_reg_file_inst;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____reg_file_inst;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____reg_file_inst__unnamedblk5;
    VerilatedScope __Vscope_gpu__mcu_inst__core_instance__g_warp__BRA__0__KET____scalar_reg_file_inst;

    // CONSTRUCTORS
    Vdut__Syms(VerilatedContext* contextp, const char* namep, Vdut* modelp);
    ~Vdut__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
