// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REPORT_CATCHER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03auvm_callback;
class Vdma_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz161;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_report_catcher;
class Vdma_uvm_pkg__03a__03auvm_report_handler;
class Vdma_uvm_pkg__03a__03auvm_report_message;
class Vdma_uvm_pkg__03a__03auvm_report_message_element_container;
class Vdma_uvm_pkg__03a__03auvm_report_object;
class Vdma_uvm_pkg__03a__03auvm_report_server;
class Vdma_uvm_pkg__03a__03auvm_root;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_report_catcher__Vclpkg final {
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
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> __PVT__m_modified_report_message;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> __PVT__m_orig_report_message;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz161> __PVT__print_catcher__Vstatic__iter;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_report_catcher__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_report_catcher__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_debug_report_catcher(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ what);
    void __VnoInFunc_print_catcher(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> rm, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn);
    void __VnoInFunc_summarize(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
};

#include "Vdma_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_report_catcher : public Vdma_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_int(Vdma__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    void __VnoInFunc_add_object(Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    void __VnoInFunc_add_string(Vdma__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    virtual void __VnoInFunc_catch(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn);
    void __VnoInFunc_get_action(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_client(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn);
    void __VnoInFunc_get_context(Vdma__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    void __VnoInFunc_get_element_container(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    void __VnoInFunc_get_fname(Vdma__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn);
    void __VnoInFunc_get_id(Vdma__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    void __VnoInFunc_get_line(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    void __VnoInFunc_get_message(Vdma__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    void __VnoInFunc_get_severity(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    void __VnoInFunc_get_verbosity(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_issue(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_action(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ action);
    void __VnoInFunc_set_context(Vdma__Syms* __restrict vlSymsp, std::string context_str);
    void __VnoInFunc_set_id(Vdma__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_set_message(Vdma__Syms* __restrict vlSymsp, std::string message);
    void __VnoInFunc_set_severity(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_set_verbosity(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> msg);
    void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_fatal(Vdma__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_info(Vdma__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_warning(Vdma__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_report_catcher(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_report_catcher();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_catcher>& obj);

#endif  // guard
