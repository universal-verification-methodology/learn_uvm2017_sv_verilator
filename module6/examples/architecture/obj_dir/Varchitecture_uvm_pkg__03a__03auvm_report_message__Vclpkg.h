// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi32;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_recorder;
class Varchitecture_uvm_pkg__03a__03auvm_report_handler;
class Varchitecture_uvm_pkg__03a__03auvm_report_message;
class Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base;
class Varchitecture_uvm_pkg__03a__03auvm_report_message_element_container;
class Varchitecture_uvm_pkg__03a__03auvm_report_object;
class Varchitecture_uvm_pkg__03a__03auvm_report_server;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi32> &get_type__Vfuncrtn);
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_report_message : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT___severity;
    IData/*31:0*/ __PVT___verbosity;
    IData/*31:0*/ __PVT___line;
    IData/*31:0*/ __PVT___action;
    IData/*31:0*/ __PVT___file;
    std::string __PVT___id;
    std::string __PVT___message;
    std::string __PVT___filename;
    std::string __PVT___context_name;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_int(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_context(Varchitecture__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    virtual void __VnoInFunc_get_element_container(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_filename(Varchitecture__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn);
    virtual void __VnoInFunc_get_id(Varchitecture__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_message(Varchitecture__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_report_handler(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    virtual void __VnoInFunc_get_report_object(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_record_message(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ act);
    virtual void __VnoInFunc_set_context(Varchitecture__Syms* __restrict vlSymsp, std::string cn);
    virtual void __VnoInFunc_set_file(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_filename(Varchitecture__Syms* __restrict vlSymsp, std::string fname);
    virtual void __VnoInFunc_set_id(Varchitecture__Syms* __restrict vlSymsp, std::string id);
    virtual void __VnoInFunc_set_line(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ ln);
    virtual void __VnoInFunc_set_message(Varchitecture__Syms* __restrict vlSymsp, std::string msg);
    virtual void __VnoInFunc_set_report_handler(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_handler> rh);
    virtual void __VnoInFunc_set_report_message(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name);
    virtual void __VnoInFunc_set_report_object(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(Varchitecture__Syms* __restrict vlSymsp, CData/*1:0*/ sev);
    virtual void __VnoInFunc_set_verbosity(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ ver);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_report_message(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_report_message();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message>& obj);

#endif  // guard
