// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CALLBACKS__TZ143_TBZ141__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CALLBACKS__TZ143_TBZ141__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_callback;
class Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143;
class Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141;
class Vtransactions_uvm_pkg__03a__03auvm_callbacks_base;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_mem;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_pool__Tz79_TBz80;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62;
class Vtransactions_uvm_pkg__03a__03auvm_reg_cbs;
class Vtransactions_uvm_pkg__03a__03auvm_report_object;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz143;
class Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz141;
class Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz143;
class Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz62;
class Vtransactions_uvm_pkg__03a__03auvm_typeid_base;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141> __PVT__m_inst;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_cbs>> &all_callbacks, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz62> &q, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz143__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141 : public Vtransactions_uvm_pkg__03a__03auvm_typed_callbacks__Tz143 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callbacks__Tz143_TBz141>& obj);

#endif  // guard
