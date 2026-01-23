// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_STD_H_
#define VERILATED_VDMA_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_std final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_std();
    ~Vdma_std();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
