// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03A__VDYNSCOPE_14__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03A__VDYNSCOPE_14__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_phase_state_change;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_task_phase;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03a__VDynScope_14__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03a__VDynScope_14__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03a__VDynScope_14__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03a__VDynScope_14__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03a__VDynScope_14 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03a__VDynScope_14(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03a__VDynScope_14() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03a__VDynScope_14>& obj);

#endif  // guard
