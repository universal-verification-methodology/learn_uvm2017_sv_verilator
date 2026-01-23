// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_std__03a__03aprocess;
class Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_32;
class Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_34;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi2;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_callback;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_events;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer_base;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_objection_callback;
    std::string __PVT__m_display_objections__Vstatic__blank;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection>> __PVT__m_objections;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_context_pool;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_list;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_34> unnamedblk5__DOT__guard__VgetForkParent__DOT___Vwrapped_guard_4__DOT____VDynScope_guard_4, VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> unnamedblk5__DOT__guard__VgetForkParent__DOT____VforkParent);
  public:
    void __VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess, VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> unnamedblk7__DOT____VforkParent);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_trace_mode;
    CData/*0:0*/ __PVT__m_top_all_dropped;
    CData/*0:0*/ __PVT__m_prop_mode;
    CData/*0:0*/ __PVT__m_cleared;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_source_count;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__m_total_count;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__m_drain_time;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_events>> __PVT__m_events;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__m_top;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>> __PVT__m_drain_proc;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_scheduled_contexts;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_list;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection_context_object>> __PVT__m_forked_contexts;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_all_dropped(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_clear(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_display_objections(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_dropped(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_get_drain_time(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn);
    void __VnoInFunc_get_objection_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_objection_total(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn);
    void __VnoInFunc_get_objectors(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object>> &list);
    void __VnoInFunc_get_propagate_mode(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn);
    void __VnoInFunc_m_drop(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    VlCoroutine __VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_get_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn);
    void __VnoInFunc_m_propagate(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread);
    void __VnoInFunc_m_raise(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_report(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_raised(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_drain_time(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain);
    void __VnoInFunc_set_propagate_mode(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode);
    void __VnoInFunc_trace_mode(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn);
    VlCoroutine __VnoInFunc_wait_for(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj);
    VlCoroutine __VnoInFunc_wait_for_total_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection>& obj);

#endif  // guard
