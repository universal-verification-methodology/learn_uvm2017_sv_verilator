// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_resource_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__auditing;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_resource_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_is_auditing(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn);
    void __VnoInFunc_turn_off_auditing(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_auditing(Varchitecture__Syms* __restrict vlSymsp);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_resource_options : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_resource_options(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_resource_options() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_options>& obj);

#endif  // guard
