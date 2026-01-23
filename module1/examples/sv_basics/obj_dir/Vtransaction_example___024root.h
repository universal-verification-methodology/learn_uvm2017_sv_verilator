// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_example.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_EXAMPLE___024ROOT_H_
#define VERILATED_VTRANSACTION_EXAMPLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtransaction_example_transaction_pkg;
class Vtransaction_example_transaction_pkg__03a__03aReadTransaction;
class Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg;
class Vtransaction_example_transaction_pkg__03a__03aTransaction;
class Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg;
class Vtransaction_example_transaction_pkg__03a__03aWriteTransaction;
class Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg;


class Vtransaction_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_example___024root final {
  public:
    // CELLS
    Vtransaction_example_transaction_pkg* __PVT__transaction_pkg;
    Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg* transaction_pkg__03a__03aTransaction__Vclpkg;
    Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg* transaction_pkg__03a__03aReadTransaction__Vclpkg;
    Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg* transaction_pkg__03a__03aWriteTransaction__Vclpkg;

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtransaction_example__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_example___024root(Vtransaction_example__Syms* symsp, const char* namep);
    ~Vtransaction_example___024root();
    VL_UNCOPYABLE(Vtransaction_example___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
