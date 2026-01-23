// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_link_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi81;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_parent_child_link;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_related_link;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_simple_lock_dap__Tz48;
class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database;
class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_database;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi81> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_tr_database__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database : public Vrecorders_top_uvm_pkg__03a__03auvm_tr_database {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_file;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_simple_lock_dap__Tz48> __PVT__m_filename_dap;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
  private:
    VlCoroutine __VnoInFunc_do_close_db____Vfork_1__0(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_std__03a__03aprocess> unnamedblk1__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_do_establish_link(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_file_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_database>& obj);

#endif  // guard
