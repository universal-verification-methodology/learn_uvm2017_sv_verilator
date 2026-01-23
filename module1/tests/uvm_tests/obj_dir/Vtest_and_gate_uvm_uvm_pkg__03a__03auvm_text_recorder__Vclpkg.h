// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TEXT_RECORDER__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TEXT_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi174;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_tr_database;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_tr_stream;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi174> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__filename_set;
    VlWide<3600>/*115199:0*/ __Vfunc_uvm_string_to_bits__31__Vfuncout;
    VlQueue<std::string> __PVT__m_object_names;
    std::string __PVT__filename;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_tr_database> __PVT__m_text_db;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_tr(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_check_handle_kind(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_create_stream(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn);
    virtual void __VnoInFunc_do_close(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_free(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_do_record_field(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_int(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_real(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, double value);
    virtual void __VnoInFunc_do_record_generic(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    virtual void __VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_do_record_string(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_do_record_time(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_end_tr(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time);
    virtual void __VnoInFunc_free_tr(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ handle);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_link_tr(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation);
    void __VnoInFunc_m_current_context(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn);
    virtual void __VnoInFunc_m_set_attribute(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value);
    virtual void __VnoInFunc_open_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_attribute(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    void __VnoInFunc_write_attribute(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string nm, VlWide<128>/*4095:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    void __VnoInFunc_write_attribute_int(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string nm, QData/*63:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_recorder>& obj);

#endif  // guard
