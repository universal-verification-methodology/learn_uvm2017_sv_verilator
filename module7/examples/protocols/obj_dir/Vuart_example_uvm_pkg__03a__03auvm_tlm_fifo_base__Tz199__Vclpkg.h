// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ199__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ199__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_abstract_component_registry__pi155;
class Vuart_example_uvm_pkg__03a__03auvm_analysis_port__Tz199;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278;
class Vuart_example_uvm_pkg__03a__03auvm_reg_item;
class Vuart_example_uvm_pkg__03a__03auvm_tlm_event;
class Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_abstract_component_registry__pi155> &get_type__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199 : public Vuart_example_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__put_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__get_peek_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_analysis_port__Tz199> __PVT__put_ap;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_analysis_port__Tz199> __PVT__get_ap;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__blocking_put_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__nonblocking_put_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_get_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_get_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__get_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_peek_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_peek_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__peek_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_get_peek_export;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_can_get(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vuart_example__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199>& obj);

#endif  // guard
