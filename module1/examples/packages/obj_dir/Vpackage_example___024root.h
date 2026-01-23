// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpackage_example.h for the primary calling header

#ifndef VERILATED_VPACKAGE_EXAMPLE___024ROOT_H_
#define VERILATED_VPACKAGE_EXAMPLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpackage_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpackage_example___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ package_example__DOT__current_state;
    CData/*0:0*/ package_example__DOT__condition;
    IData/*31:0*/ package_example__DOT__unnamedblk1__DOT__timeout_val;
    IData/*31:0*/ __VactIterCount;
    QData/*48:0*/ package_example__DOT__trans;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vpackage_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpackage_example___024root(Vpackage_example__Syms* symsp, const char* v__name);
    ~Vpackage_example___024root();
    VL_UNCOPYABLE(Vpackage_example___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
