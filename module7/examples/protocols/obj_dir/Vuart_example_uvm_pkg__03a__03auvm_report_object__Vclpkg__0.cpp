// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_handler> __Vfunc_create__1__Vfuncout;
    std::string __Vfunc_get_name__2__Vfuncout;
    // Body
    if ((1U & (~ (IData)(this->__PVT__m_rh_set)))) {
        this->__VnoInFunc_set_report_handler(vlSymsp, 
                                             ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__2__Vfuncout);
                                }(), __Vfunc_get_name__2__Vfuncout)), VlNull{}, ""s, __Vfunc_create__1__Vfuncout);
                }(), __Vfunc_create__1__Vfuncout));
    }
}

Vuart_example_uvm_pkg__03a__03auvm_report_object::Vuart_example_uvm_pkg__03a__03auvm_report_object(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object\n"); );
    // Body
    uvm_get_report_object__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_object>{this};
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_report_verbosity_level__4__Vfuncout;
    __Vfunc_get_report_verbosity_level__4__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, ([&]() {
                        this->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, severity, id, __Vfunc_get_report_verbosity_level__4__Vfuncout);
                    }(), __Vfunc_get_report_verbosity_level__4__Vfuncout), verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_message> __Vfunc_new_report_message__6__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if (((0U == (IData)(severity)) & (~ (IData)(report_enabled_checked)))) {
            if ((1U & (~ (0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (IData)(severity), id, __Vfunc_uvm_report_enabled__5__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__5__Vfuncout))))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, __Vfunc_new_report_message__6__Vfuncout);
        l_report_message = __Vfunc_new_report_message__6__Vfuncout;
        VL_NULL_CHECK(l_report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 158)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 270)->__VnoInFunc_set_report_object(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_object>{this});
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 271)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_verbosity_level__17__Vfuncout;
    __Vtask_get_verbosity_level__17__Vfuncout = 0;
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 290)->__VnoInFunc_get_verbosity_level(vlSymsp, severity, id, __Vtask_get_verbosity_level__17__Vfuncout);
    get_report_verbosity_level__Vfuncrtn = __Vtask_get_verbosity_level__17__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_report_max_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    get_report_max_verbosity_level__Vfuncrtn = VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 303)
        ->__PVT__m_max_verbosity_level;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 316)->__VnoInFunc_set_verbosity_level(vlSymsp, verbosity_level);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 323)->__VnoInFunc_set_id_verbosity(vlSymsp, id, verbosity);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 343)->__VnoInFunc_set_severity_id_verbosity(vlSymsp, severity, id, verbosity);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_action__26__Vfuncout;
    __Vtask_get_action__26__Vfuncout = 0;
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 360)->__VnoInFunc_get_action(vlSymsp, severity, id, __Vtask_get_action__26__Vfuncout);
    get_report_action__Vfuncrtn = __Vtask_get_action__26__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 369)->__VnoInFunc_set_severity_action(vlSymsp, severity, action);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 376)->__VnoInFunc_set_id_action(vlSymsp, id, action);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 394)->__VnoInFunc_set_severity_id_action(vlProcess, vlSymsp, severity, id, action);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_file_handle__34__Vfuncout;
    __Vtask_get_file_handle__34__Vfuncout = 0;
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 411)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, __Vtask_get_file_handle__34__Vfuncout);
    get_report_file_handle__Vfuncrtn = __Vtask_get_file_handle__34__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 420)->__VnoInFunc_set_default_file(vlSymsp, file);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file(Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 428)->__VnoInFunc_set_id_file(vlSymsp, id, file);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 435)->__VnoInFunc_set_severity_file(vlSymsp, severity, file);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 458)->__VnoInFunc_set_severity_id_file(vlSymsp, severity, id, file);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 472)->__VnoInFunc_set_severity_override(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 481)->__VnoInFunc_set_severity_id_override(vlProcess, vlSymsp, cur_severity, id, (IData)(new_severity));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_handler> handler) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT__m_rh = handler;
    this->__PVT__m_rh_set = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    get_report_handler__Vfuncrtn = this->__PVT__m_rh;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_object.svh", 521)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__51__Vfuncout;
    __Vfunc___Vbasic_randomize__51__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__51__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__51__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_rh_set = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_report_object>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_rh:" + VL_TO_STRING(__PVT__m_rh);
    out += ", m_rh_set:" + VL_TO_STRING(__PVT__m_rh_set);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
