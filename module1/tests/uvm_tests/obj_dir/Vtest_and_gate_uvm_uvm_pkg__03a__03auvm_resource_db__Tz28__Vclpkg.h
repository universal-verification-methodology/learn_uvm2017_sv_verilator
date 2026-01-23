// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz28;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz28> rsrc);
    void __VnoInFunc_read_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz28> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz28>& obj);

#endif  // guard
