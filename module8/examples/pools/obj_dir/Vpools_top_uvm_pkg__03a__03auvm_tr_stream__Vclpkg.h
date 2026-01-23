// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_recorder;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz48;
class Vpools_top_uvm_pkg__03a__03auvm_tr_database;
class Vpools_top_uvm_pkg__03a__03auvm_tr_stream;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream>, IData/*31:0*/> __PVT__m_ids_by_stream;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_stream_from_handle(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ id);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_tr_stream : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_cfg;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder>, CData/*0:0*/> __PVT__m_records;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz48> __PVT__m_cfg_dap;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_close(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_close(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_free(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_recorders(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn);
    void __VnoInFunc_get_scope(Vpools_top__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_tr_stream(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_tr_stream();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream>& obj);

#endif  // guard
