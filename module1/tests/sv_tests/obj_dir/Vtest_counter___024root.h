// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_counter.h for the primary calling header

#ifndef VERILATED_VTEST_COUNTER___024ROOT_H_
#define VERILATED_VTEST_COUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ test_counter__DOT__clk;
    CData/*0:0*/ test_counter__DOT__rst_n;
    CData/*0:0*/ test_counter__DOT__enable;
    CData/*7:0*/ test_counter__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_counter__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8ca4d732__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_counter___024root(Vtest_counter__Syms* symsp, const char* v__name);
    ~Vtest_counter___024root();
    VL_UNCOPYABLE(Vtest_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
