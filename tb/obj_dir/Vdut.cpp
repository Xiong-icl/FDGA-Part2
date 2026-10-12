// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdut.h"
#include "Vdut__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdut::Vdut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdut__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , execution_start{vlSymsp->TOP.execution_start}
    , execution_done{vlSymsp->TOP.execution_done}
    , instruction_mem_read_valid{vlSymsp->TOP.instruction_mem_read_valid}
    , instruction_mem_read_ready{vlSymsp->TOP.instruction_mem_read_ready}
    , data_mem_read_valid{vlSymsp->TOP.data_mem_read_valid}
    , data_mem_read_ready{vlSymsp->TOP.data_mem_read_ready}
    , data_mem_write_valid{vlSymsp->TOP.data_mem_write_valid}
    , data_mem_write_ready{vlSymsp->TOP.data_mem_write_ready}
    , base_instr{vlSymsp->TOP.base_instr}
    , base_data{vlSymsp->TOP.base_data}
    , num_blocks{vlSymsp->TOP.num_blocks}
    , warps_per_block{vlSymsp->TOP.warps_per_block}
    , instruction_mem_read_address{vlSymsp->TOP.instruction_mem_read_address}
    , instruction_mem_read_data{vlSymsp->TOP.instruction_mem_read_data}
    , data_mem_read_address{vlSymsp->TOP.data_mem_read_address}
    , data_mem_read_data{vlSymsp->TOP.data_mem_read_data}
    , data_mem_write_address{vlSymsp->TOP.data_mem_write_address}
    , data_mem_write_data{vlSymsp->TOP.data_mem_write_data}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__scalar_lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_scalar_reg_file_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__scalar_reg_file_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__floating_reg_file_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_warp__BRA__0__KET____DOT__reg_file_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__0__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__1__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__2__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__3__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__4__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__5__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__6__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__7__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__8__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__9__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__10__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__11__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__12__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__13__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__14__KET____DOT__lsu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_alu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__vector_fpu_inst}
    , __PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst{vlSymsp->TOP.__PVT__gpu__DOT__mcu_inst__DOT__core_instance__DOT__g_vector_units__BRA__15__KET____DOT__lsu_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdut::Vdut(const char* _vcname__)
    : Vdut(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdut::~Vdut() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
void Vdut___024root___eval_static(Vdut___024root* vlSelf);
void Vdut___024root___eval_initial(Vdut___024root* vlSelf);
void Vdut___024root___eval_settle(Vdut___024root* vlSelf);
void Vdut___024root___eval(Vdut___024root* vlSelf);

void Vdut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdut___024root___eval_static(&(vlSymsp->TOP));
        Vdut___024root___eval_initial(&(vlSymsp->TOP));
        Vdut___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdut___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool Vdut::eventsPending() { return false; }

uint64_t Vdut::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdut___024root___eval_final(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut::final() {
    Vdut___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdut::hierName() const { return vlSymsp->name(); }
const char* Vdut::modelName() const { return "Vdut"; }
unsigned Vdut::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdut::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdut___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdut::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdut::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdut___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
