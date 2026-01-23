// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ21__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ21__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_pool;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21__Vclpkg(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21__Vclpkg();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21> rsrc);
    void __VnoInFunc_read_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ &val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ &val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz21>& obj);

#endif  // guard
