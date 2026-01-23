// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ12__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ12__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz12;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg(Vtest_simple_register_uvm__Syms* symsp, const char* v__name);
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz12> rsrc);
    void __VnoInFunc_read_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz12> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_db__Tz12>& obj);

#endif  // guard
