// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_server;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_database;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_report_server__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_report_server__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_report_server__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_server(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn);
    void __VnoInFunc_set_server(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server> server);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_report_server : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message);
    virtual void __VnoInFunc_get_id_count(Vrecorders_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn);
    virtual void __VnoInFunc_get_id_set(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<std::string> &q);
    virtual void __VnoInFunc_get_max_quit_count(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_message_database(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn);
    virtual void __VnoInFunc_get_quit_count(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_count(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_set(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q);
    void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual void __VnoInFunc_set_id_count(Vrecorders_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count);
    virtual void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable);
    virtual void __VnoInFunc_set_message_database(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> database);
    virtual void __VnoInFunc_set_quit_count(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count);
    virtual void __VnoInFunc_set_severity_count(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_report_server(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_report_server();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_server>& obj);

#endif  // guard
