// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ25__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ25__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25;
class Varchitecture_uvm_pkg__03a__03auvm_resource_base;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25__Vclpkg(Varchitecture__Syms* symsp, const char* v__name);
    ~Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25__Vclpkg();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25> rsrc);
    void __VnoInFunc_read_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ &val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ &val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz25> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz25>& obj);

#endif  // guard
