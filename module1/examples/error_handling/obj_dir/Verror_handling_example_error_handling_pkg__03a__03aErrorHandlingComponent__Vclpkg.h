// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Verror_handling_example.h for the primary calling header

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG__03A__03AERRORHANDLINGCOMPONENT__VCLPKG_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG__03A__03AERRORHANDLINGCOMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Verror_handling_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Verror_handling_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg(Verror_handling_example__Syms* symsp, const char* v__name);
    ~Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg();
    VL_UNCOPYABLE(Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Verror_handling_example__Syms;

class Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__retry_count;
    IData/*31:0*/ __PVT__max_retries;
    void __VnoInFunc_demonstrate_reporting(Verror_handling_example__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_retry_task(Verror_handling_example__Syms* __restrict vlSymsp, IData/*31:0*/ attempts);
  private:
    void _ctor_var_reset(Verror_handling_example__Syms* __restrict vlSymsp);
  public:
    Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent(Verror_handling_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent() {}
};

std::string VL_TO_STRING(const VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent>& obj);

#endif  // guard
