// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_STD_H_
#define VERILATED_VUART_EXAMPLE_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_std(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_std();
    VL_UNCOPYABLE(Vuart_example_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
