// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_POLICY__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_POLICY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_policy : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper>, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>> __PVT__m_extensions;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>> __PVT__m_policy_stack;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_extension(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> ext_type);
    virtual void __VnoInFunc_clear_extensions(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_extension_exists(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> ext_type, CData/*0:0*/ &extension_exists__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_active_object(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &get_active_object__Vfuncrtn);
    virtual void __VnoInFunc_get_active_object_depth(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_active_object_depth__Vfuncrtn);
    virtual void __VnoInFunc_get_extension(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> ext_type, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn);
    virtual void __VnoInFunc_pop_active_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &pop_active_object__Vfuncrtn);
    virtual void __VnoInFunc_push_active_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> obj);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_extension(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &set_extension__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_policy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_policy();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy>& obj);

#endif  // guard
