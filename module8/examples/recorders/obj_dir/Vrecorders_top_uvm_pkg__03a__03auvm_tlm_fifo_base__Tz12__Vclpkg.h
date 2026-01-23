// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ12__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ12__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi121;
class Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz12;
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_put_imp__Tz12_TBz232;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_tlm_event;
class Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi121> &get_type__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12 : public Vrecorders_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_put_imp__Tz12_TBz232> __PVT__put_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__get_peek_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz12> __PVT__put_ap;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz12> __PVT__get_ap;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_put_imp__Tz12_TBz232> __PVT__blocking_put_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_put_imp__Tz12_TBz232> __PVT__nonblocking_put_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__blocking_get_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__nonblocking_get_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__get_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__blocking_peek_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__nonblocking_peek_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__peek_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__blocking_get_peek_export;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz12_TBz232> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_can_get(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz12>& obj);

#endif  // guard
