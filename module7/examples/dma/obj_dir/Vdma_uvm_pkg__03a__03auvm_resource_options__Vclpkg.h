// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_RESOURCE_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_resource_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__auditing;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_resource_options__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_resource_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_is_auditing(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn);
    void __VnoInFunc_turn_off_auditing(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_auditing(Vdma__Syms* __restrict vlSymsp);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_resource_options : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_resource_options(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_resource_options() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_options>& obj);

#endif  // guard
