# XDP - Complete picture, start to end (read-once summary)

This is the single-pass overview that ties every note together.

Master diagram (open separately): `diagrams/master_index.png`

Deep dives live in the numbered notes; this doc is the map:

- 01 architecture
- 02 VPBinData (your change)
- 03 factory
- 04 concepts
- 05 createConfig/buildConfig
- 06 aie_trace slice
- 07 control code
- 08 breadth

---

## 1. What XDP is (one paragraph)

XDP is a set of **loadable profiling/trace plugins** that ride inside XRT and
collect data from host code, PL (FPGA fabric) and AIE (AI Engine). It is
organized in **four layers**: **PLUGIN** (per-feature brain), then **DATABASE**
(shared memory: a **STATIC** half = structure, a **DYNAMIC** half = values), then
**DEVICE** (talks to real/emulated hardware), then **WRITER** (serializes to files).
Mnemonic: *plugin = brain, database = memory, device = hands, writer = mouth.*

---

## 2. The end-to-end flow (VE2 AIE trace)

Follow one run top to bottom:

1. **Host + XRT.** The host loads a design and creates an `hw_context`. The design
   arrives either as a traditional **xclbin** or as a **full ELF** (a single
   `xrt::elf` carrying AIE control code plus AIE metadata, no PL, no xclbin).

2. **Plugin entry (PLUGIN layer).** XRT calls the plugin's `extern "C"` hooks
   (`updateAIEDevice`, `flushAIEDevice`, `finishFlushAIEDevice`). The plugin's
   constructor already registered it with the database.

3. **The oracle plus factory (PHASE A / note 03).** The plugin asks XRT
   `get_elf_flow(ctx)` - **the one call that decides xclbin vs full-elf**. It does
   *not* inspect the binary. Based on the answer it calls one of two factories in
   `static_info_database.cpp`:
   - full-elf calls `updateDeviceFromCoreDeviceElf`, which does `new ElfBinData` (AIE only).
   - xclbin calls `updateDevice`, which does `new XclbinBinData` (PL plus AIE).

4. **Neutral binaries in STATIC (PRIORITY / note 02).** Both factories converge on
   `DeviceInfo::createConfig(VPBinData*)`, then `VPBinData::buildConfig()` (note 05),
   producing a `ConfigInfo` stored under the device. The whole point of your
   change: downstream code speaks to the neutral **VPBinData** interface
   (either `XclbinBinData` or `ElfBinData`), so it does not care about the source.
   Storage shape: `STATIC: DeviceInfo -> [ConfigInfo] -> [VPBinData] (PLInfo/AIEInfo)`.

5. **Read STATIC, decide what to trace (PHASE B / note 06).** `AieTraceMetadata`
   reads the static structure (tiles, GMIOs, metrics, geometry). The plugin picks
   the platform impl (`AieTrace_VE2Impl`), sets up the offload manager and trace
   buffers.

6. **Configure the hardware = control code (note 07).** `setMetricsSettings`
   programs the AIE via `XAie_*` driver calls. On XDNA those calls are **recorded**
   into an ASM (IO backend = CONTROLCODE) - a **transaction** - not executed live.
   The **aiebu assembler** turns ASM into an **ELF**; it is **submitted** via the
   flow-specific fork:
   - full-elf calls `hwContext.add_config(elf)` plus open kernel by unique name.
   - xclbin uses `xrt::module{elf}` plus open `XDP_KERNEL`.

   `run()` makes the AIE microcontroller replay the register writes, arming trace.
   Trace uses up to three ELFs: **metrics** (arm), **flush** (drain at end), and an
   optional **windowed** ELF.

7. **Run, then DYNAMIC (note 04).** As kernels run, the AIE emits trace/counters into
   DDR buffers; the offload reads them and calls `addAIETraceData` - the door into
   the **DYNAMIC** db (`DeviceDB.aie_db`). aie_profile instead polls counters and
   calls `addAIESample`.

