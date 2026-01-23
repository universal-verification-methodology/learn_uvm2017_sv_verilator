// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi5;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_handler;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_message;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_transaction;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__issued1;
    CData/*0:0*/ __PVT__issued2;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi5> &get_type__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_transaction__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item : public Vrecorders_top_uvm_pkg__03a__03auvm_transaction {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_use_sequence_info;
    CData/*0:0*/ __PVT__print_sequence_info;
    IData/*31:0*/ __PVT__m_sequence_id;
    IData/*31:0*/ __PVT__m_depth;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> __PVT__m_parent_sequence;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_depth(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_parent_sequence(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_id(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn);
    void __VnoInFunc_get_sequence_path(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn);
    void __VnoInFunc_get_sequencer(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_use_sequence_info(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_m_set_p_sequencer(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_depth(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_id_info(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_set_item_context(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_parent_sequence(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> parent);
    void __VnoInFunc_set_sequence_id(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ id);
    virtual void __VnoInFunc_set_sequencer(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_use_sequence_info(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item>& obj);

#endif  // guard
