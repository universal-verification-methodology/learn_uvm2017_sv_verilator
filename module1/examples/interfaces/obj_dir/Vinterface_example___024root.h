// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinterface_example.h for the primary calling header

#ifndef VERILATED_VINTERFACE_EXAMPLE___024ROOT_H_
#define VERILATED_VINTERFACE_EXAMPLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vinterface_example_apb_if;


class Vinterface_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinterface_example___024root final {
  public:
    // CELLS
    Vinterface_example_apb_if* __PVT__interface_example__DOT__bus;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ interface_example__DOT__clk;
    CData/*0:0*/ interface_example__DOT____Vcellout__dut__pready;
    CData/*0:0*/ __Vtrigprevexpr___TOP__interface_example__DOT__clk__0;
    IData/*31:0*/ interface_example__DOT____Vcellout__dut__prdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> interface_example__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h85849ca4__0;

    // INTERNAL VARIABLES
    Vinterface_example__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vinterface_example___024root(Vinterface_example__Syms* symsp, const char* namep);
    ~Vinterface_example___024root();
    VL_UNCOPYABLE(Vinterface_example___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
