// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_STD_H_
#define VERILATED_VVIRTUAL_SEQUENCES_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_sequences_std(Vvirtual_sequences__Syms* symsp, const char* v__name);
    ~Vvirtual_sequences_std();
    VL_UNCOPYABLE(Vvirtual_sequences_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
