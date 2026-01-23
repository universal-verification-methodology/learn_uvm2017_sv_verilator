// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Varchitecture_uvm_pkg.h"
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_event_;
class Varchitecture_uvm_pkg__03a__03auvm_mem;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi113;
class Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz24;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_reg;
class Varchitecture_uvm_pkg__03a__03auvm_reg_adapter;
class Varchitecture_uvm_pkg__03a__03auvm_reg_block;
class Varchitecture_uvm_pkg__03a__03auvm_reg_field;
class Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor;
class Varchitecture_uvm_pkg__03a__03auvm_reg_item;
class Varchitecture_uvm_pkg__03a__03auvm_reg_map;
class Varchitecture_uvm_pkg__03a__03auvm_reg_map_info;
class Varchitecture_uvm_pkg__03a__03auvm_reg_seq_base;
class Varchitecture_uvm_pkg__03a__03auvm_reg_transaction_order_policy;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_base;
class Varchitecture_uvm_pkg__03a__03auvm_vreg;
class Varchitecture_uvm_pkg__03a__03auvm_vreg_field;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_reg_map__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __PVT__m_backdoor;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_reg_map__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_backdoor(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi113> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_reg_map : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_byte_addressing;
    CData/*0:0*/ __PVT__m_auto_predict;
    CData/*0:0*/ __PVT__m_check_on_read;
    IData/*31:0*/ __PVT__m_n_bytes;
    IData/*31:0*/ __PVT__m_endian;
    IData/*31:0*/ __PVT__m_system_n_bytes;
    QData/*63:0*/ __PVT__m_base_addr;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_submaps;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>, std::string> __PVT__m_submap_rights;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_sequence_wrapper;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> __PVT__m_adapter;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __PVT__m_parent_map;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_regs_info;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_mems_info;
    VlAssocArray<QData/*63:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset;
    VlAssocArray<QData/*63:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset_wo;
    VlAssocArray<VlWide<5>/*159:0*/, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>> __PVT__m_mems_by_offset;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_transaction_order_policy> __PVT__policy;
    void __VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip);
    void __VnoInFunc_Xinit_address_mapX(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_Xverify_map_configX(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_mem(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_parent_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_add_reg(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_submap(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset);
    void __VnoInFunc_ceil(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &ceil__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_clone_and_update(Varchitecture__Syms* __restrict vlSymsp, std::string rights, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &clone_and_update__Vfuncrtn);
    void __VnoInFunc_configure(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    VlCoroutine __VnoInFunc_do_bus_access(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_read(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_adapter(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn);
    virtual void __VnoInFunc_get_addr_unit_bytes(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn);
    void __VnoInFunc_get_auto_predict(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn);
    virtual void __VnoInFunc_get_base_addr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn);
    void __VnoInFunc_get_check_on_read(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn);
    virtual void __VnoInFunc_get_endian(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_by_offset(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_n_bytes(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_parent_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> parent_map, IData/*31:0*/ &byte_offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_offset(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_root_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn);
    virtual void __VnoInFunc_get_sequencer(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_submaps(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier);
    void __VnoInFunc_get_transaction_order_policy(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_m_set_mem_offset(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_m_set_reg_offset(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    VlCoroutine __VnoInFunc_perform_accesses(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<Varchitecture_uvm_reg_bus_op__struct__0> &accesses, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> adapter, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Varchitecture__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_auto_predict(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_base_addr(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset);
    void __VnoInFunc_set_check_on_read(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_sequencer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_set_submap_offset(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset);
    void __VnoInFunc_set_transaction_order_policy(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol);
    virtual void __VnoInFunc_unregister(Varchitecture__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_reg_map(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_reg_map();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>& obj);

#endif  // guard
