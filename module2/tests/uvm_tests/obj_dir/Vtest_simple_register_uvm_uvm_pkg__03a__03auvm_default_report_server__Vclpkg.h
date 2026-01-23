// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_DEFAULT_REPORT_SERVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_std__03a__03aprocess;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_handler;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_container;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_server;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_server__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_server {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__max_quit_overridable;
    CData/*0:0*/ __PVT__enable_report_id_count_summary;
    CData/*0:0*/ __PVT__record_all_messages;
    CData/*0:0*/ __PVT__show_verbosity;
    CData/*0:0*/ __PVT__show_terminator;
    IData/*31:0*/ __PVT__m_quit_count;
    IData/*31:0*/ __PVT__m_max_quit_count;
    VlAssocArray<CData/*1:0*/, IData/*31:0*/> __PVT__m_severity_count;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__m_id_count;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __PVT__m_message_db;
    VlAssocArray<std::string, VlAssocArray<std::string, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>>> __PVT__m_streams;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message);
    void __VnoInFunc_f_display(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str);
    void __VnoInFunc_get_id_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn);
    virtual void __VnoInFunc_get_id_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &q);
    void __VnoInFunc_get_max_quit_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn);
    virtual void __VnoInFunc_get_message_database(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn);
    void __VnoInFunc_get_quit_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn);
    void __VnoInFunc_get_severity_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn);
    virtual void __VnoInFunc_get_severity_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q);
    void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_incr_id_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id);
    void __VnoInFunc_incr_quit_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_incr_severity_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    void __VnoInFunc_is_quit_count_reached(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn);
    virtual void __VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_reset_quit_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset_severity_counts(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_id_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count);
    void __VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable);
    virtual void __VnoInFunc_set_message_database(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> database);
    void __VnoInFunc_set_quit_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count);
    void __VnoInFunc_set_severity_count(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_report_server>& obj);

#endif  // guard
