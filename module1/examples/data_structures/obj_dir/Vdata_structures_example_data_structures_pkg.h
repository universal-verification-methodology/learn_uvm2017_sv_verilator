// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_structures_example.h for the primary calling header

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_structures_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_structures_example_data_structures_pkg final {
  public:

    // INTERNAL VARIABLES
    Vdata_structures_example__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdata_structures_example_data_structures_pkg();
    ~Vdata_structures_example_data_structures_pkg();
    void ctor(Vdata_structures_example__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdata_structures_example_data_structures_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
