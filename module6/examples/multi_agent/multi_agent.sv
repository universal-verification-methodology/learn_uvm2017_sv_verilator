/**
 * Module 6 Example 6.2: Multi-Agent Environment
 * Two independent agents coordinated from a single test.
 * 
 * LEARNING OBJECTIVES:
 *   1. Understand multi-agent testbench architecture
 *   2. Learn agent configuration via ConfigDB
 *   3. Understand virtual sequences for multi-agent coordination
 *   4. Learn parallel sequence execution (fork-join)
 *   5. Understand agent identification and coordination
 * 
 * MULTI-AGENT ARCHITECTURE:
 *   MultiAgentTest (uvm_test)
 *     └── MA_Env (uvm_env)
 *           ├── MA_Agent a0 (agent_id=0)
 *           │     ├── MA_Sequencer seqr0
 *           │     └── MA_Driver drv0
 *           └── MA_Agent a1 (agent_id=1)
 *                 ├── MA_Sequencer seqr1
 *                 └── MA_Driver drv1
 * 
 * VIRTUAL SEQUENCE:
 *   MA_VirtualSeq
 *     ├── Fork branch 0: Sequences on seqr0 (agent 0)
 *     └── Fork branch 1: Sequences on seqr1 (agent 1)
 * 
 * COORDINATION PATTERN:
 *   - Virtual sequence coordinates multiple agents
 *   - Fork-join for parallel execution
 *   - Each agent has unique agent_id
 *   - ConfigDB used for agent configuration
 */
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================================
// TRANSACTION CLASS
// ============================================================================
/**
 * MA_Txn: Transaction class for multi-agent example
 * 
 * TRANSACTION FIELDS:
 *   - data: 8-bit data
 *   - agent_id: Agent identifier (0 or 1)
 */
class MA_Txn extends uvm_sequence_item;
    rand bit [7:0] data;      // Data (8-bit, randomized)
    rand int       agent_id;  // Agent identifier (int, randomized)
                                // 0 = agent 0, 1 = agent 1
    
    `uvm_object_utils(MA_Txn)
    
    function new(string name="MA_Txn");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("agent=%0d data=0x%02h", agent_id, data);
    endfunction
endclass

// ============================================================================
// SEQUENCER CLASS
// ============================================================================
class MA_Sequencer extends uvm_sequencer #(MA_Txn);
    `uvm_component_utils(MA_Sequencer)
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
endclass

// ============================================================================
// DRIVER CLASS
// ============================================================================
class MA_Driver extends uvm_driver #(MA_Txn);
    `uvm_component_utils(MA_Driver)
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    task run_phase(uvm_phase phase);
        MA_Txn t;
        forever begin
            seq_item_port.get_next_item(t);
            `uvm_info("MA_DRV", {"drive: ", t.convert2string()}, UVM_MEDIUM)
            #5;
            seq_item_port.item_done();
        end
    endtask
endclass

// ============================================================================
// AGENT CLASS
// ============================================================================
/**
 * MA_Agent: Agent for multi-agent example
 * 
 * AGENT CONFIGURATION:
 *   - agent_id: Unique identifier for each agent
 *   - Retrieved from ConfigDB in build_phase
 *   - Default: 0 if not configured
 * 
 * AGENT STRUCTURE:
 *   - Sequencer: Provides transactions to driver
 *   - Driver: Drives transactions
 */
