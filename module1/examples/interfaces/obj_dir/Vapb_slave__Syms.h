// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAPB_SLAVE__SYMS_H_
#define VERILATED_VAPB_SLAVE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vapb_slave.h"

// INCLUDE MODULE CLASSES
#include "Vapb_slave___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vapb_slave__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vapb_slave* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vapb_slave___024root           TOP;

    // CONSTRUCTORS
    Vapb_slave__Syms(VerilatedContext* contextp, const char* namep, Vapb_slave* modelp);
    ~Vapb_slave__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
