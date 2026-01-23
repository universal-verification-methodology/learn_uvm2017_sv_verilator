// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_POOL__TZ2_TBZ199__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_POOL__TZ2_TBZ199__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__Tz239;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz68;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz68> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199> &get_global_pool__Vfuncrtn);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__Tz239> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199 : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz68>> __PVT__pool;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz68> item);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_exists(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string key, IData/*31:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_first(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &first__Vfuncrtn);
    virtual void __VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz68> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_last(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &last__Vfuncrtn);
    virtual void __VnoInFunc_next(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &next__Vfuncrtn);
    virtual void __VnoInFunc_num(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    virtual void __VnoInFunc_prev(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &prev__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz199>& obj);

#endif  // guard
