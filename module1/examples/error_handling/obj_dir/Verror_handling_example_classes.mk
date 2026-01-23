# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Verror_handling_example.mk for the caller.

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
  Verror_handling_example \
  Verror_handling_example___024root__0 \
  Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg__0 \
  Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Verror_handling_example___024root__Slow \
  Verror_handling_example___024root__0__Slow \
  Verror_handling_example_error_handling_pkg__Slow \
  Verror_handling_example_error_handling_pkg__0__Slow \
  Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg__Slow \
  Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg__0__Slow \
  Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg__Slow \
  Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Verror_handling_example__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Verror_handling_example__Syms__Slow \
  Verror_handling_example__Trace__0__Slow \
  Verror_handling_example__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
