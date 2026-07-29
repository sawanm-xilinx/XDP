# 10. Full-ELF test walkthrough (real run, step-by-step with references)

A concrete end-to-end trace of XDP using a real full-ELF run and its output
files, mapped to the XRT/XDP APIs and source lines that produced/consumed each
artifact.

Test directory (on xsj host):
`/proj/xsjhdstaff5/sawanm/xclbin_to_fullElf/Telluride/test/getting_started/simple_int8/full_elf_test_with_trace/`

This directory actually holds THREE runs' worth of artifacts (the `xrt.ini` was
edited between runs; the profile log even captured the `vi` session):

- aie_profile run  -> `run_profile_xdna.log`, `AieProfile*`
- aie_trace run    -> `AieTrace*`, `aie_trace_gmio_1_0.txt`
- ml_timeline run  -> `run_ml_timeline.log`, `outputs_pjbkp/record_timer_ts.json`

All three use the SAME full-ELF design `ctrl.elf`, so they share Phase A and
differ only at "configure + collect". aie_trace is used below as the spine.

---

## 0. The cast of files (input vs generated)

Inputs (read):

- `aie_runtime` - the host app ("host + XRT"); runs everything.
- `ctrl.elf` (4.3 MB) - THE full-ELF design (AIE control code + AIE metadata,
  no PL, no xclbin). Read by XRT and by XDP.
- `config.json` - aie_runtime config: `elf_bin_file=ctrl.elf`, `num_runs=2`,
  data sources. Read by `aie_runtime`.
- `external_buffer_id.json` - DDR buffer map (ifm/ofm/wts/scratch); used to
  build 13 BOs.
- `data/ifm32.bin`, `data/wts32.bin`, `data/ofm32_ref.bin` - tensors.
- `xrt.ini` - enables XDP features (`aie_trace`/`aie_profile`/`ml_timeline`,
  `xdp_mode=xdna`, metric sets). Read by XDP at plugin load.

Generated (written):

- `AieTraceMetrics1.{asm,elf,DEBUG}` - control code: arm trace on each tile.
- `AieTraceFlush1.{asm,elf,DEBUG}` - control code: drain tiles at end.
- `AieTraceOffload1.{asm,elf,DEBUG}` - control code: program GMIO DMA to DDR.
- `aie_trace_gmio_1_0.txt` (7 MB) - raw trace stream (DYNAMIC data).
- `AieProfileMetrics1.*`, `AieProfilePoll1.*` - profile arm + read control code.
- `aie_event_runtime_config_1.json` (856 KB) - decode map (tile/event meaning).
- `summary.csv` - profile summary (counters).
- `xrt.run_summary` - manifest of output files + hw_context id.
- `outputs_pjbkp/record_timer_ts.json` - ml_timeline output.
- `run_*.log` - console logs (verbosity=10); the ground truth used here.

---

## 1. The XRT side: hw_context and add_config (what/where)

This is the part XDP rides on top of.

### 1a. Host creates the hw_context from the design ELF

The host (`aie_runtime`) loads `ctrl.elf` and creates an `xrt::hw_context`. XRT
exposes a constructor that takes the ELF directly (full-ELF path):

XRT public API - `core/include/xrt/xrt_hw_context.h`:

```cpp
// Constructor with Elf file (full-ELF design), shared access mode
hw_context(const xrt::device& device, const xrt::elf& elf);

// (xclbin path, later in same header)
hw_context(const xrt::device& device, const xrt::uuid& xclbin_id, ...);
```

So the hw_context is the single XRT handle representing "this loaded design on
this device". For full-ELF it is built from `ctrl.elf`; for the classic path it
is built from an xclbin uuid. Everything XDP does hangs off this handle.

### 1b. XDP receives the SAME hw_context via a plugin callback

XDP does not create the context; XRT hands XDP the underlying implementation
pointer through the plugin's `extern "C"` hook, and XDP rebuilds the public
object from it.

`aie_trace/aie_trace_plugin.cpp` (updateAIEDevice):

```cpp
void AieTracePluginUnified::updateAIEDevice(void* handle, bool hw_context_flow) {
  ...
  xrt::hw_context ctx =
      xrt_core::hw_context_int::create_hw_context_from_implementation(handle);
  isFullELFFlow = xrt_core::hw_context_int::get_elf_flow(ctx);   // the decision
  ...
  auto elfMap = xrt_core::hw_context_int::get_elf_map(ctx);      // registered ELFs
```

Key XRT-internal (xdp-facing) APIs off the context, from
`core/common/api/hw_context_int.h`:

