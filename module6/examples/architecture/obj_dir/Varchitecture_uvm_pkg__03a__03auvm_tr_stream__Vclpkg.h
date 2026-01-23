// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_recorder;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_set_before_get_dap__Tz74;
class Varchitecture_uvm_pkg__03a__03auvm_tr_database;
class Varchitecture_uvm_pkg__03a__03auvm_tr_stream;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>, IData/*31:0*/> __PVT__m_ids_by_stream;
    VlAssocArray<IData/*31:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_stream_from_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ id);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_tr_stream : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_cfg;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>, CData/*0:0*/> __PVT__m_records;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_set_before_get_dap__Tz74> __PVT__m_cfg_dap;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_close(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_close(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_free(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_recorders(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn);
    void __VnoInFunc_get_scope(Varchitecture__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_tr_stream(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_tr_stream();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>& obj);

#endif  // guard
