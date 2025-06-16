// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDUT_H_
#define VERILATED_VDUT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;
class Vdut___024root;
class VerilatedVcdC;
class Vdut___024unit;
class Vdut_alu;
class Vdut_floating_alu;
class Vdut_lsu;
class Vdut_scalar_reg_file;
class Vdut_reg_file;


// This class is the main interface to the Verilated model
class Vdut VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdut__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&execution_start,0,0);
    VL_OUT8(&execution_done,0,0);
    VL_OUT8(&instruction_mem_read_valid,0,0);
    VL_IN8(&instruction_mem_read_ready,0,0);
    VL_OUT8(&data_mem_read_valid,0,0);
    VL_IN8(&data_mem_read_ready,0,0);
    VL_OUT8(&data_mem_write_valid,0,0);
    VL_IN8(&data_mem_write_ready,0,0);
    VL_IN(&base_instr,31,0);
    VL_IN(&base_data,31,0);
    VL_IN(&num_blocks,31,0);
    VL_IN(&warps_per_block,31,0);
    VL_OUT16((&instruction_mem_read_address)[1],15,0);
    VL_IN((&instruction_mem_read_data)[1],31,0);
    VL_OUT((&data_mem_read_address)[1],16,0);
    VL_IN((&data_mem_read_data)[1],31,0);
    VL_OUT((&data_mem_write_address)[1],16,0);
    VL_OUT((&data_mem_write_data)[1],31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vdut___024unit* const __PVT____024unit;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst;
    Vdut_scalar_reg_file* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst;
    Vdut_scalar_reg_file* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst;
    Vdut_reg_file* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst;
    Vdut_reg_file* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst;
    Vdut_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst;
    Vdut_floating_alu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst;
    Vdut_lsu* const __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdut___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdut(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdut(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdut();
  private:
    VL_UNCOPYABLE(Vdut);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
