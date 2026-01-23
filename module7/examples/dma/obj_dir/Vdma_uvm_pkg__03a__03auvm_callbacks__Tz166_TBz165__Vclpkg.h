// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_CALLBACKS__TZ166_TBZ165__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_CALLBACKS__TZ166_TBZ165__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_callback;
class Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166;
class Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165;
class Vdma_uvm_pkg__03a__03auvm_callbacks_base;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz48;
class Vdma_uvm_pkg__03a__03auvm_reg_backdoor;
class Vdma_uvm_pkg__03a__03auvm_reg_cbs;
class Vdma_uvm_pkg__03a__03auvm_report_object;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_typed_callbacks__Tz166;
class Vdma_uvm_pkg__03a__03auvm_typeid__Tz165;
class Vdma_uvm_pkg__03a__03auvm_typeid__Tz166;
class Vdma_uvm_pkg__03a__03auvm_typeid__Tz48;
class Vdma_uvm_pkg__03a__03auvm_typeid_base;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165> __PVT__m_inst;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vdma__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs>> &all_callbacks, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_typed_callbacks__Tz166__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165 : public Vdma_uvm_pkg__03a__03auvm_typed_callbacks__Tz166 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_m_is_for_me(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_callbacks__Tz166_TBz165>& obj);

#endif  // guard
