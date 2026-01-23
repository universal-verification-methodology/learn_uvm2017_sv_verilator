// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03auvm_callback;
class Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_report_catcher;
class Vpools_top_uvm_pkg__03a__03auvm_report_handler;
class Vpools_top_uvm_pkg__03a__03auvm_report_message;
class Vpools_top_uvm_pkg__03a__03auvm_report_message_element_container;
class Vpools_top_uvm_pkg__03a__03auvm_report_object;
class Vpools_top_uvm_pkg__03a__03auvm_report_server;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_report_catcher;
    CData/*0:0*/ __PVT__m_set_action_called;
    CData/*0:0*/ __PVT__do_report;
    CData/*0:0*/ __PVT__process_all_report_catchers__Vstatic__in_catcher;
    IData/*31:0*/ __PVT__m_demoted_fatal;
    IData/*31:0*/ __PVT__m_demoted_error;
    IData/*31:0*/ __PVT__m_demoted_warning;
    IData/*31:0*/ __PVT__m_caught_fatal;
    IData/*31:0*/ __PVT__m_caught_error;
    IData/*31:0*/ __PVT__m_caught_warning;
    IData/*31:0*/ __PVT__DO_NOT_CATCH;
    IData/*31:0*/ __PVT__DO_NOT_MODIFY;
    IData/*31:0*/ __PVT__m_debug_flags;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> __PVT__m_modified_report_message;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> __PVT__m_orig_report_message;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134> __PVT__print_catcher__Vstatic__iter;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_debug_report_catcher(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ what);
    void __VnoInFunc_print_catcher(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> rm, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_report_catcher : public Vpools_top_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_int(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    void __VnoInFunc_add_object(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    void __VnoInFunc_add_string(Vpools_top__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    virtual void __VnoInFunc_catch(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn);
    void __VnoInFunc_get_action(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_client(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn);
    void __VnoInFunc_get_context(Vpools_top__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    void __VnoInFunc_get_element_container(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    void __VnoInFunc_get_fname(Vpools_top__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn);
    void __VnoInFunc_get_id(Vpools_top__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    void __VnoInFunc_get_line(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    void __VnoInFunc_get_message(Vpools_top__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    void __VnoInFunc_get_severity(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    void __VnoInFunc_get_verbosity(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_issue(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_action(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ action);
    void __VnoInFunc_set_context(Vpools_top__Syms* __restrict vlSymsp, std::string context_str);
    void __VnoInFunc_set_id(Vpools_top__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_set_message(Vpools_top__Syms* __restrict vlSymsp, std::string message);
    void __VnoInFunc_set_severity(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_set_verbosity(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> msg);
    void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_fatal(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_info(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_warning(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_report_catcher(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_report_catcher();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher>& obj);

#endif  // guard
