// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_QUEUE__TZ155__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_QUEUE__TZ155__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz156;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155> __PVT__m_global_queue;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_queue(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155> &get_global_queue__Vfuncrtn);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz156> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155 : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat>> __PVT__queue;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_insert(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_pop_back(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn);
    virtual void __VnoInFunc_pop_front(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn);
    virtual void __VnoInFunc_push_back(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_push_front(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_until_not_empty(Vpools_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz155>& obj);

#endif  // guard
