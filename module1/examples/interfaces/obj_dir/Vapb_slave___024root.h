// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_slave.h for the primary calling header

#ifndef VERILATED_VAPB_SLAVE___024ROOT_H_
#define VERILATED_VAPB_SLAVE___024ROOT_H_  // guard

#include "verilated.h"


class Vapb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_slave___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(psel,0,0);
    VL_IN8(penable,0,0);
    VL_IN8(pwrite,0,0);
    VL_OUT8(pready,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(paddr,15,0);
    VL_IN(pwdata,31,0);
    VL_OUT(prdata,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> apb_slave__DOT__mem;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_slave___024root(Vapb_slave__Syms* symsp, const char* v__name);
    ~Vapb_slave___024root();
    VL_UNCOPYABLE(Vapb_slave___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
