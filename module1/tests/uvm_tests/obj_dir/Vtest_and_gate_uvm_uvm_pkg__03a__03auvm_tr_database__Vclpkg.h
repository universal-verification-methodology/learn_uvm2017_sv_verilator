// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_std__03a__03aprocess;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_is_opened;
    VlAssocArray<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream>, CData/*0:0*/> __PVT__m_streams;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_close_db(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_establish_link(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    void __VnoInFunc_establish_link(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base> link);
    void __VnoInFunc_get_streams(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn);
    void __VnoInFunc_is_open(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_free_stream(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_open_db(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn);
    void __VnoInFunc_open_stream(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database>& obj);

#endif  // guard
