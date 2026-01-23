// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18;
class Vdma_uvm_pkg__03a__03auvm_tr_database;
class Vdma_uvm_pkg__03a__03auvm_tr_stream;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_tr_stream__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream>, IData/*31:0*/> __PVT__m_ids_by_stream;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream>> __PVT__m_streams_by_id;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_tr_stream__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_stream_from_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn);
    void __VnoInFunc_m_free_id(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ id);
};

#include "Vdma_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_tr_stream : public Vdma_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_warn_null_cfg;
    CData/*0:0*/ __PVT__m_is_opened;
    CData/*0:0*/ __PVT__m_is_closed;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>, CData/*0:0*/> __PVT__m_records;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18> __PVT__m_cfg_dap;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_close(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_close(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_free(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    void __VnoInFunc_free(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_db(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn);
    void __VnoInFunc_get_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn);
    void __VnoInFunc_get_recorders(Vdma__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn);
    void __VnoInFunc_get_scope(Vdma__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn);
    void __VnoInFunc_get_stream_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn);
    void __VnoInFunc_is_closed(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn);
    void __VnoInFunc_is_open(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_do_open(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    void __VnoInFunc_m_free_recorder(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_open_recorder(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_tr_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_tr_stream();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream>& obj);

#endif  // guard
