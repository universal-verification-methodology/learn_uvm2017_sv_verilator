// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_factory;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi25;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_packer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_policy;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi25> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_packer : public Vclass_hierarchy_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__m_pack_iter;
    IData/*31:0*/ __PVT__m_unpack_iter;
    IData/*31:0*/ __PVT__word_size;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory> __PVT__m_factory;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>> __PVT__m_object_references;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_bits(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_get_packed_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_get_packed_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_get_packed_longints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_get_packed_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_index_error(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_is_object_wrapper(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_pack_bits(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field(Vclass_hierarchy__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_with_meta(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_wrapper(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> value);
    virtual void __VnoInFunc_pack_real(Vclass_hierarchy__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_packed_bits(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_set_packed_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_set_packed_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_set_packed_longints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_unpack_bits(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_field(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_object(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_with_meta(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_object_wrapper(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &unpack_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_unpack_real(Vclass_hierarchy__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_packer(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_packer();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer>& obj);

#endif  // guard
