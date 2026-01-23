// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_STD_H_
#define VERILATED_VARCHITECTURE_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varchitecture_std(Varchitecture__Syms* symsp, const char* v__name);
    ~Varchitecture_std();
    VL_UNCOPYABLE(Varchitecture_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
