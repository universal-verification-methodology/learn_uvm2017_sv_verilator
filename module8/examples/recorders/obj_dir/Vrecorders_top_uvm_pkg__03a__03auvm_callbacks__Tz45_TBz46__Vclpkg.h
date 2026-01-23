// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ45_TBZ46__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ45_TBZ46__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_callback;
class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45;
class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46;
class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_objection;
class Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback;
class Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz79_TBz80;
class Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz60;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz45;
class Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz45;
class Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz46;
class Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz60;
class Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46> __PVT__m_inst;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback>> &all_callbacks, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz60> &q, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz45__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46 : public Vrecorders_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz45 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_m_is_for_me(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks__Tz45_TBz46>& obj);

#endif  // guard
