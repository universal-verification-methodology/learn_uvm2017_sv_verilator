// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclock_gen.h for the primary calling header

#ifndef VERILATED_VCLOCK_GEN___024ROOT_H_
#define VERILATED_VCLOCK_GEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vclock_gen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclock_gen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clock_gen__DOT__clk1;
    CData/*0:0*/ clock_gen__DOT__clk2;
    CData/*0:0*/ clock_gen__DOT__clk3;
    CData/*0:0*/ clock_gen__DOT__clk_gated;
    CData/*0:0*/ clock_gen__DOT__clk_enable;
    CData/*0:0*/ clock_gen__DOT__clk_stop;
    CData/*0:0*/ clock_gen__DOT__clk_stopped;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock_gen__DOT__clk1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock_gen__DOT__clk2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock_gen__DOT__clk3__0;
    CData/*0:0*/ __Vtrigprevexpr_ha0475fda__1;
    CData/*0:0*/ __VactDidInit;
    IData/*31:0*/ clock_gen__DOT__clk1_edges;
    IData/*31:0*/ clock_gen__DOT__clk2_edges;
    IData/*31:0*/ clock_gen__DOT__clk3_edges;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h07f01e06__0;

    // INTERNAL VARIABLES
    Vclock_gen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclock_gen___024root(Vclock_gen__Syms* symsp, const char* v__name);
    ~Vclock_gen___024root();
    VL_UNCOPYABLE(Vclock_gen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
