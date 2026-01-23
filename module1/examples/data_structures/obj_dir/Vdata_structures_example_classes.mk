# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vdata_structures_example.mk for the caller.

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
	Vdata_structures_example \
	Vdata_structures_example___024root__DepSet_ha72c2ae4__0 \
	Vdata_structures_example___024root__DepSet_h0947d847__0 \
	Vdata_structures_example___024root__DepSet_h104c211c__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg__DepSet_h244d6dd1__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg__DepSet_h8ceadc2f__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg__DepSet_hfe5a59d1__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg__DepSet_hb6d9f02f__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg__DepSet_h2df5d6a8__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg__DepSet_h85726558__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg__DepSet_h62d6343e__0 \
	Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg__DepSet_h525603c2__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vdata_structures_example___024root__Slow \
	Vdata_structures_example___024root__DepSet_h104c211c__0__Slow \
	Vdata_structures_example_data_structures_pkg__Slow \
	Vdata_structures_example_data_structures_pkg__DepSet_h0c88c71c__0__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg__DepSet_h8ceadc2f__0__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg__DepSet_hb6d9f02f__0__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg__DepSet_h85726558__0__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg__Slow \
	Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg__DepSet_h525603c2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vdata_structures_example__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vdata_structures_example__Syms \
	Vdata_structures_example__Trace__0__Slow \
	Vdata_structures_example__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
