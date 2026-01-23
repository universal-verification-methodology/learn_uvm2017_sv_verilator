// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ15__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ15__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __PVT__m_tw_cb_q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15> &m_initialize__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15 : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base {
  public:
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15>& obj);

#endif  // guard
