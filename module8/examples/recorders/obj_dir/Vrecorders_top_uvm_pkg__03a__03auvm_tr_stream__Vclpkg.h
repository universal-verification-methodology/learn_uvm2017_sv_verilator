// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz38;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_database;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream>, IData/*31:0*/> __PVT__m_ids_by_stream;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_stream_from_handle(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ id);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_cfg;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder>, CData/*0:0*/> __PVT__m_records;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_set_before_get_dap__Tz38> __PVT__m_cfg_dap;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_close(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_close(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_free(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_recorders(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn);
    void __VnoInFunc_get_scope(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream>& obj);

#endif  // guard
