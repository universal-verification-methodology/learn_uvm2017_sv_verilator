// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ51__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ51__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz51;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51__Vclpkg(Vvirtual_sequences__Syms* symsp, const char* v__name);
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51__Vclpkg();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz51> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz51> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz51> rsrc);
    void __VnoInFunc_read_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz51> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51(Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db__Tz51>& obj);

#endif  // guard
