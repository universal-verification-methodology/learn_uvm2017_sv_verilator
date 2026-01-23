// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ60__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ60__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_std__03a__03aprocess;
class Vclass_hierarchy_uvm_pkg__03a__03am_uvm_waiter;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz117;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz22;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz91;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz60;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz60;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_pool;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_pool__Tz38_TBz117>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz91>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> value);
    VlCoroutine __VnoInFunc_wait_modified(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz60__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_db__Tz60 {
  public:
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_config_db__Tz60>& obj);

#endif  // guard