class MA_Agent extends uvm_agent;
    int agent_id;           // Agent identifier
    MA_Sequencer seqr;      // Sequencer
    MA_Driver    drv;       // Driver
    
    `uvm_component_utils(MA_Agent)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CREATE SEQUENCER AND DRIVER
        // ====================================================================
        seqr = MA_Sequencer::type_id::create("seqr", this);
        drv  = MA_Driver   ::type_id::create("drv",  this);
        
        // ====================================================================
        // GET AGENT ID FROM CONFIGDB
        // ====================================================================
        // 
        // CONFIGDB GET:
        //   - Retrieves agent_id from ConfigDB
        //   - Path: "" (empty = current component)
        //   - Field: "agent_id"
        //   - Default: 0 if not found
        // 
        // CONFIGURATION PATTERN:
        //   - Environment sets agent_id via ConfigDB
        //   - Agent retrieves agent_id in build_phase
        //   - Allows agent to know its identity
        if (!uvm_config_db#(int)::get(this, "", "agent_id", agent_id)) begin
            agent_id = 0;  // Default agent_id if not configured
        end
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(seqr.seq_item_export);
    endfunction
endclass

// ============================================================================
// VIRTUAL SEQUENCE CLASS
// ============================================================================
/**
 * MA_VirtualSeq: Virtual sequence for multi-agent coordination
 * 
 * VIRTUAL SEQUENCE PURPOSE:
 *   - Coordinates multiple agents
 *   - Executes sequences on multiple sequencers
 *   - Uses fork-join for parallel execution
 * 
 * VIRTUAL SEQUENCE STRUCTURE:
 *   - seqr0: Sequencer for agent 0
 *   - seqr1: Sequencer for agent 1
 *   - Fork-join: Parallel execution of sequences
 * 
 * EXECUTION PATTERN:
 *   - Fork branch 0: Sequences on seqr0 (agent 0)
 *   - Fork branch 1: Sequences on seqr1 (agent 1)
 *   - Join: Wait for both branches to complete
 */
class MA_VirtualSeq extends uvm_sequence;
    MA_Sequencer seqr0;  // Sequencer for agent 0
    MA_Sequencer seqr1;  // Sequencer for agent 1
    
    `uvm_object_utils(MA_VirtualSeq)
    
    function new(string name="MA_VirtualSeq");
        super.new(name);
    endfunction
    
    task body();
        MA_Txn t0, t1;  // Transactions for each agent
        
        // ====================================================================
        // PARALLEL EXECUTION (FORK-JOIN)
        // ====================================================================
        // 
        // FORK-JOIN:
        //   - Fork: Start parallel execution
        //   - Join: Wait for all branches to complete
        //   - Both agents execute simultaneously
        // 
        // EXECUTION FLOW:
        //   - Branch 0: Agent 0 sequences (seqr0)
        //   - Branch 1: Agent 1 sequences (seqr1)
        //   - Both execute in parallel
        //   - Join waits for both to complete
        // 
        // TIMING DIAGRAM:
        //   Time:  0    10   20   30   40   50
        //   Agent0: [seq0][seq1][seq2][seq3][seq4]
        //   Agent1: [seq0][seq1][seq2][seq3][seq4]
        //   Both execute simultaneously (parallel)
        //   Total time: ~50 units (both complete)
        // 
        // SEQUENTIAL ALTERNATIVE (for comparison):
        //   Time:  0    10   20   30   40   50   60   70   80   90  100
        //   Agent0: [seq0][seq1][seq2][seq3][seq4]
        //   Agent1:                                    [seq0][seq1][seq2][seq3][seq4]
        //   Sequential execution: Agent0 completes, then Agent1 starts
        //   Total time: ~100 units (sequential)
        // 
        // PARALLEL BENEFITS:
        //   - Faster execution (50 vs 100 units)
        //   - Realistic concurrent behavior
        //   - Better test coverage (concurrent scenarios)
        // 
        // FORK-JOIN BEHAVIOR:
        //   - Fork: All branches start simultaneously
        //   - Each branch executes independently
        //   - Join: Wait for ALL branches to complete
        //   - If one branch finishes early, it waits for others
        fork
            // ================================================================
            // BRANCH 0: AGENT 0 SEQUENCES
            // ================================================================
            begin
                // ============================================================
                // GENERATE TRANSACTIONS FOR AGENT 0
                // ============================================================
                repeat (5) begin
                    // Create transaction
                    t0 = MA_Txn::type_id::create("t0");
                    
                    // Randomize with constraint: agent_id == 0
                    /* verilator lint_off IGNOREDRETURN */
                    void'(t0.randomize() with { agent_id == 0; });
                    /* verilator lint_on IGNOREDRETURN */
                    
                    // Set agent_id explicitly (redundant but clear)
                    t0.agent_id = 0;
                    
                    // ====================================================
                    // EXECUTE TRANSACTION ON SEQUENCER 0
                    // ====================================================
                    // 
                    // EXECUTE_ITEM:
                    //   - Sends transaction to sequencer
                    //   - Waits for driver to complete
                    //   - Blocks until transaction completes
                    //   - Similar to start_item/finish_item
                    seqr0.execute_item(t0);
                end
            end
            
            // ================================================================
            // BRANCH 1: AGENT 1 SEQUENCES
            // ================================================================
            begin
                // ============================================================
                // GENERATE TRANSACTIONS FOR AGENT 1
                // ============================================================
                repeat (5) begin
                    // Create transaction
                    t1 = MA_Txn::type_id::create("t1");
                    
                    // Randomize with constraint: agent_id == 1
                    /* verilator lint_off IGNOREDRETURN */
                    void'(t1.randomize() with { agent_id == 1; });
                    /* verilator lint_on IGNOREDRETURN */
                    
                    // Set agent_id explicitly (redundant but clear)
                    t1.agent_id = 1;
                    
                    // ====================================================
                    // EXECUTE TRANSACTION ON SEQUENCER 1
                    // ====================================================
                    seqr1.execute_item(t1);
                end
            end
        join  // Wait for both branches to complete
    endtask
