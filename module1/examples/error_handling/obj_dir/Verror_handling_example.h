// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE_H_  // guard

#include "verilated.h"

class Verror_handling_example__Syms;
class Verror_handling_example___024root;
class VerilatedVcdC;
class Verror_handling_example_error_handling_pkg;
class Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent;
class Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;
class Verror_handling_example_error_handling_pkg__03a__03aVerificationException;
class Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Verror_handling_example__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Verror_handling_example_error_handling_pkg* const __PVT__error_handling_pkg;
    Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg* const error_handling_pkg__03a__03aVerificationException__Vclpkg;
    Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg* const error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Verror_handling_example___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Verror_handling_example(VerilatedContext* contextp, const char* name = "TOP");
    explicit Verror_handling_example(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Verror_handling_example();
  private:
    VL_UNCOPYABLE(Verror_handling_example);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
