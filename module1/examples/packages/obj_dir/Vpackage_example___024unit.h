// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpackage_example.h for the primary calling header

#ifndef VERILATED_VPACKAGE_EXAMPLE___024UNIT_H_
#define VERILATED_VPACKAGE_EXAMPLE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpackage_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpackage_example___024unit final {
  public:

    // INTERNAL VARIABLES
    Vpackage_example__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpackage_example___024unit();
    ~Vpackage_example___024unit();
    void ctor(Vpackage_example__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpackage_example___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
