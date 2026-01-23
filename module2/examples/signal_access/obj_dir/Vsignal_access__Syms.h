// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIGNAL_ACCESS__SYMS_H_
#define VERILATED_VSIGNAL_ACCESS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsignal_access.h"

// INCLUDE MODULE CLASSES
#include "Vsignal_access___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsignal_access__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsignal_access* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsignal_access___024root       TOP;

    // CONSTRUCTORS
    Vsignal_access__Syms(VerilatedContext* contextp, const char* namep, Vsignal_access* modelp);
    ~Vsignal_access__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
