// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CALLBACKS__TZ7__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CALLBACKS__TZ7__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz7;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz48;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz7;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7> __PVT__m_inst;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback>> &all_callbacks, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get_first(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_m_register_pair(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz7__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7 : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz7 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz7>& obj);

#endif  // guard
