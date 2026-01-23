// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_phase_state_change;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_task_phase;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03a__VDynScope_4__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03a__VDynScope_4__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_uvm_pkg__03a__03a__VDynScope_4__Vclpkg();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03a__VDynScope_4__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03a__VDynScope_4 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03a__VDynScope_4(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03a__VDynScope_4() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_4>& obj);

#endif  // guard
