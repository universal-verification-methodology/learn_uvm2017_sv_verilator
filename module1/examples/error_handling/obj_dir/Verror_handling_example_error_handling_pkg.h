// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Verror_handling_example.h for the primary calling header

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Verror_handling_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example_error_handling_pkg final {
  public:

    // INTERNAL VARIABLES
    Verror_handling_example__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Verror_handling_example_error_handling_pkg();
    ~Verror_handling_example_error_handling_pkg();
    void ctor(Verror_handling_example__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Verror_handling_example_error_handling_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
