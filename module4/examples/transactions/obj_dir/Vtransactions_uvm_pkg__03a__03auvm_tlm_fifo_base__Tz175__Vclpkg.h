// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ175__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ175__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_abstract_component_registry__pi137;
class Vtransactions_uvm_pkg__03a__03auvm_analysis_port__Tz175;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_put_imp__Tz175_TBz254;
class Vtransactions_uvm_pkg__03a__03auvm_reg_item;
class Vtransactions_uvm_pkg__03a__03auvm_tlm_event;
class Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_abstract_component_registry__pi137> &get_type__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175 : public Vtransactions_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_put_imp__Tz175_TBz254> __PVT__put_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__get_peek_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_analysis_port__Tz175> __PVT__put_ap;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_analysis_port__Tz175> __PVT__get_ap;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_put_imp__Tz175_TBz254> __PVT__blocking_put_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_put_imp__Tz175_TBz254> __PVT__nonblocking_put_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__blocking_get_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__nonblocking_get_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__get_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__blocking_peek_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__nonblocking_peek_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__peek_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__blocking_get_peek_export;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_get_peek_imp__Tz175_TBz254> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vtransactions__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz175>& obj);

#endif  // guard
