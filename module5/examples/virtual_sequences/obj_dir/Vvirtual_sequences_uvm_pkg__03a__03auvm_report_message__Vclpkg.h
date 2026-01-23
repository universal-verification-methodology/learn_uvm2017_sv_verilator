// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_std__03a__03aprocess;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_handler;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_server;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi24> &get_type__Vfuncrtn);
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message : public Vvirtual_sequences_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_int(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_context(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    virtual void __VnoInFunc_get_element_container(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_filename(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn);
    virtual void __VnoInFunc_get_id(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_message(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_report_handler(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    virtual void __VnoInFunc_get_report_object(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_record_message(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ act);
    virtual void __VnoInFunc_set_context(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string cn);
    virtual void __VnoInFunc_set_file(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_filename(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string fname);
    virtual void __VnoInFunc_set_id(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string id);
    virtual void __VnoInFunc_set_line(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ ln);
    virtual void __VnoInFunc_set_message(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string msg);
    virtual void __VnoInFunc_set_report_handler(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_handler> rh);
    virtual void __VnoInFunc_set_report_message(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name);
    virtual void __VnoInFunc_set_report_object(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*1:0*/ sev);
    virtual void __VnoInFunc_set_verbosity(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ ver);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message>& obj);

#endif  // guard
