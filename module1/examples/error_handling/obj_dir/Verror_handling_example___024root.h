// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Verror_handling_example.h for the primary calling header

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE___024ROOT_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Verror_handling_example_error_handling_pkg;
class Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent;
class Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;
class Verror_handling_example_error_handling_pkg__03a__03aVerificationException;
class Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg;


class Verror_handling_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example___024root final : public VerilatedModule {
  public:
    // CELLS
    Verror_handling_example_error_handling_pkg* __PVT__error_handling_pkg;
    Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg* error_handling_pkg__03a__03aVerificationException__Vclpkg;
    Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg* error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Verror_handling_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Verror_handling_example___024root(Verror_handling_example__Syms* symsp, const char* v__name);
    ~Verror_handling_example___024root();
    VL_UNCOPYABLE(Verror_handling_example___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
