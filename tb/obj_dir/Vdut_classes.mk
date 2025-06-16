# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vdut.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vdut \
	Vdut___024root__DepSet_h96d12fb6__0 \
	Vdut___024root__DepSet_h96d12fb6__1 \
	Vdut___024root__DepSet_h96d12fb6__2 \
	Vdut___024root__DepSet_h5056ad81__0 \
	Vdut_scalar_reg_file__DepSet_h8bc3d0ad__0 \
	Vdut_reg_file__DepSet_hc3dbd388__0 \
	Vdut_reg_file__DepSet_hc3dbd388__1 \
	Vdut_alu__DepSet_h63356f42__0 \
	Vdut_alu__DepSet_h63356f42__1 \
	Vdut_floating_alu__DepSet_h2de84e60__0 \
	Vdut_floating_alu__DepSet_h2de84e60__1 \
	Vdut_floating_alu__DepSet_h2de84e60__2 \
	Vdut_floating_alu__DepSet_h2de84e60__3 \
	Vdut_floating_alu__DepSet_h2de84e60__4 \
	Vdut_floating_alu__DepSet_h2de84e60__5 \
	Vdut_floating_alu__DepSet_h2de84e60__6 \
	Vdut_floating_alu__DepSet_h2de84e60__7 \
	Vdut_floating_alu__DepSet_h2de84e60__8 \
	Vdut_lsu__DepSet_h96a35984__0 \
	Vdut_lsu__DepSet_h96a35984__1 \
	Vdut_lsu__DepSet_h96a35984__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vdut___024root__Slow \
	Vdut___024root__DepSet_h96d12fb6__0__Slow \
	Vdut___024root__DepSet_h96d12fb6__1__Slow \
	Vdut___024root__DepSet_h5056ad81__0__Slow \
	Vdut___024unit__Slow \
	Vdut___024unit__DepSet_h357cf4c1__0__Slow \
	Vdut___024unit__DepSet_heff202b8__0__Slow \
	Vdut_scalar_reg_file__Slow \
	Vdut_scalar_reg_file__DepSet_h8bc3d0ad__0__Slow \
	Vdut_scalar_reg_file__DepSet_h5d44de8c__0__Slow \
	Vdut_reg_file__Slow \
	Vdut_reg_file__DepSet_hc3dbd388__0__Slow \
	Vdut_reg_file__DepSet_ha54ce16f__0__Slow \
	Vdut_alu__Slow \
	Vdut_alu__DepSet_h63356f42__0__Slow \
	Vdut_alu__DepSet_h463a6e35__0__Slow \
	Vdut_floating_alu__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__0__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__1__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__2__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__3__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__4__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__5__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__6__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__7__Slow \
	Vdut_floating_alu__DepSet_h2de84e60__8__Slow \
	Vdut_floating_alu__DepSet_hf75d4d57__0__Slow \
	Vdut_lsu__Slow \
	Vdut_lsu__DepSet_h96a35984__0__Slow \
	Vdut_lsu__DepSet_h96a35984__1__Slow \
	Vdut_lsu__DepSet_h96a35984__2__Slow \
	Vdut_lsu__DepSet_h50a45773__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vdut__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vdut__Syms \
	Vdut__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
