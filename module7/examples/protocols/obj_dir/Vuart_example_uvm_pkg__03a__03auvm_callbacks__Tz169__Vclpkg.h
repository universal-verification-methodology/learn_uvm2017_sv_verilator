// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CALLBACKS__TZ169__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CALLBACKS__TZ169__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_callback;
class Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169;
class Vuart_example_uvm_pkg__03a__03auvm_callbacks_base;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_object;
class Vuart_example_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vuart_example_uvm_pkg__03a__03auvm_queue__Tz48;
class Vuart_example_uvm_pkg__03a__03auvm_report_object;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_typed_callbacks__Tz169;
class Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz169;
class Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz48;
class Vuart_example_uvm_pkg__03a__03auvm_typeid_base;
class Vuart_example_uvm_pkg__03a__03auvm_vreg_field;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169> __PVT__m_inst;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback>> &all_callbacks, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_get_first(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_m_register_pair(Vuart_example__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_typed_callbacks__Tz169__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169 : public Vuart_example_uvm_pkg__03a__03auvm_typed_callbacks__Tz169 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_m_is_for_me(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callbacks__Tz169>& obj);

#endif  // guard
