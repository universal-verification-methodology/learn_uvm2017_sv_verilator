// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03amailbox__Tz12;
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03a__VDynScope_0;
class Vpools_top_uvm_pkg__03a__03a__VDynScope_5;
class Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz12_TBz13;
class Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_domain;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_objection;
class Vpools_top_uvm_pkg__03a__03auvm_phase;
class Vpools_top_uvm_pkg__03a__03auvm_phase_cb;
class Vpools_top_uvm_pkg__03a__03auvm_phase_state_change;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_task_phase;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_phase_cb;
    CData/*0:0*/ __PVT__m_phase_trace;
    CData/*0:0*/ __PVT__m_use_ovm_run_semantic;
    IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_print_successors__Vstatic__level;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_executing_phases;
    std::string __PVT__m_print_successors__Vstatic__spaces;
    VlClassRef<Vpools_top_std__03a__03amailbox__Tz12> __PVT__m_phase_hopper;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_phase__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_phase__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default_max_ready_to_end_iterations(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_jump_all(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase, VlClassRef<Vpools_top_std__03a__03aprocess> unnamedblk157__DOT__unnamedblk158__DOT____VforkParent);
  public:
    void __VnoInFunc_set_default_max_ready_to_end_iterations(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ max);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_phase : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_jump_bkwd;
    CData/*0:0*/ __PVT__m_jump_fwd;
    CData/*0:0*/ __PVT__m_premature_end;
    IData/*31:0*/ __PVT__m_phase_type;
    IData/*31:0*/ __PVT__m_state;
    IData/*31:0*/ __PVT__m_run_count;
    IData/*31:0*/ __PVT__max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_num_procs_not_yet_returned;
    IData/*31:0*/ __PVT__m_ready_to_end_count;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_predecessors;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_successors;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __PVT__m_parent;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __PVT__m_imp;
    VlClassRef<Vpools_top_std__03a__03aprocess> __PVT__m_phase_proc;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __PVT__m_end_node;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_sync;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_objection> __PVT__phase_done;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_phase;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__234____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__236____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__273____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__275____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__301____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__303____VDynScope_uvm_wait_for_nba_region_0;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> before_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> start_with_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> end_with_phase);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ state);
    void __VnoInFunc_clear_successors(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> end_state);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_end_prematurely(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_execute_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlClassRef<Vpools_top_std__03a__03aprocess> master_phase_process__VgetForkParent__DOT____VforkParent);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h4e2b0559__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_5> &__VDynScope_execute_phase_0, VlForkSync __Vfork_4__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hf2954cf8__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h9a449d1f__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
  public:
    void __VnoInFunc_find(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn);
    void __VnoInFunc_find_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn);
    void __VnoInFunc_get_adjacent_predecessor_nodes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>> &pred);
    void __VnoInFunc_get_adjacent_successor_nodes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>> &succ);
    void __VnoInFunc_get_begin_node(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn);
    void __VnoInFunc_get_domain(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn);
    void __VnoInFunc_get_end_node(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_imp(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_jump_target(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn);
    virtual void __VnoInFunc_get_max_ready_to_end_iterations(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_get_objection(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    virtual void __VnoInFunc_get_objection_count(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_parent(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_phase_type(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn);
    void __VnoInFunc_get_predecessors_for_successors(Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ);
    void __VnoInFunc_get_ready_to_end_count(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn);
    void __VnoInFunc_get_run_count(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn);
    void __VnoInFunc_get_schedule(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn);
    void __VnoInFunc_get_schedule_name(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn);
    void __VnoInFunc_get_state(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn);
    void __VnoInFunc_is(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn);
    void __VnoInFunc_is_after(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn);
    void __VnoInFunc_is_before(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn);
    void __VnoInFunc_is_domain(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn);
    void __VnoInFunc_jump(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_kill(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_kill_successors(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_aa2string(Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn);
    void __VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn);
    void __VnoInFunc_m_find_successor_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_transitive_children(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>> &phases);
    void __VnoInFunc_m_print_successors(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_print_termination_state(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action);
    void __VnoInFunc_m_terminate_phase(Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_jump_phase(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_max_ready_to_end_iterations(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_sync(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> with_phase);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    void __VnoInFunc_unsync(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> with_phase);
    VlCoroutine __VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_phase();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>& obj);

#endif  // guard
