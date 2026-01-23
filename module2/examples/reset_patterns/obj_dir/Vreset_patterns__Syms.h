// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRESET_PATTERNS__SYMS_H_
#define VERILATED_VRESET_PATTERNS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vreset_patterns.h"

// INCLUDE MODULE CLASSES
#include "Vreset_patterns___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vreset_patterns__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vreset_patterns* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vreset_patterns___024root      TOP;

    // CONSTRUCTORS
    Vreset_patterns__Syms(VerilatedContext* contextp, const char* namep, Vreset_patterns* modelp);
    ~Vreset_patterns__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
