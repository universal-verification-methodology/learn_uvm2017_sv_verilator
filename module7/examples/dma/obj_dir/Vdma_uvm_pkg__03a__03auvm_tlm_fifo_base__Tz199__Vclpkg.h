// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ199__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ199__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_abstract_component_registry__pi155;
class Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz199;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278;
class Vdma_uvm_pkg__03a__03auvm_reg_item;
class Vdma_uvm_pkg__03a__03auvm_tlm_event;
class Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_component_registry__pi155> &get_type__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199 : public Vdma_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__put_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__get_peek_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz199> __PVT__put_ap;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz199> __PVT__get_ap;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__blocking_put_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_put_imp__Tz199_TBz278> __PVT__nonblocking_put_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_get_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_get_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__get_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_peek_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_peek_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__peek_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__blocking_get_peek_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz199_TBz278> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_can_get(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vdma__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz199>& obj);

#endif  // guard
