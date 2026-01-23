// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_resource_base::Vdma_uvm_pkg__03a__03auvm_resource_base(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__modified = 0U;
    this->__PVT__read_only = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only\n"); );
    // Body
    this->__PVT__read_only = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write\n"); );
    // Body
    this->__PVT__read_only = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only\n"); );
    // Body
    is_read_only__Vfuncrtn = this->__PVT__read_only;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified\n"); );
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__modified)))) {
        CData/*0:0*/ __VdynTrigger_ha35c045f__0;
        __VdynTrigger_ha35c045f__0 = 0;
        __VdynTrigger_ha35c045f__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_ha35c045f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 
                                                         319);
            __VdynTrigger_ha35c045f__0 = this->__PVT__modified;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha35c045f__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 
                                                     319);
    }
    this->__PVT__modified = 0U;
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_m_value_type_name__1__Vfuncout;
    std::string __Vfunc_m_value_as_string__2__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_m_value_type_name(vlSymsp, __Vfunc_m_value_type_name__1__Vfuncout);
        }(), __Vfunc_m_value_type_name__1__Vfuncout);
    __Vtemp_2 = ([&]() {
            this->__VnoInFunc_m_value_as_string(vlSymsp, __Vfunc_m_value_as_string__2__Vfuncout);
        }(), __Vfunc_m_value_as_string__2__Vfuncout);
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("(%@) %@",0,
                                                -1,
                                                &(__Vtemp_1),
                                                -1,
                                                &(__Vtemp_2)) ;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name(Vdma__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string(Vdma__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vfunc_m_value_type_name__5__Vfuncout;
    std::string __Vfunc_m_value_as_string__6__Vfuncout;
    // Body
    Vdma_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 397)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "val"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_m_value_type_name(vlSymsp, __Vfunc_m_value_type_name__5__Vfuncout);
                }(), __Vfunc_m_value_type_name__5__Vfuncout)), ""s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_m_value_as_string(vlSymsp, __Vfunc_m_value_as_string__6__Vfuncout);
                }(), __Vfunc_m_value_as_string__6__Vfuncout)));
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_auditing__7__Vfuncout;
    __Vfunc_is_auditing__7__Vfuncout = 0;
    std::string __Vtask_get_full_name__8__Vfuncout;
    Vdma_access_t__struct__0 __Vtask_init_access_record__9__access_record;
    __Vtask_init_access_record__9__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__9__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__9__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__9__access_record.__PVT__write_count = 0;
    // Body
    std::string str;
    Vdma_access_t__struct__0 access_record;
    access_record.__PVT__read_time = 0;
    access_record.__PVT__write_time = 0;
    access_record.__PVT__read_count = 0;
    access_record.__PVT__write_count = 0;
    {
        if ((1U & (~ ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __Vfunc_is_auditing__7__Vfuncout);
                        }(), (IData)(__Vfunc_is_auditing__7__Vfuncout))))) {
            goto __Vlabel0;
        }
        str = ((VlNull{} != accessor) ? ([&]() {
                    VL_NULL_CHECK(accessor, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 456)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__8__Vfuncout);
                }(), __Vtask_get_full_name__8__Vfuncout)
                : "<empty>"s);
        if (this->__PVT__access.exists(str)) {
            access_record = this->__PVT__access.at(str);
        } else {
            __Vtask_init_access_record__9__access_record 
                = access_record;
            this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__9__access_record);
            access_record = __Vtask_init_access_record__9__access_record;
        }
        access_record.__PVT__read_count = ((IData)(1U) 
                                           + access_record
                                           .__PVT__read_count);
        access_record.__PVT__read_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__access.at(str) = access_record;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_auditing__10__Vfuncout;
    __Vfunc_is_auditing__10__Vfuncout = 0;
    std::string __Vtask_get_full_name__11__Vfuncout;
    Vdma_access_t__struct__0 __Vtask_init_access_record__12__access_record;
    __Vtask_init_access_record__12__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__12__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__12__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__12__access_record.__PVT__write_count = 0;
    // Body
    Vdma_access_t__struct__0 unnamedblk1__DOT__access_record;
    unnamedblk1__DOT__access_record.__PVT__read_time = 0;
    unnamedblk1__DOT__access_record.__PVT__write_time = 0;
    unnamedblk1__DOT__access_record.__PVT__read_count = 0;
    unnamedblk1__DOT__access_record.__PVT__write_count = 0;
    std::string unnamedblk1__DOT__str;
    std::string str;
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __Vfunc_is_auditing__10__Vfuncout);
            }(), (IData)(__Vfunc_is_auditing__10__Vfuncout))) {
        if ((VlNull{} != accessor)) {
            VL_NULL_CHECK(accessor, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 493)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
            unnamedblk1__DOT__str = __Vtask_get_full_name__11__Vfuncout;
            if (this->__PVT__access.exists(unnamedblk1__DOT__str)) {
                unnamedblk1__DOT__access_record = this->__PVT__access
                    .at(unnamedblk1__DOT__str);
            } else {
                __Vtask_init_access_record__12__access_record 
                    = unnamedblk1__DOT__access_record;
                this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__12__access_record);
                unnamedblk1__DOT__access_record = __Vtask_init_access_record__12__access_record;
            }
            unnamedblk1__DOT__access_record.__PVT__write_count 
                = ((IData)(1U) + unnamedblk1__DOT__access_record
                   .__PVT__write_count);
            unnamedblk1__DOT__access_record.__PVT__write_time 
                = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
            this->__PVT__access.at(unnamedblk1__DOT__str) 
                = unnamedblk1__DOT__access_record;
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__17__id;
    std::string __Vtask_uvm_report_info__17__message;
    IData/*31:0*/ __Vtask_uvm_report_info__17__verbosity;
    __Vtask_uvm_report_info__17__verbosity = 0;
    std::string __Vtask_uvm_report_info__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__17__line;
    __Vtask_uvm_report_info__17__line = 0;
    std::string __Vtask_uvm_report_info__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__17__report_enabled_checked;
    __Vtask_uvm_report_info__17__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__18__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk2__DOT__i;
    CData/*0:0*/ unnamedblk2__DOT__i__Vfirst;
    unnamedblk2__DOT__i__Vfirst = 0;
    std::string str;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> comp;
    Vdma_access_t__struct__0 access_record;
    access_record.__PVT__read_time = 0;
    access_record.__PVT__write_time = 0;
    access_record.__PVT__read_count = 0;
    access_record.__PVT__write_count = 0;
    VlQueue<std::string> qs;
    {
        if ((0U == this->__PVT__access.size())) {
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__access.first(unnamedblk2__DOT__i))) {
            unnamedblk2__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk2__DOT__i__Vfirst) 
                    || (0U != this->__PVT__access.next(unnamedblk2__DOT__i)))) {
                unnamedblk2__DOT__i__Vfirst = 0U;
                str = unnamedblk2__DOT__i;
                access_record = this->__PVT__access
                    .at(str);
                qs.push_back(VL_SFORMATF_N_NX("%@ reads: %0# @ %0t  writes: %0# @ %0t\n",0,
                                              -1,&(str),
                                              32,access_record
                                              .__PVT__read_count,
                                              64,access_record
                                              .__PVT__read_time,
                                              -9,32,
                                              access_record
                                              .__PVT__write_count,
                                              64,access_record
                                              .__PVT__write_time,
                                              -9) );
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__13__id = "UVM/RESOURCE/ACCESSOR"s;
                        __Vfunc_uvm_report_enabled__13__severity = 0U;
                        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__15__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                        __Vfunc_uvm_report_enabled__13__Vfuncout 
                            = __Vtask_uvm_report_enabled__16__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
            __Vtask_uvm_report_info__17__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__17__context_name = ""s;
            __Vtask_uvm_report_info__17__line = 0x00000214U;
            __Vtask_uvm_report_info__17__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_base.svh"s;
            __Vtask_uvm_report_info__17__verbosity = 0U;
            __Vtask_uvm_report_info__17__message = 
                VL_CVT_PACK_STR_NN(([&]() {
                        __Vfunc_m_uvm_string_queue_join__18__Vfuncout 
                            = VL_CVT_PACK_STR_ND(qs);
                    }(), __Vfunc_m_uvm_string_queue_join__18__Vfuncout));
            __Vtask_uvm_report_info__17__id = "UVM/RESOURCE/ACCESSOR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__17__id, __Vtask_uvm_report_info__17__message, __Vtask_uvm_report_info__17__verbosity, __Vtask_uvm_report_info__17__filename, __Vtask_uvm_report_info__17__line, __Vtask_uvm_report_info__17__context_name, (IData)(__Vtask_uvm_report_info__17__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record(Vdma__Syms* __restrict vlSymsp, Vdma_access_t__struct__0 &access_record) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record\n"); );
    // Body
    access_record.__PVT__read_time = 0ULL;
    access_record.__PVT__write_time = 0ULL;
    access_record.__PVT__read_count = 0U;
    access_record.__PVT__write_count = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__23__Vfuncout;
    __Vfunc___VBasicRand__23__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__23__Vfuncout);
            }(), __Vfunc___VBasicRand__23__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__modified = 0;
    __PVT__read_only = 0;
    __PVT__access.atDefault().__PVT__read_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__write_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__read_count = 0;
    __PVT__access.atDefault().__PVT__write_count = 0;
}

Vdma_uvm_pkg__03a__03auvm_resource_base::~Vdma_uvm_pkg__03a__03auvm_resource_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "modified:" + VL_TO_STRING(__PVT__modified);
    out += ", read_only:" + VL_TO_STRING(__PVT__read_only);
    out += ", access:" + VL_TO_STRING(__PVT__access);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
