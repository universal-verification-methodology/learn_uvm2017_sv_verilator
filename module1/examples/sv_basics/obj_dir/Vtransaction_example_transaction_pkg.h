// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_example.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG_H_
#define VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtransaction_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_example_transaction_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransaction_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransaction_example_transaction_pkg(Vtransaction_example__Syms* symsp, const char* v__name);
    ~Vtransaction_example_transaction_pkg();
    VL_UNCOPYABLE(Vtransaction_example_transaction_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
