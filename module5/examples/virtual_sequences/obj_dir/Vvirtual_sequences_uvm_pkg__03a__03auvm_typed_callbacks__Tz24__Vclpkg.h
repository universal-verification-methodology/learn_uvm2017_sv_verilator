// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ24__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ24__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callback;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_event_;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pool__Tz91_TBz92;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73> __PVT__m_tw_cb_q;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_> obj);
    void __VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73> q, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24> &m_initialize__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base {
  public:
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz73> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typed_callbacks__Tz24>& obj);

#endif  // guard