endclass

// ============================================================================
// ENVIRONMENT CLASS
// ============================================================================
/**
 * MA_Env: Environment for multi-agent example
 * 
 * ENVIRONMENT STRUCTURE:
 *   - a0: Agent 0 (agent_id=0)
 *   - a1: Agent 1 (agent_id=1)
 * 
 * CONFIGURATION:
 *   - Sets agent_id for each agent via ConfigDB
 *   - Agents retrieve agent_id in build_phase
 */
class MA_Env extends uvm_env;
    MA_Agent a0;  // Agent 0
    MA_Agent a1;  // Agent 1
    
    `uvm_component_utils(MA_Env)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // ====================================================================
        // CONFIGURE AGENT 0
        // ====================================================================
        // 
        // CONFIGDB SET:
        //   - Sets agent_id=0 for agent a0
        //   - Path: "a0" (agent instance name)
        //   - Field: "agent_id"
        //   - Value: 0
        // 
        // CONFIGURATION TIMING:
        //   - Set before agent creation
        //   - Agent retrieves in build_phase
        uvm_config_db#(int)::set(this, "a0", "agent_id", 0);
        
        // ====================================================================
        // CONFIGURE AGENT 1
        // ====================================================================
        uvm_config_db#(int)::set(this, "a1", "agent_id", 1);
        
        // ====================================================================
        // CREATE AGENTS
        // ====================================================================
        // 
        // AGENT CREATION:
        //   - Created after configuration
        //   - Agents retrieve agent_id in build_phase
        a0 = MA_Agent::type_id::create("a0", this);
        a1 = MA_Agent::type_id::create("a1", this);
    endfunction
endclass

// ============================================================================
// TEST CLASS
// ============================================================================
/**
 * MultiAgentTest: Test for multi-agent example
 * 
 * TEST EXECUTION:
 *   1. Create environment (with two agents)
 *   2. Create virtual sequence
 *   3. Assign sequencers to virtual sequence
 *   4. Start virtual sequence
 *   5. Wait for completion
 */
class MultiAgentTest extends uvm_test;
    MA_Env env;  // Environment with two agents
    
    `uvm_component_utils(MultiAgentTest)
    
    function new(string n, uvm_component p);
        super.new(n, p);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = MA_Env::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        MA_VirtualSeq vseq;  // Virtual sequence
        
        phase.raise_objection(this);
        
        // ====================================================================
        // CREATE VIRTUAL SEQUENCE
        // ====================================================================
        vseq = MA_VirtualSeq::type_id::create("vseq");
        
        // ====================================================================
        // ASSIGN SEQUENCERS TO VIRTUAL SEQUENCE
        // ====================================================================
        // 
        // SEQUENCER ASSIGNMENT:
        //   - Virtual sequence needs sequencer references
        //   - Assigned from environment agents
        //   - Allows virtual sequence to execute on sequencers
        vseq.seqr0 = env.a0.seqr;  // Assign agent 0 sequencer
        vseq.seqr1 = env.a1.seqr;  // Assign agent 1 sequencer
        
        // ====================================================================
        // START VIRTUAL SEQUENCE
        // ====================================================================
        // 
        // VIRTUAL SEQUENCE START:
        //   - start(null): Virtual sequence doesn't need sequencer
        //   - Uses assigned sequencers (seqr0, seqr1)
        //   - Executes fork-join for parallel execution
        //   - Blocks until all sequences complete
        vseq.start(null);
        
        // ====================================================================
        // WAIT FOR COMPLETION
        // ====================================================================
        #200;  // Wait for transactions to complete
        
        phase.drop_objection(this);
    endtask
endclass

// ============================================================================
// TOP-LEVEL MODULE
// ============================================================================
module multi_agent;
    initial run_test("MultiAgentTest");
endmodule