- `create_hw_context_from_implementation(handle)` - wrap the opaque impl pointer
  back into an `xrt::hw_context`.
- `get_elf_flow(ctx)` - returns true for full-ELF. THIS is "the oracle".
- `get_elf_map(ctx)` - the ELFs already registered on the context.
- `get_partition_size(ctx)` - number of columns in the partition (used to fix up
  the control-code partition width; see aie_trace.cpp:1269).

### 1c. What add_config actually does

`add_config` registers an additional configuration ELF (XDP's control code) onto
an EXISTING hw_context, so it runs on the same partition as the design.

XRT public API - `core/include/xrt/xrt_hw_context.h`:

```cpp
// add_config() - adds config Elf file to the context
// Adds config Elf to context if it is the first config added.
// If config already exists, it will be added only when configuration matches
// with existing one else an exception is thrown.
void add_config(const xrt::elf& elf);
```

Two consequences that show up directly in XDP code:

1. Because config ELFs must be "compatible" with the context's existing config,
   XDP fixes the control-code partition column count to the context's actual
   `get_partition_size()` before assembling - otherwise `add_config()` throws.
   See the comments at `aie_trace/ve2/aie_trace.cpp:1264` and
   `aie_profile/ve2/aie_profile.cpp:842`.
2. Multiple XDP ELFs (metrics, flush, offload, poll, halt) are all `add_config`'d
   onto the same context, so each is opened by a UNIQUE kernel name to avoid
   collisions (full-ELF path), versus the xclbin path which wraps the ELF in an
   `xrt::module` and opens the fixed `XDP_KERNEL`.

That fork is the whole of "Seam B":

`profile/device/common/ve2/ve2_transaction.cpp` (submitELF, ~lines 200-219):

```cpp
if (m_fullElfFlow) {
    hwContext.add_config(profileElf);                                  // full-ELF
    kernel = xrt::ext::kernel{hwContext, fullElfKernelHandle(m_transactionName)};
}
else {
    xrt::module mod{profileElf};                                       // xclbin
    kernel = xrt::ext::kernel{hwContext, mod, "XDP_KERNEL:{IPUV1CNN}"};
}
// "XDP_KERNEL created"
xrt::run run{kernel};
run.start();   // "Run started"  -> AIE microcontroller replays the register writes
run.wait2();   // "Wait done!"
```

---

## 2. The one decision: full-ELF vs xclbin

XDP never inspects the binary; it asks XRT via `get_elf_flow(ctx)` (section 1b).
The ml_timeline log prints the decision literally:

```
[XRT] INFO: Identify flow type
[XRT] DEBUG: In Full ELF flow
```

Source: `profile/plugin/ml_timeline/ml_timeline_plugin.cpp:127` (Identify flow
type) and `:147` (In Full ELF flow). For aie_profile/aie_trace the equivalent
fork lives in the `static_info_database` factory (updateDevice vs
updateDeviceFromCoreDeviceElf / HwCtxFlow). Full-ELF -> build `ElfBinData`
(AIE-only; `getPl()` throws).

---

## 3. Phase A: read the design's AIE metadata, populate STATIC db

For full-ELF the AIE metadata is NOT in an xclbin AIE_METADATA section; it is in
a CUSTOM SECTION of `ctrl.elf`. The profile log shows the read:

```
[XRT] DEBUG: AIE metadata read from ELF custom section.
[XRT] INFO: Parsing AIE Profile Metadata.
[XRT] INFO: AIE metadataReader requested
```

Source: `profile/database/static_info/elf_bin_data.cpp:52`. `ElfBinData::
buildConfig()` fills a `ConfigInfo` (AIEInfo, no PLInfo), stored in the STATIC db
under this device (hw_context id = 1, per `xrt.run_summary`).

Degraded path (ml_timeline log), when a companion metadata JSON is missing:

```
[XRT] DEBUG: AIE metadata JSON file is required in the run directory ...
[XRT] DEBUG: AIE metadata read failed!
... assuming 24 segments in buffer.
```

Source: `profile/database/static_info/aie_util.cpp:244`. ml_timeline then falls
back to a default 24-segment buffer.

---

## 4. Phase B: read STATIC, decide what to trace

The plugin builds `AieTraceMetadata` from STATIC and applies the `xrt.ini`
request:

```
[AIE_trace_settings]
tile_based_aie_tile_metrics = all:functions
```

`all:functions` = trace the "functions" metric set on every AIE core tile. It
selects `AieTrace_VE2Impl` and sets up the offload manager + trace buffers.
Profile does the same with `all:heat_map`; the profile log shows it reserving
hardware: "Reserved 4 counters for profiling AIE tile (r,c) ... 96 tiles".

---

## 5. Configure the hardware = generate + submit control code

`setMetricsSettings` "programs" the AIE via `XAie_*` driver calls, but on XDNA
(`xdp_mode=xdna`) those calls are RECORDED into a transaction (CONTROLCODE
backend), not executed live. The recording is written as the `.asm`:

```
[XRT] DEBUG: Writing to New Control Code ASM file: AieProfileMetrics1.asm
```

Source: `profile/device/common/ve2/ve2_transaction.cpp:67`.

The recorded register writes are visible in `AieTraceMetrics1.asm`:

```
MASK_WRITE_32   0x3340d0, 0x7f000000, 0x7f000000   ; core-module trace control
MASK_WRITE_32   0x3340e0, 0x7f, 0x23               ; start/stop event
UC_DMA_WRITE_DES_SYNC  @UCBD_label_0               ; push traced-event list via uC DMA
MASK_WRITE_32   0x3140d0, ...                       ; memory-module trace bank
```

Each `MASK_WRITE_32 addr, mask, value` is a read-modify-write of a memory-mapped
AIE register. The address encodes column/row/module: the `0x_34_` vs `0x_14_`
banks are core vs memory module trace units, and the high bits step by column
(`0x334`, `0x434`, `0x534`, `0x634` = adjacent columns). This is the "register
write" step recorded symbolically here, applied physically at run().

aiebu assembler turns ASM -> ELF:

```
[XRT] DEBUG: AIEBU control ASM: AieProfileMetrics1.asm
[XRT] DEBUG: AIEBU output ELF bytes: 25280
```

Source: `ve2_transaction.cpp:118` and `:163`. The 25280 matches
`AieProfileMetrics1.elf` on disk. This is when the `*.elf` files are created.

Submission takes the full-ELF `add_config` branch (section 1c). Log:

```
Start New Control Code Elf -> Elf Object Created -> XDP_KERNEL created ->
Kernel run created -> Run started -> Wait done!
```

`run.start()` makes the AIE microcontroller replay the recorded writes on real
hardware - this is when the trace units actually get armed.
(`submitTransaction()` = `completeASM()` -> `generateELF()` -> `submitELF()`,
`ve2_transaction.cpp:233`.)

---

## 6. Run: the design executes, AIE emits trace to DDR

Host runs the design (`config.json: num_runs=2`). Log:

```
Created 13 BOs:  compute_graph.ifm_ddr[0] ... ofm_ddr[0] ...   (from external_buffer_id.json)
SessionHandler::setupAndLaunchTask ... Run Id: 0   XRT Runtime: 5310 us
                                        Run Id: 1   XRT Runtime: 4251 us
RUN PASSED
```

The offload control code (`AieTraceOffload1.asm`) programmed a GMIO/shim DMA to
stream trace packets into a DDR buffer:

```
UC_DMA_BD  0, 0xc0092d0, @DMAWRITE_data_0, 0x9, 0, 0   ; program shim/GMIO DMA
DMAWRITE_data_0: .long 0x00200000  0x00600000  0x00000500 ...  ; DDR addr/size descriptor
```

That buffer, drained to a file, is `aie_trace_gmio_1_0.txt` (naming:
`aie_trace_gmio_<hwContextId>_<stream>.txt`). Its head is raw event words:

```
0x830000
0xf1000000
0x54397a3e
0xc404008c ...
```

The XDP offload thread reads it and calls `addAIETraceData(...)` into the DYNAMIC
db (`DeviceDB.aie_db`). Profile has no stream; instead the `AieProfilePoll1` ELF
is submitted at teardown to READ counters: "Poll ASM/ELF ready (submit deferred
to teardown)", `aie_profile/ve2/aie_profile.cpp:1228`.

