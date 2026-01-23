// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_std__03a__03aprocess;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi30;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz70_TBz70;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_format_action(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi30> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler : public Vclass_hierarchy_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_verbosity_level;
    IData/*31:0*/ __PVT__default_file_handle;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_actions;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_file_handles;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69> __PVT__id_verbosities;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69>> __PVT__severity_id_verbosities;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69> __PVT__id_actions;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69>> __PVT__severity_id_actions;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz70_TBz70> __PVT__sev_overrides;
    VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz70_TBz70>> __PVT__sev_id_overrides;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69> __PVT__id_file_handles;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz69>> __PVT__severity_id_file_handles;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_action(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_set_default_file(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_id_action(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_action(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_file(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_id_verbosity(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_override(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_handler>& obj);

#endif  // guard
