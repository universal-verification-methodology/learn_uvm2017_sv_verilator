// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_CALLBACKS__TZ24_TBZ81__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_CALLBACKS__TZ24_TBZ81__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callback;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_event_;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pool__Tz91_TBz92;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz73;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81> __PVT__m_inst;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81> &get__Vfuncrtn);
    void __VnoInFunc_get_all(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_>> &all_callbacks, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_get_first(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback_> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73> &q, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks__Tz24_TBz81>& obj);

#endif  // guard