---

## 7. Teardown: flush, then WRITER

The aie_trace flush ELF forces trailing packets out. `AieTraceFlush1.asm` is a
batch of `UC_DMA_BD` writes to each tile's `...008` flush register:

```
UC_DMA_BD  0, 0x334008, @WRITE_data_0, 1, 0, 1
UC_DMA_BD  0, 0x434008, @WRITE_data_0, 1, 0, 1  ...
```

The flush kernel is PREPARED during setup (while XRT statics are alive) and only
RUN at flush time - see `ve2_transaction.cpp:251` (prepareFlushKernel), which
also does the `add_config` (full-ELF) vs `xrt::module` (xclbin) fork at `:257`.

Then `XDPPlugin::endWrite()` runs the writers, which JOIN STATIC + DYNAMIC. Log:

```
[XRT] INFO: Calling AIE Profile endPoll.   (submits AieProfilePoll1 -> reads counters)
[XRT] DEBUG: VPRunSummaryWriter: write contents
```

Writer outputs:

- `aie_event_runtime_config_1.json` - decode map (STATIC meaning). Matches what
  the metrics ASM programmed, e.g. `column 0, row 3, event_trace_name
  "functions", core_trace_config: start_event 28, stop_event 127, traced_events
  [35,36,...]`. A post-processor combines this with `aie_trace_gmio_1_0.txt` to
  reconstruct a timeline.
