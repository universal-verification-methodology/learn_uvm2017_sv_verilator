// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PHASE_STATE_CHANGE__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PHASE_STATE_CHANGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi31;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi31> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change : public Vclass_hierarchy_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_prev_state;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> __PVT__m_phase;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_to;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_prev_state(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_prev_state__Vfuncrtn);
    virtual void __VnoInFunc_get_state(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_jump_to(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> &jump_to__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase_state_change>& obj);

#endif  // guard
