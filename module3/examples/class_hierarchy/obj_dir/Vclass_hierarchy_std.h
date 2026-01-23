// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_STD_H_
#define VERILATED_VCLASS_HIERARCHY_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_std(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_std();
    VL_UNCOPYABLE(Vclass_hierarchy_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
