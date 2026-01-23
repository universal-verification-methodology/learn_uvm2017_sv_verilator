// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ12__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ12__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_object;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_resource__Tz12;
class Vuart_example_uvm_pkg__03a__03auvm_resource_base;
class Vuart_example_uvm_pkg__03a__03auvm_resource_pool;
class Vuart_example_uvm_pkg__03a__03auvm_root;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vuart_example__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz12> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz12> rsrc);
    void __VnoInFunc_read_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vuart_example__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vuart_example__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz12> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vuart_example__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> val, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12(Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_db__Tz12>& obj);

#endif  // guard
