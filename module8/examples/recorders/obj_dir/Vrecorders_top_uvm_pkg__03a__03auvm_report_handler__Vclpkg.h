// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi18;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49;
class Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz50_TBz50;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_handler;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_server;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_format_action(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi18> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_report_handler : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_verbosity_level;
    IData/*31:0*/ __PVT__default_file_handle;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_actions;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_file_handles;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49> __PVT__id_verbosities;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49>> __PVT__severity_id_verbosities;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49> __PVT__id_actions;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49>> __PVT__severity_id_actions;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz50_TBz50> __PVT__sev_overrides;
    VlAssocArray<std::string, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz50_TBz50>> __PVT__sev_id_overrides;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49> __PVT__id_file_handles;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_pool__Tz48_TBz49>> __PVT__severity_id_file_handles;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_action(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_set_default_file(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_id_action(Vrecorders_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(Vrecorders_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_action(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_file(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_id_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_override(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_report_handler(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_report_handler();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_handler>& obj);

#endif  // guard
