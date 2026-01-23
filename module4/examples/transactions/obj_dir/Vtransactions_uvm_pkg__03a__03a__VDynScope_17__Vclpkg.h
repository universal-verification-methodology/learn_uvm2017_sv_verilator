// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03A__VDYNSCOPE_17__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03A__VDYNSCOPE_17__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03aprocess;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03a__VDynScope_17__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03a__VDynScope_17__Vclpkg(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions_uvm_pkg__03a__03a__VDynScope_17__Vclpkg();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03a__VDynScope_17__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03a__VDynScope_17 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_std__03a__03aprocess> __PVT__phase_runner_proc;
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03a__VDynScope_17(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03a__VDynScope_17() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_17>& obj);

#endif  // guard
