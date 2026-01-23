// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_CALLBACKS__TZ20_TBZ86__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_CALLBACKS__TZ20_TBZ86__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callback;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_event_;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz96_TBz97;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz80;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typed_callbacks__Tz20;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz20;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz80;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz86;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86> __PVT__m_inst;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86> &get__Vfuncrtn);
    void __VnoInFunc_get_all(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_>> &all_callbacks, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get_first(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback_> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz80> &q, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_typed_callbacks__Tz20__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_typed_callbacks__Tz20 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks__Tz20_TBz86>& obj);

#endif  // guard
