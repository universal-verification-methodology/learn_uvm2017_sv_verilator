# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtransaction_example.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtransaction_example \
	Vtransaction_example___024root__DepSet_ha4354207__0 \
	Vtransaction_example___024root__DepSet_h26af5e96__0 \
	Vtransaction_example___024root__DepSet_h0d6dadf2__0 \
	Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg__DepSet_h676d9c43__0 \
	Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg__DepSet_h50b667b6__0 \
	Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg__DepSet_hceba2d78__0 \
	Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg__DepSet_hb6eb16eb__0 \
	Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg__DepSet_h8fddfedb__0 \
	Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg__DepSet_h22dcb4b0__0 \
	Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg__DepSet_h9c7b6fa6__0 \
	Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg__DepSet_h8b0580a3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtransaction_example___024root__Slow \
	Vtransaction_example___024root__DepSet_ha4354207__0__Slow \
	Vtransaction_example___024root__DepSet_h0d6dadf2__0__Slow \
	Vtransaction_example_transaction_pkg__Slow \
	Vtransaction_example_transaction_pkg__DepSet_hb1c42d69__0__Slow \
	Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg__Slow \
	Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg__DepSet_h50b667b6__0__Slow \
	Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg__Slow \
	Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg__DepSet_hb6eb16eb__0__Slow \
	Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg__Slow \
	Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg__DepSet_h8b0580a3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtransaction_example__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtransaction_example__Syms \
	Vtransaction_example__Trace__0__Slow \
	Vtransaction_example__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
