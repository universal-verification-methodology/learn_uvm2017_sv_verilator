// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreset_patterns.h for the primary calling header

#ifndef VERILATED_VRESET_PATTERNS___024ROOT_H_
#define VERILATED_VRESET_PATTERNS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vreset_patterns__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreset_patterns___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ reset_patterns__DOT__clk;
    CData/*0:0*/ reset_patterns__DOT__rst_n;
    CData/*0:0*/ reset_patterns__DOT__rst_sync;
    CData/*7:0*/ reset_patterns__DOT__reg_async;
    CData/*7:0*/ reset_patterns__DOT__reg_sync;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_patterns__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_patterns__DOT__rst_n__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8fe6e2e1__0;

    // INTERNAL VARIABLES
    Vreset_patterns__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreset_patterns___024root(Vreset_patterns__Syms* symsp, const char* v__name);
    ~Vreset_patterns___024root();
    VL_UNCOPYABLE(Vreset_patterns___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
