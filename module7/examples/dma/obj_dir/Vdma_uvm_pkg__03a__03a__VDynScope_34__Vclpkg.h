// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03A__VDYNSCOPE_34__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03A__VDYNSCOPE_34__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03a__VDynScope_34__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03a__VDynScope_34__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03a__VDynScope_34__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03a__VDynScope_34__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03a__VDynScope_34 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__triggered;
    QData/*63:0*/ __PVT__last_trigger;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__obj;
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03a__VDynScope_34(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03a__VDynScope_34() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03a__VDynScope_34>& obj);

#endif  // guard
