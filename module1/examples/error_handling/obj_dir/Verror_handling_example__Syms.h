// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE__SYMS_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Verror_handling_example.h"

// INCLUDE MODULE CLASSES
#include "Verror_handling_example___024root.h"
#include "Verror_handling_example_error_handling_pkg.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Verror_handling_example* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Verror_handling_example___024root TOP;
    Verror_handling_example_error_handling_pkg TOP__error_handling_pkg;
    Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg TOP__error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;
    Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg TOP__error_handling_pkg__03a__03aVerificationException__Vclpkg;

    // CONSTRUCTORS
    Verror_handling_example__Syms(VerilatedContext* contextp, const char* namep, Verror_handling_example* modelp);
    ~Verror_handling_example__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
