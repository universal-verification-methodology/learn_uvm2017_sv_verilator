// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03a__VDynScope_0;
class Varchitecture_uvm_pkg__03a__03a__VDynScope_35;
class Varchitecture_uvm_pkg__03a__03a__VDynScope_42;
class Varchitecture_uvm_pkg__03a__03a__VDynScope_43;
class Varchitecture_uvm_pkg__03a__03am_uvm_sqr_seq_base;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_factory;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz65;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz66;
class Varchitecture_uvm_pkg__03a__03auvm_resource_base;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_seed_map;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_process_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_request;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_base;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__g_request_id;
    IData/*31:0*/ __PVT__g_sequence_id;
    IData/*31:0*/ __PVT__g_sequencer_id;
    VlAssocArray<IData/*31:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>> __PVT__all_sequencer_insts;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_sequencer_base : public Varchitecture_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_auto_item_recording;
    IData/*31:0*/ __PVT__m_sequencer_id;
    IData/*31:0*/ __PVT__m_lock_arb_size;
    IData/*31:0*/ __PVT__m_arb_size;
    IData/*31:0*/ __PVT__m_wait_for_item_sequence_id;
    IData/*31:0*/ __PVT__m_wait_for_item_transaction_id;
    IData/*31:0*/ __PVT__m_wait_relevant_count;
    IData/*31:0*/ __PVT__m_max_zero_time_wait_relevant_count;
    IData/*31:0*/ __PVT__m_arbitration;
    IData/*31:0*/ __PVT__m_is_relevant_completed;
    QData/*63:0*/ __PVT__m_last_wait_relevant_time;
    VlAssocArray<IData/*31:0*/, CData/*0:0*/> __PVT__arb_completed;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_2__57__is_relevant_entries;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_1__58__is_relevant_entries;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request>> __PVT__arb_sequence_q;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base>> __PVT__lock_list;
    VlAssocArray<IData/*31:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base>> __PVT__reg_sequences;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_process_wrapper>> __PVT__m_default_sequences;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> __Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vtask___VforkTask_1__58__unnamedblk242__DOT____VforkParent;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_42> __Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_0> __Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_0> __Vtask___VforkTask_0__151____VDynScope_uvm_wait_for_nba_region_0;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_current_grabber(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn);
    virtual void __VnoInFunc_disable_auto_item_recording(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_execute_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_get_arbitration(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn);
    virtual void __VnoInFunc_get_arbitration_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &get_arbitration_sequence__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_grab(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_has_do_available(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_has_lock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_is_blocked(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn);
    void __VnoInFunc_is_child(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn);
    virtual void __VnoInFunc_is_grabbed(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn);
    void __VnoInFunc_kill_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_lock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn);
    virtual void __VnoInFunc_m_find_number_driver_connections(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    void __VnoInFunc_m_find_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn);
    void __VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_lock_req(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock);
    virtual void __VnoInFunc_m_register_sequence(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_set_arbitration_completed(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    void __VnoInFunc_m_unlock_req(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_unregister_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id);
    void __VnoInFunc_m_update_lists(Varchitecture__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> &__VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
  public:
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_arbitration(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ val);
    virtual void __VnoInFunc_set_max_zero_time_wait_relevant_count(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ new_val);
    virtual void __VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_43> __VDynScope_start_phase_sequence_8, VlClassRef<Varchitecture_std__03a__03aprocess> unnamedblk251__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_stop_sequences(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_ungrab(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_unlock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_user_priority_arbitration(Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h3517d6f2__0);
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_sequencer_base(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_sequencer_base();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>& obj);

#endif  // guard
