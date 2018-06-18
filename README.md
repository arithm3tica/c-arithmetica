# c-arithmetica
Experimental features for the next release of Arithmetica written in C.

### Work Engine
The work engine handles loading the next work task and will be able to handle swithcing between computation environment (e.g. WASM, JavaScript, etc.) here is a high level list of the sequence the work engine will follow:
 1. Load the Next Work Task from the Work Sequence
 2. Determine the Execution Environment
 3. Load Inputs (if any) Required by the Task
 4. Execute Sask
 5. Store/Send Outputs
