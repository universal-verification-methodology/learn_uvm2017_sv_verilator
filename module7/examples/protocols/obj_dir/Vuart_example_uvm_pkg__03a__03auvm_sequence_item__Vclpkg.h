// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi5;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_printer;
class Vuart_example_uvm_pkg__03a__03auvm_report_handler;
class Vuart_example_uvm_pkg__03a__03auvm_report_message;
class Vuart_example_uvm_pkg__03a__03auvm_report_object;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_sequence_base;
class Vuart_example_uvm_pkg__03a__03auvm_sequence_item;
class Vuart_example_uvm_pkg__03a__03auvm_sequencer_base;
class Vuart_example_uvm_pkg__03a__03auvm_transaction;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_sequence_item__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__issued1;
    CData/*0:0*/ __PVT__issued2;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_sequence_item__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_sequence_item__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_sequence_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi5> &get_type__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_transaction__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_sequence_item : public Vuart_example_uvm_pkg__03a__03auvm_transaction {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_use_sequence_info;
    CData/*0:0*/ __PVT__print_sequence_info;
    IData/*31:0*/ __PVT__m_sequence_id;
    IData/*31:0*/ __PVT__m_depth;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> __PVT__m_parent_sequence;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_depth(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_parent_sequence(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_id(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn);
    void __VnoInFunc_get_sequence_path(Vuart_example__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn);
    void __VnoInFunc_get_sequencer(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_use_sequence_info(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_m_set_p_sequencer(Vuart_example__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_depth(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_id_info(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_set_item_context(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_parent_sequence(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> parent);
    void __VnoInFunc_set_sequence_id(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ id);
    virtual void __VnoInFunc_set_sequencer(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_use_sequence_info(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_info(Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_sequence_item(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_sequence_item() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_item>& obj);

#endif  // guard
