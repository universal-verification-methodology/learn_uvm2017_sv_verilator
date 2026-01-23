// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_structures_example.h for the primary calling header

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE___024ROOT_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdata_structures_example_data_structures_pkg;
class Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector;
class Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg;
class Vdata_structures_example_data_structures_pkg__03a__03aScoreboard;
class Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg;
class Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction;
class Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg;
class Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue;
class Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg;


class Vdata_structures_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_structures_example___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdata_structures_example_data_structures_pkg* __PVT__data_structures_pkg;
    Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg* data_structures_pkg__03a__03aSimpleTransaction__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg* data_structures_pkg__03a__03aTransactionQueue__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg* data_structures_pkg__03a__03aScoreboard__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg* data_structures_pkg__03a__03aCoverageCollector__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ data_structures_example__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ data_structures_example__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_structures_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_structures_example___024root(Vdata_structures_example__Syms* symsp, const char* v__name);
    ~Vdata_structures_example___024root();
    VL_UNCOPYABLE(Vdata_structures_example___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
