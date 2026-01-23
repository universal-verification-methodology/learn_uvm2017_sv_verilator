// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_factory;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_field_op;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi9;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi9> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__m_pack_iter;
    IData/*31:0*/ __PVT__m_unpack_iter;
    IData/*31:0*/ __PVT__word_size;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_factory> __PVT__m_factory;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object>> __PVT__m_object_references;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_bits(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_get_packed_bytes(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_get_packed_ints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_get_packed_longints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_get_packed_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_index_error(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_is_object_wrapper(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_pack_bits(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_bytes(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_ints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_with_meta(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_wrapper(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> value);
    virtual void __VnoInFunc_pack_real(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_packed_bits(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_set_packed_bytes(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_set_packed_ints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_set_packed_longints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_unpack_bits(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_bytes(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_field(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_ints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_object(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_with_meta(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_object_wrapper(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &unpack_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_unpack_real(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer>& obj);

#endif  // guard
