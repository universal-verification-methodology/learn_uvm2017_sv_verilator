// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE__TZ43__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE__TZ43__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz346;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22;
class Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43;
class Vtransactions_uvm_pkg__03a__03auvm_resource_base;
class Vtransactions_uvm_pkg__03a__03auvm_resource_pool;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43> __PVT__my_type;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_highest_precedence(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &q, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_resource_base__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43 : public Vtransactions_uvm_pkg__03a__03auvm_resource_base {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__val;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_value_as_string(Vtransactions__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn);
    virtual void __VnoInFunc_m_value_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read__Vfuncrtn);
    void __VnoInFunc_write(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ t, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz43>& obj);

#endif  // guard
