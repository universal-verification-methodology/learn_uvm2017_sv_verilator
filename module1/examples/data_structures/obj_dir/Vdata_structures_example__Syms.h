// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE__SYMS_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdata_structures_example.h"

// INCLUDE MODULE CLASSES
#include "Vdata_structures_example___024root.h"
#include "Vdata_structures_example_data_structures_pkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdata_structures_example__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdata_structures_example* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdata_structures_example___024root TOP;
    Vdata_structures_example_data_structures_pkg TOP__data_structures_pkg;
    Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg TOP__data_structures_pkg__03a__03aCoverageCollector__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg TOP__data_structures_pkg__03a__03aScoreboard__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg TOP__data_structures_pkg__03a__03aSimpleTransaction__Vclpkg;
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg TOP__data_structures_pkg__03a__03aTransactionQueue__Vclpkg;

    // CONSTRUCTORS
    Vdata_structures_example__Syms(VerilatedContext* contextp, const char* namep, Vdata_structures_example* modelp);
    ~Vdata_structures_example__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
