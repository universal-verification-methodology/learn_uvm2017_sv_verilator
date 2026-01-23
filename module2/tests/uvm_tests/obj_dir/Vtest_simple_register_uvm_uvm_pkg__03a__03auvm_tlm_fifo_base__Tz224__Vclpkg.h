// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ224__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ224__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_abstract_component_registry__pi169;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_port__Tz224;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_put_imp__Tz224_TBz302;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_event;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_abstract_component_registry__pi169> &get_type__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224 : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_put_imp__Tz224_TBz302> __PVT__put_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__get_peek_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_port__Tz224> __PVT__put_ap;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_port__Tz224> __PVT__get_ap;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_put_imp__Tz224_TBz302> __PVT__blocking_put_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_put_imp__Tz224_TBz302> __PVT__nonblocking_put_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__blocking_get_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__nonblocking_get_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__get_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__blocking_peek_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__nonblocking_peek_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__peek_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__blocking_get_peek_export;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz224_TBz302> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz224>& obj);

#endif  // guard
