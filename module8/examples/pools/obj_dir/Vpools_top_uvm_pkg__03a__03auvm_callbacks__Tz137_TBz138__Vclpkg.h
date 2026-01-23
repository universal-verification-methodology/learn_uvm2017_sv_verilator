// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ137_TBZ138__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ137_TBZ138__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_callback;
class Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137;
class Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138;
class Vpools_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_pool__Tz64_TBz65;
class Vpools_top_uvm_pkg__03a__03auvm_queue__Tz57;
class Vpools_top_uvm_pkg__03a__03auvm_reg;
class Vpools_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vpools_top_uvm_pkg__03a__03auvm_report_object;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz137;
class Vpools_top_uvm_pkg__03a__03auvm_typeid__Tz137;
class Vpools_top_uvm_pkg__03a__03auvm_typeid__Tz138;
class Vpools_top_uvm_pkg__03a__03auvm_typeid__Tz57;
class Vpools_top_uvm_pkg__03a__03auvm_typeid_base;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138> __PVT__m_inst;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138__Vclpkg();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs>> &all_callbacks, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz57> &q, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz137__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138 : public Vpools_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz137 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_m_is_for_me(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks__Tz137_TBz138>& obj);

#endif  // guard
