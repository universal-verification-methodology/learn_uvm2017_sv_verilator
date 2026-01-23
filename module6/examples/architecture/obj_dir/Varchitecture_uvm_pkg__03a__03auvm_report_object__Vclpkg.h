// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REPORT_OBJECT__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REPORT_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_report_handler;
class Varchitecture_uvm_pkg__03a__03auvm_report_message;
class Varchitecture_uvm_pkg__03a__03auvm_report_object;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_report_object : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_rh_set;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> __PVT__m_rh;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_report_action(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn);
    void __VnoInFunc_get_report_file_handle(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn);
    void __VnoInFunc_get_report_handler(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    void __VnoInFunc_get_report_max_verbosity_level(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_report_max_verbosity_level__Vfuncrtn);
    void __VnoInFunc_get_report_verbosity_level(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn);
    void __VnoInFunc_m_rh_init(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset_report_handler(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_report_default_file(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_handler(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> handler);
    void __VnoInFunc_set_report_id_action(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file(Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_report_severity_id_verbosity(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_override(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity);
    void __VnoInFunc_set_report_verbosity_level(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level);
    void __VnoInFunc_uvm_get_report_object(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_report_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_report_object();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_object>& obj);

#endif  // guard
