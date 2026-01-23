// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TEXT_TR_DATABASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_std__03a__03aprocess;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_link_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi114;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_parent_child_link;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_related_link;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_stream;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi114> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_file;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2> __PVT__m_filename_dap;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_close_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn);
  private:
    VlCoroutine __VnoInFunc_do_close_db____Vfork_1__0(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> unnamedblk1__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_do_establish_link(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_link_base> link);
    virtual void __VnoInFunc_do_open_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn);
    virtual void __VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_file_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_text_tr_database>& obj);

#endif  // guard
