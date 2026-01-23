// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpackage_example__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpackage_example::Vpackage_example(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpackage_example__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpackage_example::Vpackage_example(const char* _vcname__)
    : Vpackage_example(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpackage_example::~Vpackage_example() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpackage_example___024root___eval_debug_assertions(Vpackage_example___024root* vlSelf);
#endif  // VL_DEBUG
void Vpackage_example___024root___eval_static(Vpackage_example___024root* vlSelf);
void Vpackage_example___024root___eval_initial(Vpackage_example___024root* vlSelf);
void Vpackage_example___024root___eval_settle(Vpackage_example___024root* vlSelf);
void Vpackage_example___024root___eval(Vpackage_example___024root* vlSelf);

void Vpackage_example::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpackage_example::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpackage_example___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpackage_example___024root___eval_static(&(vlSymsp->TOP));
        Vpackage_example___024root___eval_initial(&(vlSymsp->TOP));
        Vpackage_example___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpackage_example___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpackage_example::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpackage_example::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpackage_example::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpackage_example___024root___eval_final(Vpackage_example___024root* vlSelf);

VL_ATTR_COLD void Vpackage_example::final() {
    Vpackage_example___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpackage_example::hierName() const { return vlSymsp->name(); }
const char* Vpackage_example::modelName() const { return "Vpackage_example"; }
unsigned Vpackage_example::threads() const { return 1; }
void Vpackage_example::prepareClone() const { contextp()->prepareClone(); }
void Vpackage_example::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpackage_example::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpackage_example___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpackage_example___024root__trace_init_top(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpackage_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpackage_example___024root*>(voidSelf);
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vpackage_example___024root__trace_decl_types(tracep);
    Vpackage_example___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpackage_example___024root__trace_register(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpackage_example::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpackage_example::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpackage_example___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
