// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03a__VDynScope_34;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_event_;
class Vpools_top_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_objection;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_heartbeat : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_started;
    CData/*0:0*/ __PVT__m_added;
    IData/*31:0*/ __PVT__m_mode;
    VlAssignableEvent __PVT__m_stop_event;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_> __PVT__m_event;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_34> __VDynScope_m_hb_process_2, VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vpools_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_std__03a__03aprocess> unnamedblk2__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event_> e);
    void __VnoInFunc_stop(Vpools_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_heartbeat(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_objection> objection);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_heartbeat();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_heartbeat>& obj);

#endif  // guard
