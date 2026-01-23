// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtest_simple_register_uvm_uvm_pkg.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seed_map;


class Vtest_simple_register_uvm__Syms;
struct Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0 {
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_type;
    std::string __PVT__m_type_name;

    bool operator==(const Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return __PVT__m_type == rhs.__PVT__m_type
            && __PVT__m_type_name == rhs.__PVT__m_type_name;
    }
    bool operator!=(const Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return std::tie(__PVT__m_type, __PVT__m_type_name)
            <  std::tie(rhs.__PVT__m_type, rhs.__PVT__m_type_name);
    }
};
template <>
struct VlIsCustomStruct<Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0> : public std::true_type {};
struct Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0 {
    std::string __PVT__path;
    IData/*31:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__size;

    bool operator==(const Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0& rhs) const {
        return __PVT__path == rhs.__PVT__path
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__size == rhs.__PVT__size;
    }
    bool operator!=(const Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0& rhs) const {
        return std::tie(__PVT__path, __PVT__offset, __PVT__size)
            <  std::tie(rhs.__PVT__path, rhs.__PVT__offset, rhs.__PVT__size);
    }
};
template <>
struct VlIsCustomStruct<Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0> : public std::true_type {};
struct Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0 {
    IData/*31:0*/ __PVT__kind;
    QData/*63:0*/ __PVT__addr;
    QData/*63:0*/ __PVT__data;
    IData/*31:0*/ __PVT__n_bits;
    CData/*7:0*/ __PVT__byte_en;
    IData/*31:0*/ __PVT__status;

    bool operator==(const Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0& rhs) const {
        return __PVT__kind == rhs.__PVT__kind
            && __PVT__addr == rhs.__PVT__addr
            && __PVT__data == rhs.__PVT__data
            && __PVT__n_bits == rhs.__PVT__n_bits
            && __PVT__byte_en == rhs.__PVT__byte_en
            && __PVT__status == rhs.__PVT__status;
    }
    bool operator!=(const Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0& rhs) const {
        return std::tie(__PVT__kind, __PVT__addr, __PVT__data, __PVT__n_bits, __PVT__byte_en, __PVT__status)
            <  std::tie(rhs.__PVT__kind, rhs.__PVT__addr, rhs.__PVT__data, rhs.__PVT__n_bits, rhs.__PVT__byte_en, rhs.__PVT__status);
    }
};
template <>
struct VlIsCustomStruct<Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__uvm_instance_scope__Vstatic__c;
    CData/*0:0*/ __PVT__uvm_oneway_hash__Vstatic__msb;
    CData/*7:0*/ __PVT__uvm_oneway_hash__Vstatic__current_byte;
    CData/*7:0*/ __PVT__uvm_leaf_scope__Vstatic__bracket_match;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__e;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__es;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__s;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__ss;
    IData/*31:0*/ __PVT__m_uvm_core_state;
    IData/*31:0*/ __PVT__uvm_global_random_seed;
    IData/*31:0*/ __PVT__uvm_instance_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_oneway_hash__Vstatic__crc1;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__bmatches;
    IData/*31:0*/ __PVT__uvm_get_array_index_int__Vstatic__i;
    IData/*31:0*/ __PVT__uvm_get_array_index_string__Vstatic__i;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    std::string __PVT__uvm_is_match__Vstatic__s;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__uvm_deferred_init;
    VlAssocArray<std::string, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seed_map>> __PVT__uvm_random_seed_table_lookup;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seed_map> __PVT__uvm_create_random_seed__Vstatic__seed_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_enabled__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_enabled__Vstatic__cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_report__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report__Vstatic__cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_info__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_info__Vstatic__cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_warning__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_warning__Vstatic__cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_error__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_error__Vstatic__cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_coreservice_t> __PVT__uvm_init__Vstatic__dcs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_init__Vstatic__unnamedblk9__DOT__actual;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __PVT__uvm_init__Vstatic__unnamedblk11__DOT__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> __PVT__end_of_elaboration_ph;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg(Vtest_simple_register_uvm__Syms* symsp, const char* v__name);
    ~Vtest_simple_register_uvm_uvm_pkg();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
};

std::string VL_TO_STRING(const Vtest_simple_register_uvm_m_uvm_factory_type_pair_t__struct__0& obj);
std::string VL_TO_STRING(const Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0& obj);
std::string VL_TO_STRING(const Vtest_simple_register_uvm_uvm_reg_bus_op__struct__0& obj);

#endif  // guard
