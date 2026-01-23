// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ136__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ136__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_resource__Tz136;
class Vpools_top_uvm_pkg__03a__03auvm_resource_base;
class Vpools_top_uvm_pkg__03a__03auvm_resource_pool;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz136> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz136> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz136> rsrc);
    void __VnoInFunc_read_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ &val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ &val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vpools_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz136> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz136>& obj);

#endif  // guard
