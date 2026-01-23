// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TEXT_TR_STREAM__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TEXT_TR_STREAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_comparer;
class Vrecorders_top_uvm_pkg__03a__03auvm_copier;
class Vrecorders_top_uvm_pkg__03a__03auvm_field_op;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi88;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_packer;
class Vrecorders_top_uvm_pkg__03a__03auvm_policy;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database;
class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_database;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi88> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream : public Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database> __PVT__m_text_db;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_close(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_do_free(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name);
    virtual void __VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream>& obj);

#endif  // guard
