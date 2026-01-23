// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinterface_example.h for the primary calling header

#ifndef VERILATED_VINTERFACE_EXAMPLE_APB_IF_H_
#define VERILATED_VINTERFACE_EXAMPLE_APB_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vinterface_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinterface_example_apb_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ psel;
    CData/*0:0*/ penable;
    CData/*0:0*/ pwrite;
    SData/*15:0*/ paddr;
    IData/*31:0*/ pwdata;

    // INTERNAL VARIABLES
    Vinterface_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinterface_example_apb_if(Vinterface_example__Syms* symsp, const char* v__name);
    ~Vinterface_example_apb_if();
    VL_UNCOPYABLE(Vinterface_example_apb_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vinterface_example_apb_if* obj);

#endif  // guard
