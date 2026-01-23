// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi4;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_field_op;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_policy;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz11;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_recorder__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_id;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder>, IData/*31:0*/> __PVT__m_ids_by_recorder;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder>> __PVT__m_recorders_by_id;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_recorder__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_recorder_from_handle(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi4> &get_type__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ id);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_recorder : public Vrecorders_top_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_stream;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    CData/*0:0*/ __PVT__identifier;
    IData/*31:0*/ __PVT__recording_depth;
    IData/*27:0*/ __PVT__default_radix;
    IData/*27:0*/ __PVT__policy;
    QData/*63:0*/ __PVT__m_open_time;
    QData/*63:0*/ __PVT__m_close_time;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz11> __PVT__m_stream_dap;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_tr(Vrecorders_top__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_check_handle_kind(Vrecorders_top__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn);
    void __VnoInFunc_close(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_create_stream(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn);
    virtual void __VnoInFunc_do_close(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_free(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_do_record_field(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_int(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_real(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, double value);
    virtual void __VnoInFunc_do_record_generic(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    virtual void __VnoInFunc_do_record_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_do_record_string(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_do_record_time(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_end_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_free(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_free_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle);
    void __VnoInFunc_get_close_time(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_close_time__Vfuncrtn);
    void __VnoInFunc_get_handle(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_open_time(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_open_time__Vfuncrtn);
    virtual void __VnoInFunc_get_record_attribute_handle(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_record_attribute_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    void __VnoInFunc_get_stream(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    virtual void __VnoInFunc_link_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_m_set_attribute(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value);
    virtual void __VnoInFunc_open_file(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_field(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    void __VnoInFunc_record_field_int(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    void __VnoInFunc_record_field_real(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, double value);
    void __VnoInFunc_record_generic(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    void __VnoInFunc_record_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> value);
    void __VnoInFunc_record_string(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value);
    void __VnoInFunc_record_time(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_set_attribute(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    virtual void __VnoInFunc_set_recursion_policy(Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_use_record_attribute(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &use_record_attribute__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_recorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_recorder();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder>& obj);

#endif  // guard
