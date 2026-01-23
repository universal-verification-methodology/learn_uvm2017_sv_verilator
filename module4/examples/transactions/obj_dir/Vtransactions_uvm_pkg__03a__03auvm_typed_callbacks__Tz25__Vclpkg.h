// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ25__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ25__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_callback;
class Vtransactions_uvm_pkg__03a__03auvm_callbacks_base;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_phase;
class Vtransactions_uvm_pkg__03a__03auvm_pool__Tz79_TBz80;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25;
class Vtransactions_uvm_pkg__03a__03auvm_typeid_base;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62> __PVT__m_tw_cb_q;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> obj);
    void __VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62> q, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25> &m_initialize__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25 : public Vtransactions_uvm_pkg__03a__03auvm_callbacks_base {
  public:
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz25>& obj);

#endif  // guard
