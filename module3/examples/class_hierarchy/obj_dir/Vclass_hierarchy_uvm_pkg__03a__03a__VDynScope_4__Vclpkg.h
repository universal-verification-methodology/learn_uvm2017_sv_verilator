// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_task_phase;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4__Vclpkg(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4__Vclpkg();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_4>& obj);

#endif  // guard
