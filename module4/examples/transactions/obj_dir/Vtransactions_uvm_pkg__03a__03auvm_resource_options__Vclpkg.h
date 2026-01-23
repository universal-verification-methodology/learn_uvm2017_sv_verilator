// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_resource_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__auditing;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_resource_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_is_auditing(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn);
    void __VnoInFunc_turn_off_auditing(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_auditing(Vtransactions__Syms* __restrict vlSymsp);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_resource_options : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_resource_options(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03auvm_resource_options() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_options>& obj);

#endif  // guard
