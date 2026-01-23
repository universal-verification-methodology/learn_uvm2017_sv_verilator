// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_STD_H_
#define VERILATED_VRECORDERS_TOP_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_std(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_std();
    VL_UNCOPYABLE(Vrecorders_top_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
