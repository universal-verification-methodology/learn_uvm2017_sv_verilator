// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ49__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ49__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_> rsrc);
    void __VnoInFunc_read_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ &val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ &val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_db__Tz49>& obj);

#endif  // guard
