// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_POOL__TZ49_TBZ85__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_POOL__TZ49_TBZ85__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz192;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85;
class Vpools_top_uvm_pkg__03a__03auvm_printer;
class Vpools_top_uvm_pkg__03a__03auvm_resource__Tz37;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vpools_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz37> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85> &get_global_pool__Vfuncrtn);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz192> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85 : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz37>> __PVT__pool;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add(Vpools_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz37> item);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vpools_top__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_exists(Vpools_top__Syms* __restrict vlSymsp, std::string key, IData/*31:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_first(Vpools_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &first__Vfuncrtn);
    virtual void __VnoInFunc_get(Vpools_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz37> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_last(Vpools_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &last__Vfuncrtn);
    virtual void __VnoInFunc_next(Vpools_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &next__Vfuncrtn);
    virtual void __VnoInFunc_num(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    virtual void __VnoInFunc_prev(Vpools_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &prev__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz85>& obj);

#endif  // guard
