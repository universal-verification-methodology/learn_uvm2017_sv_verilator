// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACKS__TZ141__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACKS__TZ141__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_callback;
class Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141;
class Varchitecture_uvm_pkg__03a__03auvm_callbacks_base;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_event__Tz43;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_pool__Tz104_TBz105;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz86;
class Varchitecture_uvm_pkg__03a__03auvm_report_object;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_typed_callbacks__Tz141;
class Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz141;
class Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz86;
class Varchitecture_uvm_pkg__03a__03auvm_typeid_base;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141> __PVT__m_inst;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Varchitecture__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141__Vclpkg(Varchitecture__Syms* symsp, const char* v__name);
    ~Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141__Vclpkg();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback>> &all_callbacks, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj);
    void __VnoInFunc_get_first(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz86> &q, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event__Tz43> obj);
    void __VnoInFunc_m_register_pair(Varchitecture__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_typed_callbacks__Tz141__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141 : public Varchitecture_uvm_pkg__03a__03auvm_typed_callbacks__Tz141 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_m_is_for_me(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callbacks__Tz141>& obj);

#endif  // guard
