// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03A__VDYNSCOPE_10__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03A__VDYNSCOPE_10__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_phase;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03a__VDynScope_10__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03a__VDynScope_10__Vclpkg(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions_uvm_pkg__03a__03a__VDynScope_10__Vclpkg();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03a__VDynScope_10__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03a__VDynScope_10 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> __PVT__phase;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> __PVT__comp;
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03a__VDynScope_10(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03a__VDynScope_10() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_10>& obj);

#endif  // guard
