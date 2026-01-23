// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tr_database;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_server(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn);
    void __VnoInFunc_set_server(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server> server);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server : public Vclass_hierarchy_uvm_pkg__03a__03auvm_object {
  public:
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message);
    virtual void __VnoInFunc_get_id_count(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn);
    virtual void __VnoInFunc_get_id_set(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<std::string> &q);
    virtual void __VnoInFunc_get_max_quit_count(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_message_database(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn);
    virtual void __VnoInFunc_get_quit_count(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_count(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_set(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q);
    void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual void __VnoInFunc_set_id_count(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count);
    virtual void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable);
    virtual void __VnoInFunc_set_message_database(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tr_database> database);
    virtual void __VnoInFunc_set_quit_count(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count);
    virtual void __VnoInFunc_set_severity_count(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_server>& obj);

#endif  // guard
