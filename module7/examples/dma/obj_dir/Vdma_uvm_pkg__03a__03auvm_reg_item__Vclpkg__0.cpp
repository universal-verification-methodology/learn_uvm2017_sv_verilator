// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi103> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi103> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi103__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_item"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi103> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi103__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_item"s;
}

Vdma_uvm_pkg__03a__03auvm_reg_item::Vdma_uvm_pkg__03a__03auvm_reg_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__prior = 0xffffffffU;
    ;
    this->__PVT__value.renew(1U);
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__Vvalue_size, 0x0000000000000020ULL, 
                                                                "__Vvalue_size", 0ULL);
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtask_get_full_name__4__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_get_full_name__6__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    std::string s;
    std::string value_s;
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("kind="s, 
                                                                                Vdma___024unit::__Venumtab_enum_name81
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__kind)]), " ele_kind="s), 
                                                     Vdma___024unit::__Venumtab_enum_name79
                                                     [
                                                     (3U 
                                                      & this->__PVT__element_kind)]), " ele_name="s), 
                       ((VlNull{} == this->__PVT__element)
                         ? "null"s : ([&]() {
                    VL_NULL_CHECK(this->__PVT__element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 187)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__4__Vfuncout);
                }(), __Vtask_get_full_name__4__Vfuncout)));
    if ((VL_LTS_III(32, 1U, this->__PVT__value.size()) 
         && (0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "RegModel"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout)))) {
        value_s = "'{"s;
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__value.size())) {
            value_s = VL_CONCATN_NNN(value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                               64,
                                                               this->__PVT__value.at(unnamedblk1__DOT__i)) );
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        value_s = VL_PUTC_N(value_s, (VL_LEN_IN(value_s) 
                                      - (IData)(1U)), 0x7dU);
    } else {
        value_s = VL_SFORMATF_N_NX("%0x",0,64,this->__PVT__value.at(0U)) ;
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " value="s), value_s);
    if ((2U == this->__PVT__element_kind)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX(" offset=%0x",0,
                                               64,this->__PVT__offset) );
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(s, " map="s), 
                                                     ((VlNull{} 
                                                       == this->__PVT__map)
                                                       ? "null"s
                                                       : 
                                                      ([&]() {
                            VL_NULL_CHECK(this->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 201)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__6__Vfuncout);
                        }(), __Vtask_get_full_name__6__Vfuncout))), " path="s), 
                       Vdma___024unit::__Venumtab_enum_name73
                       [(3U & this->__PVT__path)]);
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " status="s), 
                       Vdma___024unit::__Venumtab_enum_name71
                       [(3U & this->__PVT__status)]);
    convert2string__Vfuncrtn = s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rhs_;
    {
        if ((VlNull{} == rhs)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/NULL"s, __Vfunc_uvm_report_enabled__7__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/NULL"s, "do_copy: rhs argument is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh"s, 0x000000d7U, ""s, 1U);
            }
        }
        if ((! VL_CAST_DYNAMIC(rhs, rhs_))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "WRONG_TYPE"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "WRONG_TYPE"s, "Provided rhs is not of type uvm_reg_item"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh"s, 0x000000daU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        Vdma_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        this->__PVT__element_kind = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 222)
            ->__PVT__element_kind;
        this->__PVT__element = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 223)
            ->__PVT__element;
        this->__PVT__kind = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 224)
            ->__PVT__kind;
        this->__PVT__value = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 225)
            ->__PVT__value;
        this->__PVT__offset = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 226)
            ->__PVT__offset;
        this->__PVT__status = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 227)
            ->__PVT__status;
        this->__PVT__local_map = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 228)
            ->__PVT__local_map;
        this->__PVT__map = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 229)
            ->__PVT__map;
        this->__PVT__path = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 230)
            ->__PVT__path;
        this->__PVT__extension = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 231)
            ->__PVT__extension;
        this->__PVT__bd_kind = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 232)
            ->__PVT__bd_kind;
        this->__PVT__parent = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 233)
            ->__PVT__parent;
        this->__PVT__prior = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 234)
            ->__PVT__prior;
        this->__PVT__fname = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 235)
            ->__PVT__fname;
        this->__PVT__lineno = VL_NULL_CHECK(rhs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 236)
            ->__PVT__lineno;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__14__Vfuncout;
    __Vfunc___Vbasic_randomize__14__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__14__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__14__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array\n"); );
    // Body
    this->__PVT__value.resize(this->__Vvalue_size);
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint\n"); );
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvsgt __Vvalue_size #x00000000)) (__Vbv (bvslt __Vvalue_size #x000003e8)))"s);
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vvalue_size #x00000000))"s);
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_max_values_setup_constraint(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    this->__VnoInFunc_max_values_resize_constrained_array(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vbasic_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vtask_randomize__17__Vfuncout;
    __Vtask_randomize__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_randomize__18__Vfuncout;
    __Vtask_randomize__18__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__kind = Vdma___024unit::__Venumvaltab_2
        [(3U & VL_RANDOM_RNG_I(__Vm_rng))];
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__value.size())) {
        this->__PVT__value.atWrite(unnamedblk2_1__DOT____Vrandarr___0) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                              + unnamedblk2_1__DOT____Vrandarr___0);
    }
    this->__PVT__offset = VL_RANDOM_RNG_Q(__Vm_rng);
    if ((VlNull{} != this->__PVT__parent)) {
        __Vbasic_randomize__Vfuncrtn = (__Vbasic_randomize__Vfuncrtn 
                                        & ([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 45)
                                           ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__17__Vfuncout);
                }(), __Vtask_randomize__17__Vfuncout));
    }
    if ((VlNull{} != this->__PVT__extension)) {
        __Vbasic_randomize__Vfuncrtn = (__Vbasic_randomize__Vfuncrtn 
                                        & ([&]() {
                    VL_NULL_CHECK(this->__PVT__extension, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 45)
                                           ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__18__Vfuncout);
                }(), __Vtask_randomize__18__Vfuncout));
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__element_kind = 0;
    __PVT__kind = 0;
    __PVT__value.atDefault() = 0;
    __PVT__offset = 0;
    __PVT__status = 0;
    __PVT__path = 0;
    __PVT__prior = 0;
    __PVT__lineno = 0;
    __Vvalue_size = VL_SCOPED_RAND_RESET_I(32, 6719160359356950861ULL, 14629294730460850430ull);
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "element_kind:" + VL_TO_STRING(__PVT__element_kind);
    out += ", element:" + VL_TO_STRING(__PVT__element);
    out += ", kind:" + VL_TO_STRING(__PVT__kind);
    out += ", value:" + VL_TO_STRING(__PVT__value);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", status:" + VL_TO_STRING(__PVT__status);
    out += ", local_map:" + VL_TO_STRING(__PVT__local_map);
    out += ", map:" + VL_TO_STRING(__PVT__map);
    out += ", path:" + VL_TO_STRING(__PVT__path);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", prior:" + VL_TO_STRING(__PVT__prior);
    out += ", extension:" + VL_TO_STRING(__PVT__extension);
    out += ", bd_kind:" + VL_TO_STRING(__PVT__bd_kind);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", __Vvalue_size:" + VL_TO_STRING(__Vvalue_size);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
