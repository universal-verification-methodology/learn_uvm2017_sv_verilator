// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03amailbox__Tz25;
class Vtransactions_std__03a__03aprocess;
class Vtransactions_uvm_pkg__03a__03a__VDynScope_0;
class Vtransactions_uvm_pkg__03a__03a__VDynScope_5;
class Vtransactions_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26;
class Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_domain;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_objection;
class Vtransactions_uvm_pkg__03a__03auvm_phase;
class Vtransactions_uvm_pkg__03a__03auvm_phase_cb;
class Vtransactions_uvm_pkg__03a__03auvm_phase_state_change;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_task_phase;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_phase_cb;
    CData/*0:0*/ __PVT__m_phase_trace;
    CData/*0:0*/ __PVT__m_use_ovm_run_semantic;
    IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_print_successors__Vstatic__level;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_executing_phases;
    std::string __PVT__m_print_successors__Vstatic__spaces;
    VlClassRef<Vtransactions_std__03a__03amailbox__Tz25> __PVT__m_phase_hopper;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_phase__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_phase__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default_max_ready_to_end_iterations(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_jump_all(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase, VlClassRef<Vtransactions_std__03a__03aprocess> unnamedblk157__DOT__unnamedblk158__DOT____VforkParent);
  public:
    void __VnoInFunc_set_default_max_ready_to_end_iterations(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ max);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_phase : public Vtransactions_uvm_pkg__03a__03auvm_object {
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
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_predecessors;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_successors;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> __PVT__m_parent;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> __PVT__m_imp;
    VlClassRef<Vtransactions_std__03a__03aprocess> __PVT__m_phase_proc;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> __PVT__m_end_node;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>> __PVT__m_sync;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection> __PVT__phase_done;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_phase;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__234____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__236____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__273____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__275____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__301____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__303____VDynScope_uvm_wait_for_nba_region_0;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> before_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> start_with_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> end_with_phase);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ state);
    void __VnoInFunc_clear_successors(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> end_state);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_end_prematurely(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_execute_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlClassRef<Vtransactions_std__03a__03aprocess> master_phase_process__VgetForkParent__DOT____VforkParent);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h4e2b0559__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_5> &__VDynScope_execute_phase_0, VlForkSync __Vfork_4__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hf2954cf8__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h9a449d1f__0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_5> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
  public:
    void __VnoInFunc_find(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn);
    void __VnoInFunc_find_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn);
    void __VnoInFunc_get_adjacent_predecessor_nodes(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>> &pred);
    void __VnoInFunc_get_adjacent_successor_nodes(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>> &succ);
    void __VnoInFunc_get_begin_node(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn);
    void __VnoInFunc_get_domain(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn);
    void __VnoInFunc_get_end_node(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_imp(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_jump_target(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn);
    virtual void __VnoInFunc_get_max_ready_to_end_iterations(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_get_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    virtual void __VnoInFunc_get_objection_count(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_phase_type(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn);
    void __VnoInFunc_get_predecessors_for_successors(Vtransactions__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ);
    void __VnoInFunc_get_ready_to_end_count(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn);
    void __VnoInFunc_get_run_count(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn);
    void __VnoInFunc_get_schedule(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn);
    void __VnoInFunc_get_schedule_name(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn);
    void __VnoInFunc_get_state(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn);
    void __VnoInFunc_is(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn);
    void __VnoInFunc_is_after(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn);
    void __VnoInFunc_is_before(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn);
    void __VnoInFunc_is_domain(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn);
    void __VnoInFunc_jump(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_kill(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_kill_successors(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_aa2string(Vtransactions__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn);
    void __VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn);
    void __VnoInFunc_m_find_successor_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_transitive_children(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>> &phases);
    void __VnoInFunc_m_print_successors(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_print_termination_state(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action);
    void __VnoInFunc_m_terminate_phase(Vtransactions__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_jump_phase(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_max_ready_to_end_iterations(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_sync(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> with_phase);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    void __VnoInFunc_unsync(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> with_phase);
    VlCoroutine __VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_phase();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>& obj);

#endif  // guard
