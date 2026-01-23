// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi28> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi28> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_message_element_container"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi28> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message_element_container"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__elements.size();
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete\n"); );
    // Body
    this->__PVT__elements.erase(index);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements\n"); );
    // Body
    this->__PVT__elements.clear();
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base>> &get_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements\n"); );
    // Body
    get_elements__Vfuncrtn = this->__PVT__elements;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vfunc_self__4__Vfuncout;
    std::string __Vtask_get_randstate__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_int_element> urme;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__4__Vfuncout);
    p = __Vfunc_self__4__Vfuncout;
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 364)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__5__Vfuncout);
        rand_state = __Vtask_get_randstate__5__Vfuncout;
    }
    urme = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 367)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 369)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 370)->__VnoInFunc_set_value(vlSymsp, value, size, radix);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 371)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vfunc_self__11__Vfuncout;
    std::string __Vtask_get_randstate__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_string_element> urme;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__11__Vfuncout);
    p = __Vfunc_self__11__Vfuncout;
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 391)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__12__Vfuncout);
        rand_state = __Vtask_get_randstate__12__Vfuncout;
    }
    urme = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_string_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 394)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 396)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 397)->__VnoInFunc_set_value(vlSymsp, value);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 398)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vfunc_self__18__Vfuncout;
    std::string __Vtask_get_randstate__19__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element> urme;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__18__Vfuncout);
    p = __Vfunc_self__18__Vfuncout;
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 418)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__19__Vfuncout);
        rand_state = __Vtask_get_randstate__19__Vfuncout;
    }
    urme = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 421)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 423)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 424)->__VnoInFunc_set_value(vlSymsp, obj);
    VL_NULL_CHECK(urme, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 425)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    Vvirtual_sequences_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 432)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    Vvirtual_sequences_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 439)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base> __Vtask_clone__31__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container> urme_container;
    {
        Vvirtual_sequences_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((! VL_CAST_DYNAMIC(rhs, urme_container)) 
             || (VlNull{} == rhs))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_delete_elements(vlSymsp);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(urme_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 452)
                          ->__PVT__elements.size())) {
            this->__PVT__elements.push_back(([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(urme_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 453)
                                      ->__PVT__elements.at(unnamedblk3__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 453)
                                             ->__VnoInFunc_clone(vlSymsp, __Vtask_clone__31__Vfuncout);
                    }(), __Vtask_clone__31__Vfuncout));
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__33__Vfuncout;
    __Vfunc___VBasicRand__33__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__33__Vfuncout);
            }(), __Vfunc___VBasicRand__33__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::~Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_container::to_string_middle\n"); );
    // Body
    std::string out;
    out += "elements:" + VL_TO_STRING(__PVT__elements);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
