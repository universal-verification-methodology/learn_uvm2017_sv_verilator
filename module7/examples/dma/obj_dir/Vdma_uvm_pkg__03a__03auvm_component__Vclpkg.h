// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vdma_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03auvm_build_phase;
class Vdma_uvm_pkg__03a__03auvm_cmdline_processor;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_domain;
class Vdma_uvm_pkg__03a__03auvm_event_;
class Vdma_uvm_pkg__03a__03auvm_factory;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_objection;
class Vdma_uvm_pkg__03a__03auvm_parent_child_link;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz5;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_related_link;
class Vdma_uvm_pkg__03a__03auvm_report_handler;
class Vdma_uvm_pkg__03a__03auvm_report_object;
class Vdma_uvm_pkg__03a__03auvm_resource_;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz10;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz8;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz9;
class Vdma_uvm_pkg__03a__03auvm_resource_base;
class Vdma_uvm_pkg__03a__03auvm_resource_pool;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_run_phase;
class Vdma_uvm_pkg__03a__03auvm_sequence_base;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;
class Vdma_uvm_pkg__03a__03auvm_tr_database;
class Vdma_uvm_pkg__03a__03auvm_tr_stream;
class Vdma_uvm_pkg__03a__03auvm_transaction;


class Vdma__Syms;
struct Vdma_m_verbosity_setting__struct__0 {
    std::string __PVT__comp;
    std::string __PVT__phase;
    QData/*63:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__verbosity;
    std::string __PVT__id;

    bool operator==(const Vdma_m_verbosity_setting__struct__0& rhs) const {
        return __PVT__comp == rhs.__PVT__comp
            && __PVT__phase == rhs.__PVT__phase
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__verbosity == rhs.__PVT__verbosity
            && __PVT__id == rhs.__PVT__id;
    }
    bool operator!=(const Vdma_m_verbosity_setting__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vdma_m_verbosity_setting__struct__0& rhs) const {
        return std::tie(__PVT__comp, __PVT__phase, __PVT__offset, __PVT__verbosity, __PVT__id)
            <  std::tie(rhs.__PVT__comp, rhs.__PVT__phase, rhs.__PVT__offset, rhs.__PVT__verbosity, rhs.__PVT__id);
    }
};
template <>
struct VlIsCustomStruct<Vdma_m_verbosity_setting__struct__0> : public std::true_type {};
struct Vdma_uvm_cmdline_parsed_arg_t__struct__0 {
    std::string __PVT__arg;
    VlQueue<std::string> __PVT__args;
    IData/*31:0*/ __PVT__used;

    bool operator==(const Vdma_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return __PVT__arg == rhs.__PVT__arg
            && __PVT__args == rhs.__PVT__args
            && __PVT__used == rhs.__PVT__used;
    }
    bool operator!=(const Vdma_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vdma_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return std::tie(__PVT__arg, __PVT__args, __PVT__used)
            <  std::tie(rhs.__PVT__arg, rhs.__PVT__args, rhs.__PVT__used);
    }
};
template <>
struct VlIsCustomStruct<Vdma_uvm_cmdline_parsed_arg_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_config_matches;
    CData/*0:0*/ __PVT__m_set_cl_verb__Vstatic__first;
    CData/*0:0*/ __PVT__m_set_cl_action__Vstatic__initialized;
    CData/*0:0*/ __PVT__m_set_cl_sev__Vstatic__initialized;
    VlQueue<Vdma_m_verbosity_setting__struct__0> __PVT__m_time_settings;
    VlQueue<Vdma_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_action;
    VlQueue<Vdma_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_sev;
    VlQueue<std::string> __PVT__m_set_cl_verb__Vstatic__values;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_component__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_component__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_type_override(Vdma__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

std::string VL_TO_STRING(const Vdma_m_verbosity_setting__struct__0& obj);
std::string VL_TO_STRING(const Vdma_uvm_cmdline_parsed_arg_t__struct__0& obj);
#include "Vdma_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_component : public Vdma_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    CData/*0:0*/ __PVT__m_build_done;
    IData/*31:0*/ __PVT__m_phasing_active;
    IData/*31:0*/ __PVT__recording_detail;
    VlQueue<Vdma_m_verbosity_setting__struct__0> __PVT__m_verbosity_settings;
    std::string __PVT__m_name;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase>, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    VlClassRef<Vdma_std__03a__03aprocess> __PVT__m_phase_process;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction>, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>> __PVT__m_tr_h;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7> __PVT__event_pool;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> __PVT__m_unsupported_resource_base;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time);
    virtual void __VnoInFunc_all_dropped(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ verbose);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_configure_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_create_component(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    void __VnoInFunc_create_object(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_define_domain(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> domain);
    virtual void __VnoInFunc_do_accept_tr(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr);
    virtual void __VnoInFunc_do_begin_tr(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle);
    void __VnoInFunc_do_flush(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    virtual void __VnoInFunc_extract_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_final_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_free_tr_stream(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(Vdma__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>> &children);
    void __VnoInFunc_get_depth(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(Vdma__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(Vdma__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn);
    void __VnoInFunc_get_num_children(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_database(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(Vdma__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn);
    void __VnoInFunc_lookup(Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ i, VlClassRef<Vdma_std__03a__03aprocess> unnamedblk230__DOT__unnamedblk231__DOT____VforkParent);
  public:
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_extract_name(Vdma__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> top, VlClassRef<Vdma_std__03a__03aprocess> unnamedblk214__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_unsupported_set_local(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_main_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_massage_scope(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn);
    virtual void __VnoInFunc_phase_ended(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_ready_to_end(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_configure_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_main_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_reset_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_shutdown_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_configure_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_main_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_reset_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_shutdown_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_config(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit);
    void __VnoInFunc_print_config_with_audit(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_override_info(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name);
    virtual void __VnoInFunc_raised(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_error_tr(Vdma__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn);
    void __VnoInFunc_record_event_tr(Vdma__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn);
    virtual void __VnoInFunc_report_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_reset_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_resume(Vdma__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_set_domain(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier);
    void __VnoInFunc_set_inst_override(Vdma__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name);
    void __VnoInFunc_set_inst_override_by_type(Vdma__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type);
    void __VnoInFunc_set_local(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_set_report_default_file_hier(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_action_hier(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file_hier(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity_hier(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action_hier(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file_hier(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action_hier(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file_hier(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_verbosity_hier(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    virtual void __VnoInFunc_set_tr_database(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> db);
    virtual void __VnoInFunc_shutdown_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_start_of_simulation_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_suspend(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_use_automatic_config(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_component(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_component();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>& obj);

#endif  // guard
