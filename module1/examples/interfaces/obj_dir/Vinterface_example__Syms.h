// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTERFACE_EXAMPLE__SYMS_H_
#define VERILATED_VINTERFACE_EXAMPLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vinterface_example.h"

// INCLUDE MODULE CLASSES
#include "Vinterface_example___024root.h"
#include "Vinterface_example_apb_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vinterface_example__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vinterface_example* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vinterface_example___024root   TOP;
    Vinterface_example_apb_if      TOP__interface_example__DOT__bus;

    // CONSTRUCTORS
    Vinterface_example__Syms(VerilatedContext* contextp, const char* namep, Vinterface_example* modelp);
    ~Vinterface_example__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
