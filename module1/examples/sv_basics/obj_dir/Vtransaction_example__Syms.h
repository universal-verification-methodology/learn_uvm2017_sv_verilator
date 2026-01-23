// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRANSACTION_EXAMPLE__SYMS_H_
#define VERILATED_VTRANSACTION_EXAMPLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtransaction_example.h"

// INCLUDE MODULE CLASSES
#include "Vtransaction_example___024root.h"
#include "Vtransaction_example_transaction_pkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtransaction_example__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtransaction_example* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtransaction_example___024root TOP;
    Vtransaction_example_transaction_pkg TOP__transaction_pkg;
    Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg TOP__transaction_pkg__03a__03aReadTransaction__Vclpkg;
    Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg TOP__transaction_pkg__03a__03aTransaction__Vclpkg;
    Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg TOP__transaction_pkg__03a__03aWriteTransaction__Vclpkg;

    // CONSTRUCTORS
    Vtransaction_example__Syms(VerilatedContext* contextp, const char* namep, Vtransaction_example* modelp);
    ~Vtransaction_example__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
