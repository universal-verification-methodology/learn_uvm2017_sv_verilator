// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03aprocess;
class Vtransactions_uvm_pkg__03a__03a__VDynScope_27;
class Vtransactions_uvm_pkg__03a__03a__VDynScope_29;
class Vtransactions_uvm_pkg__03a__03auvm_callback_iter__Tz46_TBz47;
class Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi17;
class Vtransactions_uvm_pkg__03a__03auvm_objection;
class Vtransactions_uvm_pkg__03a__03auvm_objection_callback;
class Vtransactions_uvm_pkg__03a__03auvm_objection_context_object;
class Vtransactions_uvm_pkg__03a__03auvm_objection_events;
class Vtransactions_uvm_pkg__03a__03auvm_report_object;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_base;
class Vtransactions_uvm_pkg__03a__03auvm_sequencer_base;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_objection__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_objection_callback;
    std::string __PVT__m_display_objections__Vstatic__blank;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection>> __PVT__m_objections;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_context_pool;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_list;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_objection__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_objection__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_objection__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_29> unnamedblk5__DOT__guard__VgetForkParent__DOT___Vwrapped_guard_4__DOT____VDynScope_guard_4, VlClassRef<Vtransactions_std__03a__03aprocess> unnamedblk5__DOT__guard__VgetForkParent__DOT____VforkParent);
  public:
    void __VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess, VlClassRef<Vtransactions_std__03a__03aprocess> unnamedblk7__DOT____VforkParent);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_objection : public Vtransactions_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_trace_mode;
    CData/*0:0*/ __PVT__m_top_all_dropped;
    CData/*0:0*/ __PVT__m_prop_mode;
    CData/*0:0*/ __PVT__m_cleared;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_source_count;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_total_count;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__m_drain_time;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_events>> __PVT__m_events;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __PVT__m_top;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtransactions_std__03a__03aprocess>> __PVT__m_drain_proc;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_contexts;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_list;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_contexts;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_all_dropped(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_clear(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_display_objections(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_dropped(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_get_drain_time(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn);
    void __VnoInFunc_get_objection_count(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_objection_total(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn);
    void __VnoInFunc_get_objectors(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>> &list);
    void __VnoInFunc_get_propagate_mode(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn);
    void __VnoInFunc_m_drop(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    VlCoroutine __VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn);
    void __VnoInFunc_m_propagate(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_raise(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_report(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_raised(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_drain_time(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain);
    void __VnoInFunc_set_propagate_mode(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode);
    void __VnoInFunc_trace_mode(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn);
    VlCoroutine __VnoInFunc_wait_for(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj);
    VlCoroutine __VnoInFunc_wait_for_total_count(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_objection();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection>& obj);

#endif  // guard