8. **Teardown plus WRITER.** The flush ELF forces trailing packets out; a final read
   lands in DYNAMIC; `XDPPlugin::endWrite()` runs the **writer**, which **joins
   STATIC (which tile/monitor) with DYNAMIC (the values)** into the output files.

---

## 3. The two databases (the crux to remember)

- **STATIC** (`VPStaticDatabase`) = *what the hardware is* (nouns): devices,
  loaded binaries, tiles, monitors, counters. Written once at load (Phase A),
  read throughout.
  Shape: `map<deviceId, DeviceInfo> -> vector<ConfigInfo> -> vector<VPBinData*>`.
- **DYNAMIC** (`VPDynamicDatabase`) = *what the hardware did* (values): trace
  events, counter/timer samples. Written during the run, read at teardown.
  Shape: `HostDB plus map<deviceId, DeviceDB{aie_db, pl_db}>`.
- The **WRITER** is where the two meet: STATIC gives meaning, DYNAMIC gives
  numbers.

---

## 4. Your xclbin / full-elf change, in one view

The change is conceptually **small but wide**: it introduced the neutral
`VPBinData` abstraction and wired a full-elf path alongside the xclbin path.
It touches every AIE plugin at exactly **two seams** (note 08):

- **Seam A, the factory decision:** `get_elf_flow()` picks `ElfBinData` vs
  `XclbinBinData`. (Every plugin.)
- **Seam B, the control-code submission fork:** `add_config(elf)` (full-elf) vs
  `xrt::module{elf}` (xclbin), shared through `VE2Transaction`. (Only plugins that
  submit control code: aie_trace, aie_profile, aie_halt.)

Everything else (the DB model, metadata reader, writer) was reused unchanged,
which is why the concept fits on one page even though many files were edited.

### The key rule that ripples everywhere

`ElfBinData` has **no PL** - `getPl()` throws. So PL access must go through
`ConfigInfo::getPlBinary()` (which never returns an ELF) or be guarded by
`isXclbin()`. That single asymmetry explains most of the per-plugin edits.

---

## 5. Same-spine table (all AIE plugins)

| Plugin | Configure HW | Collect data | Notes |
| --- | --- | --- | --- |
| aie_trace | control-code ELF (metrics+flush) | offload stream, `addAIETraceData` | the reference slice |
| aie_profile | control-code ELF (counters) | poll, `addAIESample` | closest twin |
| aie_halt | prebuilt halt ELF | none | minimal add_config/module example |
| ml_timeline | debug BO (no control code) | read record-timer BO to json | outlier; only Seam A |

---

## 6. Glossary (fast recall)

- **xclbin / full-elf** - the two design-binary forms; full-elf = AIE-only, no PL.
- **hw_context** - XRT handle for a loaded config; source of `get_elf_flow`,
  `get_elf_map`, `add_config`, `get_partition_size`.
- **VPBinData** - neutral binary interface; `XclbinBinData` or `ElfBinData`.
- **ConfigInfo / DeviceInfo** - one config (set of binaries) / one device plus history.
- **control code** - the XDP-generated AIE register program (transaction to ELF).
- **transaction** - recorded `XAie_*` ops (CONTROLCODE backend) turned into ASM.
- **aiebu assembler** - turns ASM control code into a runnable ELF.
- **`XAie_*` / `devInst`** - the AIE driver API / its device-instance handle.
- **GMIO / PLIO** - AIE-to-DDR / AIE-to-fabric streaming paths for trace offload.
- **STATIC vs DYNAMIC db** - structure (nouns) vs collected values (verbs).

---

## 7. One-line takeaways

- The xclbin-vs-elf decision is **XRT's** (`get_elf_flow`), read by the plugin.
- `VPBinData` makes the source **invisible** downstream - that is the design win.
- STATIC = structure, DYNAMIC = values, WRITER = join.
- On XDNA, configuring the AIE = **generate plus submit a control-code ELF**, not
  direct register pokes.
- Every AIE plugin is the **same spine**; only *configure* and *collect* differ.
