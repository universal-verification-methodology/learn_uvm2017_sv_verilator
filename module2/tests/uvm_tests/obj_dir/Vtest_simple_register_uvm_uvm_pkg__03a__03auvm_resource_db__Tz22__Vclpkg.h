// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ22__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ22__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_> rsrc);
    void __VnoInFunc_read_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ &val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ &val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22>& obj);

#endif  // guard
