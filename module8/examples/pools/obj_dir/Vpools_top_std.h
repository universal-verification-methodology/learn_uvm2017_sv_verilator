// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_STD_H_
#define VERILATED_VPOOLS_TOP_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_std(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_std();
    VL_UNCOPYABLE(Vpools_top_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
