// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REPORT_MESSAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi14;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_report_handler;
class Vdma_uvm_pkg__03a__03auvm_report_message;
class Vdma_uvm_pkg__03a__03auvm_report_message_element_base;
class Vdma_uvm_pkg__03a__03auvm_report_message_element_container;
class Vdma_uvm_pkg__03a__03auvm_report_object;
class Vdma_uvm_pkg__03a__03auvm_report_server;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_report_message__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_report_message__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_report_message__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi14> &get_type__Vfuncrtn);
    void __VnoInFunc_new_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_report_message : public Vdma_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> __PVT___report_object;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> __PVT___report_handler;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> __PVT___report_server;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message_element_container> __PVT___report_message_element_container;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_int(Vdma__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_object(Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action);
    virtual void __VnoInFunc_add_string(Vdma__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_context(Vdma__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn);
    virtual void __VnoInFunc_get_element_container(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_filename(Vdma__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn);
    virtual void __VnoInFunc_get_id(Vdma__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn);
    virtual void __VnoInFunc_get_line(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn);
    virtual void __VnoInFunc_get_message(Vdma__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_report_handler(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn);
    virtual void __VnoInFunc_get_report_object(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    virtual void __VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_m_record_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_action(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ act);
    virtual void __VnoInFunc_set_context(Vdma__Syms* __restrict vlSymsp, std::string cn);
    virtual void __VnoInFunc_set_file(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_filename(Vdma__Syms* __restrict vlSymsp, std::string fname);
    virtual void __VnoInFunc_set_id(Vdma__Syms* __restrict vlSymsp, std::string id);
    virtual void __VnoInFunc_set_line(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ ln);
    virtual void __VnoInFunc_set_message(Vdma__Syms* __restrict vlSymsp, std::string msg);
    virtual void __VnoInFunc_set_report_handler(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> rh);
    virtual void __VnoInFunc_set_report_message(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name);
    virtual void __VnoInFunc_set_report_object(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> ro);
    virtual void __VnoInFunc_set_report_server(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> rs);
    virtual void __VnoInFunc_set_severity(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ sev);
    virtual void __VnoInFunc_set_verbosity(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ ver);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_report_message();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message>& obj);

#endif  // guard
