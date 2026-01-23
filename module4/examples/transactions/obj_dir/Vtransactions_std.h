// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_STD_H_
#define VERILATED_VTRANSACTIONS_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions_std(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions_std();
    VL_UNCOPYABLE(Vtransactions_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
