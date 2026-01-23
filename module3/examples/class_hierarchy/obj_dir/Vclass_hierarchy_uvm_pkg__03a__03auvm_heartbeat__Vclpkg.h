// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_std__03a__03aprocess;
class Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_34;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_event_;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_objection;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat : public Vclass_hierarchy_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_started;
    CData/*0:0*/ __PVT__m_added;
    IData/*31:0*/ __PVT__m_mode;
    VlAssignableEvent __PVT__m_stop_event;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> __PVT__m_event;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vclass_hierarchy__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_34> __VDynScope_m_hb_process_2, VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vclass_hierarchy__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_std__03a__03aprocess> unnamedblk2__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> e);
    void __VnoInFunc_stop(Vclass_hierarchy__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_objection> objection);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat>& obj);

#endif  // guard
