// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example.h"
#include "Vdata_structures_example___024root.h"
#include "Vdata_structures_example_data_structures_pkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg.h"

// FUNCTIONS
Vdata_structures_example__Syms::~Vdata_structures_example__Syms()
{
}

Vdata_structures_example__Syms::Vdata_structures_example__Syms(VerilatedContext* contextp, const char* namep, Vdata_structures_example* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__data_structures_pkg{this, Verilated::catName(namep, "data_structures_pkg")}
    , TOP__data_structures_pkg__03a__03aCoverageCollector__Vclpkg{this, Verilated::catName(namep, "data_structures_pkg::CoverageCollector__Vclpkg")}
    , TOP__data_structures_pkg__03a__03aScoreboard__Vclpkg{this, Verilated::catName(namep, "data_structures_pkg::Scoreboard__Vclpkg")}
    , TOP__data_structures_pkg__03a__03aSimpleTransaction__Vclpkg{this, Verilated::catName(namep, "data_structures_pkg::SimpleTransaction__Vclpkg")}
    , TOP__data_structures_pkg__03a__03aTransactionQueue__Vclpkg{this, Verilated::catName(namep, "data_structures_pkg::TransactionQueue__Vclpkg")}
{
    // Check resources
    Verilated::stackCheck(318);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__data_structures_pkg = &TOP__data_structures_pkg;
    TOP.data_structures_pkg__03a__03aCoverageCollector__Vclpkg = &TOP__data_structures_pkg__03a__03aCoverageCollector__Vclpkg;
    TOP.data_structures_pkg__03a__03aScoreboard__Vclpkg = &TOP__data_structures_pkg__03a__03aScoreboard__Vclpkg;
    TOP.data_structures_pkg__03a__03aSimpleTransaction__Vclpkg = &TOP__data_structures_pkg__03a__03aSimpleTransaction__Vclpkg;
    TOP.data_structures_pkg__03a__03aTransactionQueue__Vclpkg = &TOP__data_structures_pkg__03a__03aTransactionQueue__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__data_structures_pkg.__Vconfigure(true);
    TOP__data_structures_pkg__03a__03aCoverageCollector__Vclpkg.__Vconfigure(true);
    TOP__data_structures_pkg__03a__03aScoreboard__Vclpkg.__Vconfigure(true);
    TOP__data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.__Vconfigure(true);
    TOP__data_structures_pkg__03a__03aTransactionQueue__Vclpkg.__Vconfigure(true);
}
