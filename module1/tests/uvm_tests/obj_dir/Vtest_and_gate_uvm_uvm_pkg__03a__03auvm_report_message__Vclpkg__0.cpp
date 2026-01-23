// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> __Vfunc_self__0__Vfuncout;
    std::string __Vtask_get_randstate__1__Vfuncout;
    // Body
    VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> p;
    std::string rand_state;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__0__Vfuncout);
    p = __Vfunc_self__0__Vfuncout;
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 524)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__1__Vfuncout);
        rand_state = __Vtask_get_randstate__1__Vfuncout;
    }
    new_report_message__Vfuncrtn = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 527)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi14> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi14> __Vfunc_get__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi14__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__4__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_message"s;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT___report_message_element_container 
        = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__11__Vfuncout;
    __Vtask_size__11__Vfuncout = 0;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message_element_base>> __Vtask_get_elements__12__Vfuncout;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    // Body
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message_element_base>> unnamedblk1__DOT__elements;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0;
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 563)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "severity"s, "uvm_severity"s, 2U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                Vtest_and_gate_uvm___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]), 0x2eU);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 565)->__VnoInFunc_print_string(vlProcess, vlSymsp, "id"s, this->__PVT___id, 0x2eU);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 566)->__VnoInFunc_print_string(vlProcess, vlSymsp, "message"s, this->__PVT___message, 0x2eU);
    if ((0U != (Vtest_and_gate_uvm___024unit::__Venumtab_enum_valid25
                .at(this->__PVT___verbosity) ? ([&]() {
                        l_verbosity = this->__PVT___verbosity;
                    }(), 1U) : 0U))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 568)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "verbosity"s, "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtest_and_gate_uvm___024unit::__Venumtab_enum_name25
                                                                                .at(l_verbosity)), 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___verbosity);
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 571)->__VnoInFunc_print_field(vlProcess, vlSymsp, "verbosity"s, __Vtemp_1, 0x00000020U, 0x07000000U, 0x2eU, ""s);
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 572)->__VnoInFunc_print_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename, 0x2eU);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT___line);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 573)->__VnoInFunc_print_field(vlProcess, vlSymsp, "line"s, __Vtemp_2, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 574)->__VnoInFunc_print_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name, 0x2eU);
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 576)
                ->__VnoInFunc_size(vlSymsp, __Vtask_size__11__Vfuncout);
                }(), __Vtask_size__11__Vfuncout))) {
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 578)->__VnoInFunc_get_elements(vlSymsp, __Vtask_get_elements__12__Vfuncout);
        unnamedblk1__DOT__elements = __Vtask_get_elements__12__Vfuncout;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__elements.size())) {
            VL_NULL_CHECK(unnamedblk1__DOT__elements.at(unnamedblk1__DOT__unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 580)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi14> __Vfunc_get__14__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi14__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__14__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, "uvm_report_message"s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message"s;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> __Vtask_get_report_object__18__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__19__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__20__Vfuncout;
    std::string __Vtask_get_context__21__Vfuncout;
    IData/*31:0*/ __Vtask_get_file__22__Vfuncout;
    __Vtask_get_file__22__Vfuncout = 0;
    std::string __Vtask_get_filename__23__Vfuncout;
    IData/*31:0*/ __Vtask_get_line__24__Vfuncout;
    __Vtask_get_line__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__25__Vfuncout;
    __Vtask_get_action__25__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__26__Vfuncout;
    __Vtask_get_severity__26__Vfuncout = 0;
    std::string __Vtask_get_id__27__Vfuncout;
    std::string __Vtask_get_message__28__Vfuncout;
    IData/*31:0*/ __Vtask_get_verbosity__29__Vfuncout;
    __Vtask_get_verbosity__29__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message> report_message;
    {
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((! VL_CAST_DYNAMIC(rhs, report_message)) 
             || (VlNull{} == rhs))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 603)->__VnoInFunc_get_report_object(vlSymsp, __Vtask_get_report_object__18__Vfuncout);
        this->__PVT___report_object = __Vtask_get_report_object__18__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 604)->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__19__Vfuncout);
        this->__PVT___report_handler = __Vtask_get_report_handler__19__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 605)->__VnoInFunc_get_report_server(vlSymsp, __Vtask_get_report_server__20__Vfuncout);
        this->__PVT___report_server = __Vtask_get_report_server__20__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 606)->__VnoInFunc_get_context(vlSymsp, __Vtask_get_context__21__Vfuncout);
        this->__PVT___context_name = __Vtask_get_context__21__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 607)->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__22__Vfuncout);
        this->__PVT___file = __Vtask_get_file__22__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 608)->__VnoInFunc_get_filename(vlSymsp, __Vtask_get_filename__23__Vfuncout);
        this->__PVT___filename = __Vtask_get_filename__23__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 609)->__VnoInFunc_get_line(vlSymsp, __Vtask_get_line__24__Vfuncout);
        this->__PVT___line = __Vtask_get_line__24__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 610)->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__25__Vfuncout);
        this->__PVT___action = __Vtask_get_action__25__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 611)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__26__Vfuncout);
        this->__PVT___severity = __Vtask_get_severity__26__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 612)->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__27__Vfuncout);
        this->__PVT___id = __Vtask_get_id__27__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 613)->__VnoInFunc_get_message(vlSymsp, __Vtask_get_message__28__Vfuncout);
        this->__PVT___message = __Vtask_get_message__28__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 614)->__VnoInFunc_get_verbosity(vlSymsp, __Vtask_get_verbosity__29__Vfuncout);
        this->__PVT___verbosity = __Vtask_get_verbosity__29__Vfuncout;
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 616)->__VnoInFunc_copy(vlProcess, vlSymsp, VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 616)
                                                                                ->__PVT___report_message_element_container, VlNull{});
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object\n"); );
    // Body
    get_report_object__Vfuncrtn = this->__PVT___report_object;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object\n"); );
    // Body
    this->__PVT___report_object = ro;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT___report_handler;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_handler> rh) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT___report_handler = rh;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server\n"); );
    // Body
    get_report_server__Vfuncrtn = this->__PVT___report_server;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server> rs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT___report_server = rs;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = this->__PVT___severity;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ sev) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity\n"); );
    // Body
    this->__PVT___severity = sev;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = this->__PVT___id;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id\n"); );
    // Body
    this->__PVT___id = id;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = this->__PVT___message;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message\n"); );
    // Body
    this->__PVT___message = msg;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = this->__PVT___verbosity;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ ver) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity\n"); );
    // Body
    this->__PVT___verbosity = ver;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename\n"); );
    // Body
    get_filename__Vfuncrtn = this->__PVT___filename;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string fname) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename\n"); );
    // Body
    this->__PVT___filename = fname;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = this->__PVT___line;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ ln) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line\n"); );
    // Body
    this->__PVT___line = ln;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context\n"); );
    // Body
    get_context__Vfuncrtn = this->__PVT___context_name;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string cn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context\n"); );
    // Body
    this->__PVT___context_name = cn;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = act;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = this->__PVT___file;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file\n"); );
    // Body
    this->__PVT___file = fl;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container\n"); );
    // Body
    get_element_container__Vfuncrtn = this->__PVT___report_message_element_container;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message\n"); );
    // Body
    this->__PVT___context_name = context_name;
    this->__PVT___filename = filename;
    this->__PVT___line = line;
    this->__PVT___severity = severity;
    this->__PVT___id = id;
    this->__PVT___message = message;
    this->__PVT___verbosity = verbosity;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 889)->__VnoInFunc_record_string(vlProcess, vlSymsp, "message"s, this->__PVT___message);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    std::string l_string;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0;
    if ((""s != this->__PVT___context_name)) {
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 900)->__VnoInFunc_record_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name);
    }
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 901)->__VnoInFunc_record_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename);
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___line);
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 902)->__VnoInFunc_record_field(vlProcess, vlSymsp, "line"s, __Vtemp_1, 0x00000020U, 0x03000000U);
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 903)->__VnoInFunc_record_string(vlProcess, vlSymsp, "severity"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                Vtest_and_gate_uvm___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]));
    if ((0U != (Vtest_and_gate_uvm___024unit::__Venumtab_enum_valid25
                .at(this->__PVT___verbosity) ? ([&]() {
                        l_verbosity = this->__PVT___verbosity;
                    }(), 1U) : 0U))) {
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 905)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, 
                                                                                VL_CVT_PACK_STR_NN(Vtest_and_gate_uvm___024unit::__Venumtab_enum_name25
                                                                                .at(l_verbosity)));
    } else {
        l_string = VL_SFORMATF_N_NX("%0d",0,32,this->__PVT___verbosity) ;
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 908)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, l_string);
    }
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 911)->__VnoInFunc_record_string(vlProcess, vlSymsp, "id"s, this->__PVT___id);
    this->__VnoInFunc_m_record_message(vlProcess, vlSymsp, recorder);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record\n"); );
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    this->__VnoInFunc_m_record_core_properties(vlProcess, vlSymsp, recorder);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 921)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 943)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 956)->__VnoInFunc_add_string(vlSymsp, name, value, action);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 969)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__47__Vfuncout;
    __Vfunc___VBasicRand__47__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__47__Vfuncout);
            }(), __Vfunc___VBasicRand__47__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___severity = 0;
    __PVT___verbosity = 0;
    __PVT___line = 0;
    __PVT___action = 0;
    __PVT___file = 0;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_message::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_report_object:" + VL_TO_STRING(__PVT___report_object);
    out += ", _report_handler:" + VL_TO_STRING(__PVT___report_handler);
    out += ", _report_server:" + VL_TO_STRING(__PVT___report_server);
    out += ", _severity:" + VL_TO_STRING(__PVT___severity);
    out += ", _id:" + VL_TO_STRING(__PVT___id);
    out += ", _message:" + VL_TO_STRING(__PVT___message);
    out += ", _verbosity:" + VL_TO_STRING(__PVT___verbosity);
    out += ", _filename:" + VL_TO_STRING(__PVT___filename);
    out += ", _line:" + VL_TO_STRING(__PVT___line);
    out += ", _context_name:" + VL_TO_STRING(__PVT___context_name);
    out += ", _action:" + VL_TO_STRING(__PVT___action);
    out += ", _file:" + VL_TO_STRING(__PVT___file);
    out += ", _report_message_element_container:" + VL_TO_STRING(__PVT___report_message_element_container);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
