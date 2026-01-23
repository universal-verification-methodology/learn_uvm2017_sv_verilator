// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi3;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_field_op;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_policy;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21;
class Vdma_uvm_pkg__03a__03auvm_tr_stream;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_id;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>, IData/*31:0*/> __PVT__m_ids_by_recorder;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>> __PVT__m_recorders_by_id;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_recorder_from_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi3> &get_type__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ id);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_recorder : public Vdma_uvm_pkg__03a__03auvm_policy {
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
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21> __PVT__m_stream_dap;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_tr(Vdma__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_check_handle_kind(Vdma__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn);
    void __VnoInFunc_close(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_create_stream(Vdma__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn);
    virtual void __VnoInFunc_do_close(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_free(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_do_record_field(Vdma__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_int(Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_real(Vdma__Syms* __restrict vlSymsp, std::string name, double value);
    virtual void __VnoInFunc_do_record_generic(Vdma__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    virtual void __VnoInFunc_do_record_object(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_do_record_string(Vdma__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_do_record_time(Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_end_tr(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_free(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_free_tr(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ handle);
    void __VnoInFunc_get_close_time(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ &get_close_time__Vfuncrtn);
    void __VnoInFunc_get_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_open_time(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ &get_open_time__Vfuncrtn);
    virtual void __VnoInFunc_get_record_attribute_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_record_attribute_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    void __VnoInFunc_get_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    virtual void __VnoInFunc_link_tr(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_m_set_attribute(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value);
    virtual void __VnoInFunc_open_file(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_field(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    void __VnoInFunc_record_field_int(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    void __VnoInFunc_record_field_real(Vdma__Syms* __restrict vlSymsp, std::string name, double value);
    void __VnoInFunc_record_generic(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    void __VnoInFunc_record_object(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> value);
    void __VnoInFunc_record_string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string value);
    void __VnoInFunc_record_time(Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_set_attribute(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    virtual void __VnoInFunc_set_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_use_record_attribute(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &use_record_attribute__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_recorder(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_recorder();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>& obj);

#endif  // guard