- `summary.csv` - profile counters (from the Poll read).
- `record_timer_ts.json` - ml_timeline record-timer output.
- `xrt.run_summary` - manifest:

```
"files": [
  { "name": "aie_event_runtime_config_1.json", "type": "AIE_EVENT_RUNTIME_CONFIG", "hw_context": "1" },
  { "name": "aie_trace_gmio_1_0.txt",           "type": "AIE_EVENT_TRACE",          "hw_context": "1" }
]
```

Source: `profile/writer/vp_base/vp_run_summary.cpp` (VPRunSummaryWriter).

---

## 8. Compact timeline (aie_profile run, from the log)

1. `updateDevice` -> xdp_mode=xdna => XDNA profiling.
2. Read AIE metadata from `ctrl.elf` custom section -> STATIC db
   (`elf_bin_data.cpp:52`).
3. Parse profile metadata using `xrt.ini` (`all:heat_map`).
4. `setMetricsSettings`: reserve 4 counters x 96 tiles; record `XAie_*` writes ->
   write `AieProfileMetrics1.asm` (`ve2_transaction.cpp:67`).
5. aiebu: ASM -> `AieProfileMetrics1.elf` (25280 B) (`:118/:163`).
6. Submit (full-ELF add_config): Elf created -> XDP_KERNEL -> run -> wait =>
   counters armed on HW (`:200-228`). "Successfully scheduled AIE Profiling."
7. Prepare `AieProfilePoll1.asm/.elf`; submission DEFERRED to teardown
   (`aie_profile/ve2:1228`).
8. Early `VPRunSummaryWriter: write contents`.
9. App builds 13 BOs (from `external_buffer_id.json`), runs design x2.
10. Teardown: "Destroying AIE Profiling Plugin" -> "endPoll" -> submit Poll ELF
    -> read counters -> writer -> `summary.csv`, `xrt.run_summary`.

The aie_trace run is identical through step 6, but instead of a poll ELF it uses
the offload ELF during the run (streaming to `aie_trace_gmio_1_0.txt`) and the
flush ELF at teardown, then writes `aie_event_runtime_config_1.json`. The
ml_timeline run skips control code entirely (Seam A only): allocates a debug BO
(24 x 8184 B here) and dumps `record_timer_ts.json`.

---

## 9. Artifact -> API -> source cross-reference

| Artifact | Produced/consumed by | Source reference |
| --- | --- | --- |
| `ctrl.elf` (design) | host: `hw_context(device, elf)`; XDP reads AIE metadata | `xrt_hw_context.h` ctor; `elf_bin_data.cpp:52` |
| hw_context handle | XDP: `create_hw_context_from_implementation(handle)` | `aie_trace_plugin.cpp:100` |
| flow decision | `get_elf_flow(ctx)` | `aie_trace_plugin.cpp:102`; `ml_timeline_plugin.cpp:147` |
| registered ELFs | `get_elf_map(ctx)` | `aie_trace_plugin.cpp:150` |
| partition width fixup | `get_partition_size(ctx)` | `aie_trace.cpp:1269` |
| `AieTraceMetrics1.asm` | `setMetricsSettings` records transaction | `ve2_transaction.cpp:67` |
| `AieTraceMetrics1.elf` | aiebu assembler ASM->ELF | `ve2_transaction.cpp:118,163` |
| control-code submit | `add_config(elf)` + unique kernel (full-ELF) | `ve2_transaction.cpp:200-228` |
| `AieTraceOffload1.asm` | GMIO/shim DMA program | offload control code |
| `aie_trace_gmio_1_0.txt` | offload thread -> `addAIETraceData` (DYNAMIC) | offload manager |
| `AieTraceFlush1.asm` | flush kernel at teardown | `ve2_transaction.cpp:251-259` |
| `AieProfilePoll1.elf` | endPoll reads counters | `aie_profile/ve2:1228` |
| `aie_event_runtime_config_1.json` | writer (decode map) | `vp_run_summary.cpp` |
| `summary.csv` | profile writer | writer layer |
| `xrt.run_summary` | VPRunSummaryWriter manifest | `vp_run_summary.cpp` |
