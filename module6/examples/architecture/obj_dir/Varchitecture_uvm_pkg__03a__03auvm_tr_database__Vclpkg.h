// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_link_base;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_recorder;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_tr_database;
class Varchitecture_uvm_pkg__03a__03auvm_tr_stream;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_tr_database__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_tr_database : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_is_opened;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>, CData/*0:0*/> __PVT__m_streams;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_close_db(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
    virtual void __VnoInFunc_do_establish_link(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    void __VnoInFunc_establish_link(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_link_base> link);
    void __VnoInFunc_get_streams(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn);
    void __VnoInFunc_is_open(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn);
    void __VnoInFunc_m_free_stream(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_open_db(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn);
    void __VnoInFunc_open_stream(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_tr_database(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_tr_database();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database>& obj);

#endif  // guard
