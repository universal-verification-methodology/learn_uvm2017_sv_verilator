// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS_BASE__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_callback;
class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz79_TBz80;
class Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz60;
class Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_tracing;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base> __PVT__m_b_inst;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz79_TBz80> __PVT__m_pool;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base> &m_initialize__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__m_this_type;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_super_type;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base>> __PVT__m_derived_types;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_check_registration(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &check_registration__Vfuncrtn);
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz60> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_m_is_for_me(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callbacks_base>& obj);

#endif  // guard
