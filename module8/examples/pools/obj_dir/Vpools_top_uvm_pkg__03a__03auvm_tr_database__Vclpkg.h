// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_link_base;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_recorder;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_tr_database;
class Vpools_top_uvm_pkg__03a__03auvm_tr_stream;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_tr_database : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_is_opened;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream>, CData/*0:0*/> __PVT__m_streams;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_close_db(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_establish_link(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    void __VnoInFunc_establish_link(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_link_base> link);
    void __VnoInFunc_get_streams(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn);
    void __VnoInFunc_is_open(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_free_stream(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_open_db(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn);
    void __VnoInFunc_open_stream(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_tr_database(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_tr_database();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database>& obj);

#endif  // guard
