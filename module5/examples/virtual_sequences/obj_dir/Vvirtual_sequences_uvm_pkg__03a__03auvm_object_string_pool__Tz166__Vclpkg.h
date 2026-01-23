// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ166__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ166__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz181;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pool__Tz61_TBz166;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166> &get_global_pool__Vfuncrtn);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz181> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_pool__Tz61_TBz166__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_pool__Tz61_TBz166 {
  public:
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz166>& obj);

#endif  // guard
