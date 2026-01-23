// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03auvm_build_phase;
class Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_domain;
class Varchitecture_uvm_pkg__03a__03auvm_event_;
class Varchitecture_uvm_pkg__03a__03auvm_factory;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz24;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_objection;
class Varchitecture_uvm_pkg__03a__03auvm_parent_child_link;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26;
class Varchitecture_uvm_pkg__03a__03auvm_recorder;
class Varchitecture_uvm_pkg__03a__03auvm_related_link;
class Varchitecture_uvm_pkg__03a__03auvm_report_handler;
class Varchitecture_uvm_pkg__03a__03auvm_report_object;
class Varchitecture_uvm_pkg__03a__03auvm_resource_;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz27;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz28;
class Varchitecture_uvm_pkg__03a__03auvm_resource_base;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_run_phase;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;
class Varchitecture_uvm_pkg__03a__03auvm_tr_database;
class Varchitecture_uvm_pkg__03a__03auvm_tr_stream;
class Varchitecture_uvm_pkg__03a__03auvm_transaction;


class Varchitecture__Syms;
struct Varchitecture_m_verbosity_setting__struct__0 {
    std::string __PVT__comp;
    std::string __PVT__phase;
    QData/*63:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__verbosity;
    std::string __PVT__id;

    bool operator==(const Varchitecture_m_verbosity_setting__struct__0& rhs) const {
        return __PVT__comp == rhs.__PVT__comp
            && __PVT__phase == rhs.__PVT__phase
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__verbosity == rhs.__PVT__verbosity
            && __PVT__id == rhs.__PVT__id;
    }
    bool operator!=(const Varchitecture_m_verbosity_setting__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Varchitecture_m_verbosity_setting__struct__0& rhs) const {
        return std::tie(__PVT__comp, __PVT__phase, __PVT__offset, __PVT__verbosity, __PVT__id)
            <  std::tie(rhs.__PVT__comp, rhs.__PVT__phase, rhs.__PVT__offset, rhs.__PVT__verbosity, rhs.__PVT__id);
    }
};
template <>
struct VlIsCustomStruct<Varchitecture_m_verbosity_setting__struct__0> : public std::true_type {};
struct Varchitecture_uvm_cmdline_parsed_arg_t__struct__0 {
    std::string __PVT__arg;
    VlQueue<std::string> __PVT__args;
    IData/*31:0*/ __PVT__used;

    bool operator==(const Varchitecture_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return __PVT__arg == rhs.__PVT__arg
            && __PVT__args == rhs.__PVT__args
            && __PVT__used == rhs.__PVT__used;
    }
    bool operator!=(const Varchitecture_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Varchitecture_uvm_cmdline_parsed_arg_t__struct__0& rhs) const {
        return std::tie(__PVT__arg, __PVT__args, __PVT__used)
            <  std::tie(rhs.__PVT__arg, rhs.__PVT__args, rhs.__PVT__used);
    }
};
template <>
struct VlIsCustomStruct<Varchitecture_uvm_cmdline_parsed_arg_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_config_matches;
    CData/*0:0*/ __PVT__m_set_cl_verb__Vstatic__first;
    CData/*0:0*/ __PVT__m_set_cl_action__Vstatic__initialized;
    CData/*0:0*/ __PVT__m_set_cl_sev__Vstatic__initialized;
    VlQueue<Varchitecture_m_verbosity_setting__struct__0> __PVT__m_time_settings;
    VlQueue<Varchitecture_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_action;
    VlQueue<Varchitecture_uvm_cmdline_parsed_arg_t__struct__0> __PVT__m_uvm_applied_cl_sev;
    VlQueue<std::string> __PVT__m_set_cl_verb__Vstatic__values;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_type_override(Varchitecture__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

std::string VL_TO_STRING(const Varchitecture_m_verbosity_setting__struct__0& obj);
std::string VL_TO_STRING(const Varchitecture_uvm_cmdline_parsed_arg_t__struct__0& obj);
#include "Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_component : public Varchitecture_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    CData/*0:0*/ __PVT__m_build_done;
    IData/*31:0*/ __PVT__m_phasing_active;
    IData/*31:0*/ __PVT__recording_detail;
    VlQueue<Varchitecture_m_verbosity_setting__struct__0> __PVT__m_verbosity_settings;
    std::string __PVT__m_name;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    VlClassRef<Varchitecture_std__03a__03aprocess> __PVT__m_phase_process;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>> __PVT__m_tr_h;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz24> __PVT__event_pool;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> __PVT__m_unsupported_resource_base;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time);
    virtual void __VnoInFunc_all_dropped(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ verbose);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_configure_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_create_component(Varchitecture__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    void __VnoInFunc_create_object(Varchitecture__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_define_domain(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> domain);
    virtual void __VnoInFunc_do_accept_tr(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr);
    virtual void __VnoInFunc_do_begin_tr(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle);
    void __VnoInFunc_do_flush(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    virtual void __VnoInFunc_extract_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_final_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_free_tr_stream(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>> &children);
    void __VnoInFunc_get_depth(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(Varchitecture__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(Varchitecture__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn);
    void __VnoInFunc_get_num_children(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_database(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn);
    virtual void __VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(Varchitecture__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn);
    void __VnoInFunc_lookup(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ i, VlClassRef<Varchitecture_std__03a__03aprocess> unnamedblk230__DOT__unnamedblk231__DOT____VforkParent);
  public:
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_extract_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> top, VlClassRef<Varchitecture_std__03a__03aprocess> unnamedblk214__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_unsupported_set_local(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_main_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_massage_scope(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn);
    virtual void __VnoInFunc_phase_ended(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_ready_to_end(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_configure_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_main_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_reset_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_shutdown_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_configure_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_main_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_reset_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_shutdown_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_config(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit);
    void __VnoInFunc_print_config_with_audit(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_override_info(Varchitecture__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name);
    virtual void __VnoInFunc_raised(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_error_tr(Varchitecture__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn);
    void __VnoInFunc_record_event_tr(Varchitecture__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn);
    virtual void __VnoInFunc_report_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_reset_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_resume(Varchitecture__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_set_domain(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier);
    void __VnoInFunc_set_inst_override(Varchitecture__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name);
    void __VnoInFunc_set_inst_override_by_type(Varchitecture__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type);
    void __VnoInFunc_set_local(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_set_report_default_file_hier(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_action_hier(Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file_hier(Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity_hier(Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action_hier(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file_hier(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action_hier(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file_hier(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_verbosity_hier(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    virtual void __VnoInFunc_set_tr_database(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> db);
    virtual void __VnoInFunc_shutdown_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_start_of_simulation_phase(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_suspend(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_use_automatic_config(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_component(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_component();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>& obj);

#endif  // guard
