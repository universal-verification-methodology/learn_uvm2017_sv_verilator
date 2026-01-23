// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example.h"
#include "Vtransaction_example___024root.h"
#include "Vtransaction_example_transaction_pkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg.h"

// FUNCTIONS
Vtransaction_example__Syms::~Vtransaction_example__Syms()
{
}

Vtransaction_example__Syms::Vtransaction_example__Syms(VerilatedContext* contextp, const char* namep, Vtransaction_example* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__transaction_pkg{this, Verilated::catName(namep, "transaction_pkg")}
    , TOP__transaction_pkg__03a__03aReadTransaction__Vclpkg{this, Verilated::catName(namep, "transaction_pkg::ReadTransaction__Vclpkg")}
    , TOP__transaction_pkg__03a__03aTransaction__Vclpkg{this, Verilated::catName(namep, "transaction_pkg::Transaction__Vclpkg")}
    , TOP__transaction_pkg__03a__03aWriteTransaction__Vclpkg{this, Verilated::catName(namep, "transaction_pkg::WriteTransaction__Vclpkg")}
{
    // Check resources
    Verilated::stackCheck(375);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__transaction_pkg = &TOP__transaction_pkg;
    TOP.transaction_pkg__03a__03aReadTransaction__Vclpkg = &TOP__transaction_pkg__03a__03aReadTransaction__Vclpkg;
    TOP.transaction_pkg__03a__03aTransaction__Vclpkg = &TOP__transaction_pkg__03a__03aTransaction__Vclpkg;
    TOP.transaction_pkg__03a__03aWriteTransaction__Vclpkg = &TOP__transaction_pkg__03a__03aWriteTransaction__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__transaction_pkg.__Vconfigure(true);
    TOP__transaction_pkg__03a__03aReadTransaction__Vclpkg.__Vconfigure(true);
    TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__Vconfigure(true);
    TOP__transaction_pkg__03a__03aWriteTransaction__Vclpkg.__Vconfigure(true);
}
