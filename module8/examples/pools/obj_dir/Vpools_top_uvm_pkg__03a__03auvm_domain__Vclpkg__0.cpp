// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_domains(Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain>> &domains) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_domains\n"); );
    // Body
    domains = this->__PVT__m_domains;
}

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_schedule(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_schedule\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> __Vtask_get_uvm_domain__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __Vtask_get_uvm_domain__0__Vfuncout);
    get_uvm_schedule__Vfuncrtn = this->__PVT__m_uvm_schedule;
}

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_build_phase> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_connect_phase> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_start_of_simulation_phase> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_phase> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_extract_phase> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_check_phase> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_phase> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_final_phase> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__20__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_build_phase> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__22__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_connect_phase> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__24__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__26__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_start_of_simulation_phase> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__28__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_phase> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__30__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_extract_phase> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__32__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_check_phase> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__34__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_phase> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> __Vfunc_get_uvm_domain__36__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> __Vtask_find__38__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_phase> __Vfunc_get__39__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> domain;
    {
        if (this->__PVT__m_domains.exists("common"s)) {
            domain = this->__PVT__m_domains.at("common"s);
        }
        if ((VlNull{} != domain)) {
            get_common_domain__Vfuncrtn = domain;
            goto __Vlabel0;
        }
        domain = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "common"s);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 111)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
                }(), __Vfunc_get__3__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 112)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                }(), __Vfunc_get__5__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 113)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                }(), __Vfunc_get__7__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 114)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                }(), __Vfunc_get__9__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 115)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                }(), __Vfunc_get__11__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 116)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                }(), __Vfunc_get__13__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 117)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                }(), __Vfunc_get__15__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 118)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                }(), __Vfunc_get__17__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 119)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_final_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                }(), __Vfunc_get__19__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 123)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                }(), __Vfunc_get__21__Vfuncout), 1U, __Vtask_find__20__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 124)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
                }(), __Vfunc_get__23__Vfuncout), 1U, __Vtask_find__22__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 125)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                }(), __Vfunc_get__25__Vfuncout), 1U, __Vtask_find__24__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph 
            = __Vtask_find__24__Vfuncout;
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 126)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                }(), __Vfunc_get__27__Vfuncout), 1U, __Vtask_find__26__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 127)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                }(), __Vfunc_get__29__Vfuncout), 1U, __Vtask_find__28__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 128)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                }(), __Vfunc_get__31__Vfuncout), 1U, __Vtask_find__30__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 129)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                }(), __Vfunc_get__33__Vfuncout), 1U, __Vtask_find__32__Vfuncout);
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 130)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                }(), __Vfunc_get__35__Vfuncout), 1U, __Vtask_find__34__Vfuncout);
        this->__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __Vfunc_get_uvm_domain__36__Vfuncout);
        domain = __Vfunc_get_uvm_domain__36__Vfuncout;
        VL_NULL_CHECK(this->__PVT__m_domains.at("common"s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 133)->__VnoInFunc_add(vlProcess, vlSymsp, domain, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__m_domains
                                  .at("common"s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 134)
                                                                                ->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                            }(), __Vfunc_get__39__Vfuncout), 1U, __Vtask_find__38__Vfuncout);
                }(), __Vtask_find__38__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{});
        get_common_domain__Vfuncrtn = this->__PVT__m_domains
            .at("common"s);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> schedule) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pre_reset_phase> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reset_phase> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_post_reset_phase> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pre_configure_phase> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_configure_phase> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_post_configure_phase> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pre_main_phase> __Vfunc_get__53__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_main_phase> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_post_main_phase> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pre_shutdown_phase> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_shutdown_phase> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_post_shutdown_phase> __Vfunc_get__63__Vfuncout;
    // Body
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 146)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
            }(), __Vfunc_get__41__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 147)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
            }(), __Vfunc_get__43__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 148)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
            }(), __Vfunc_get__45__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 149)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
            }(), __Vfunc_get__47__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 150)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
            }(), __Vfunc_get__49__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 151)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
            }(), __Vfunc_get__51__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 152)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
            }(), __Vfunc_get__53__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 153)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
            }(), __Vfunc_get__55__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 154)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_post_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            }(), __Vfunc_get__57__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 155)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
            }(), __Vfunc_get__59__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 156)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
            }(), __Vfunc_get__61__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    VL_NULL_CHECK(schedule, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 157)->__VnoInFunc_add(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
            }(), __Vfunc_get__63__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
}

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_uvm_domain)) {
        this->__PVT__m_uvm_domain = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "uvm"s);
        this->__PVT__m_uvm_schedule = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
        this->__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, this->__PVT__m_uvm_schedule);
        VL_NULL_CHECK(this->__PVT__m_uvm_domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 172)->__VnoInFunc_add(vlProcess, vlSymsp, this->__PVT__m_uvm_schedule, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
    }
    get_uvm_domain__Vfuncrtn = this->__PVT__m_uvm_domain;
}

void Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_jump_all(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_jump_all\n"); );
    // Locals
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain>> __Vtask_get_domains__68__domains;
    // Body
    std::string unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain>> domains;
    this->__VnoInFunc_get_domains(vlSymsp, __Vtask_get_domains__68__domains);
    domains = __Vtask_get_domains__68__domains;
    if ((0U != domains.first(unnamedblk2__DOT__idx))) {
        unnamedblk2__DOT__idx__Vfirst = 1U;
        while (((IData)(unnamedblk2__DOT__idx__Vfirst) 
                || (0U != domains.next(unnamedblk2__DOT__idx)))) {
            unnamedblk2__DOT__idx__Vfirst = 0U;
            VL_NULL_CHECK(domains.at(unnamedblk2__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 210)->__VnoInFunc_jump(vlSymsp, phase);
        }
    }
}

Vpools_top_uvm_pkg__03a__03auvm_domain::Vpools_top_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_phase(vlProcess, vlSymsp, name, 4U, VlNull{}) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__Vfuncout;
    __Vfunc_uvm_report_enabled__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    std::string __Vfunc_uvm_report_enabled__1__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    std::string __Vtask_uvm_report_error__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    std::string __Vtask_uvm_report_error__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__PVT__m_domains.exists(name)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__1__id = "UNIQDOMNAM"s;
                        __Vfunc_uvm_report_enabled__1__severity = 2U;
                        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__2__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), __Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__4__Vfuncout);
                        __Vfunc_uvm_report_enabled__1__Vfuncout 
                            = __Vtask_uvm_report_enabled__4__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__1__Vfuncout))) {
            __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__5__context_name = ""s;
            __Vtask_uvm_report_error__5__line = 0x000000b7U;
            __Vtask_uvm_report_error__5__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh"s;
            __Vtask_uvm_report_error__5__verbosity = 0U;
            __Vtask_uvm_report_error__5__message = VL_SFORMATF_N_NX("Domain created with non-unique name '%@'",0,
                                                                    -1,
                                                                    &(name)) ;
            __Vtask_uvm_report_error__5__id = "UNIQDOMNAM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__5__id, __Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, __Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, __Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__PVT__m_domains.at(name) 
        = VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain>{this};
}

void Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_jump(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_jump\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_state__10__Vfuncout;
    __Vtask_get_state__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_state__11__Vfuncout;
    __Vtask_get_state__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_before__12__Vfuncout;
    __Vtask_is_before__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_after__13__Vfuncout;
    __Vtask_is_after__13__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase>> phases;
    this->__VnoInFunc_m_get_transitive_children(vlSymsp, phases);
    phases = phases.find([&](IData/*31:0*/ item__DOT__index, 
                             VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> item) -> 
                         CData/*31:0*/ {
            return ((VL_LTES_III(32, 8U, ([&]() {
                                VL_NULL_CHECK(item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 194)
                                          ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__10__Vfuncout);
                            }(), __Vtask_get_state__10__Vfuncout)) 
                     && VL_GTES_III(32, 0x00000080U, 
                                    ([&]() {
                                VL_NULL_CHECK(item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 194)
                                     ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__11__Vfuncout);
                            }(), __Vtask_get_state__11__Vfuncout))));
        }
    );
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, phases.size())) {
        if ((([&]() {
                        VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 197)
              ->__VnoInFunc_is_before(vlProcess, vlSymsp, phase, __Vtask_is_before__12__Vfuncout);
                    }(), (IData)(__Vtask_is_before__12__Vfuncout)) 
             || ([&]() {
                        VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 197)
                 ->__VnoInFunc_is_after(vlSymsp, phase, __Vtask_is_after__13__Vfuncout);
                    }(), (IData)(__Vtask_is_after__13__Vfuncout)))) {
            VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_domain.svh", 198)->__VnoInFunc_jump(vlSymsp, phase);
        }
        unnamedblk1__DOT__idx = ((IData)(1U) + unnamedblk1__DOT__idx);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__16__Vfuncout;
    __Vfunc___Vbasic_randomize__16__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__16__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__16__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_domain::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_domain::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_domain::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_domain::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_phase::to_string_middle();
    return (out);
}
