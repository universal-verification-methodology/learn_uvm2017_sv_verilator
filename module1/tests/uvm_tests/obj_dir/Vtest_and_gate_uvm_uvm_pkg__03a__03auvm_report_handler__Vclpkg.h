// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_REPORT_HANDLER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_std__03a__03aprocess;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi4;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz23_TBz23;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_format_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_verbosity_level;
    IData/*31:0*/ __PVT__default_file_handle;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_actions;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__severity_file_handles;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_verbosities;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_verbosities;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_actions;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_actions;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> __PVT__sev_overrides;
    VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz23_TBz23>> __PVT__sev_id_overrides;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __PVT__id_file_handles;
    VlAssocArray<CData/*1:0*/, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22>> __PVT__severity_id_file_handles;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn);
    void __VnoInFunc_get_file_handle(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_severity_id_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_verbosity_level(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn);
    void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> client);
    void __VnoInFunc_set_default_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_id_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_id_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_id_verbosity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_severity_id_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_severity_id_verbosity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_severity_override(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_verbosity_level(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler>& obj);

#endif  // guard
