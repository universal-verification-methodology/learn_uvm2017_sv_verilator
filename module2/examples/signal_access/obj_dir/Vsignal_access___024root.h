// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsignal_access.h for the primary calling header

#ifndef VERILATED_VSIGNAL_ACCESS___024ROOT_H_
#define VERILATED_VSIGNAL_ACCESS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsignal_access__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsignal_access___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ signal_access__DOT__clk;
    CData/*0:0*/ signal_access__DOT__rst_n;
    CData/*0:0*/ signal_access__DOT__enable;
    CData/*7:0*/ signal_access__DOT__d;
    CData/*7:0*/ signal_access__DOT__q;
    CData/*0:0*/ signal_access__DOT__single_bit;
    IData/*31:0*/ signal_access__DOT__array_signal;
    CData/*0:0*/ __Vtrigprevexpr___TOP__signal_access__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__signal_access__DOT__rst_n__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__signal_access__DOT__q__0;
    CData/*0:0*/ __VactDidInit;
    SData/*15:0*/ signal_access__DOT__multi_bit;
    IData/*31:0*/ signal_access__DOT__monitor_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vsignal_access__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsignal_access___024root(Vsignal_access__Syms* symsp, const char* v__name);
    ~Vsignal_access___024root();
    VL_UNCOPYABLE(Vsignal_access___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
