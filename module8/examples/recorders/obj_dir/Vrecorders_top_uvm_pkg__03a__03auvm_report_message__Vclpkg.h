// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi16;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_handler;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message_element_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message_element_container;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_server;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi16> &get_type__Vfuncrtn);
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_report_message : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_int(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_context(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    virtual void __VnoInFunc_get_element_container(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_filename(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn);
    virtual void __VnoInFunc_get_id(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_message(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_report_handler(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    virtual void __VnoInFunc_get_report_object(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_record_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ act);
    virtual void __VnoInFunc_set_context(Vrecorders_top__Syms* __restrict vlSymsp, std::string cn);
    virtual void __VnoInFunc_set_file(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_filename(Vrecorders_top__Syms* __restrict vlSymsp, std::string fname);
    virtual void __VnoInFunc_set_id(Vrecorders_top__Syms* __restrict vlSymsp, std::string id);
    virtual void __VnoInFunc_set_line(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ ln);
    virtual void __VnoInFunc_set_message(Vrecorders_top__Syms* __restrict vlSymsp, std::string msg);
    virtual void __VnoInFunc_set_report_handler(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_handler> rh);
    virtual void __VnoInFunc_set_report_message(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name);
    virtual void __VnoInFunc_set_report_object(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ sev);
    virtual void __VnoInFunc_set_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ ver);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_report_message();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message>& obj);

#endif  // guard
