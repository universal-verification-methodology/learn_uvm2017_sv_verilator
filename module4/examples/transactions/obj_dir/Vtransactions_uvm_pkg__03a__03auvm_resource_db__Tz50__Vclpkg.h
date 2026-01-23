// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ50__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ50__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50;
class Vtransactions_uvm_pkg__03a__03auvm_resource_base;
class Vtransactions_uvm_pkg__03a__03auvm_resource_pool;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50> rsrc);
    void __VnoInFunc_read_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string &val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string &val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string val, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz50>& obj);

#endif  // guard
