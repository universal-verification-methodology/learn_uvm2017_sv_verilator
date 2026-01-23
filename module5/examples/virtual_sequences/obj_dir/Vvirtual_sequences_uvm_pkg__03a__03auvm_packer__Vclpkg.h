// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_field_op;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi21;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_packer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_policy;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi21> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_packer : public Vvirtual_sequences_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__m_pack_iter;
    IData/*31:0*/ __PVT__m_unpack_iter;
    IData/*31:0*/ __PVT__word_size;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory> __PVT__m_factory;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object>> __PVT__m_object_references;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_bits(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_get_packed_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_get_packed_ints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_get_packed_longints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_get_packed_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_index_error(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_is_object_wrapper(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_pack_bits(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field(Vvirtual_sequences__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_ints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_with_meta(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_wrapper(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> value);
    virtual void __VnoInFunc_pack_real(Vvirtual_sequences__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_packed_bits(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_set_packed_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_set_packed_ints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_set_packed_longints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_unpack_bits(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_field(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_ints(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_object(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_with_meta(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_object_wrapper(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &unpack_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_unpack_real(Vvirtual_sequences__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_packer(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_packer();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer>& obj);

#endif  // guard
