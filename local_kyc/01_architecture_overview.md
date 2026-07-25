# Phase 0 — XDP Architecture Overview

XDP = "Xilinx Debug/Profile". A set of **loadable plugin libraries** that ride
inside XRT and collect profiling/trace data from host code, PL (FPGA fabric) and
AIE (AI Engine). It is not a standalone tool — XRT loads it based on `xrt.ini`.

## The 4 layers (and the 2 databases)

```
  HOST APP + XRT   loads a binary (xclbin OR full elf), creates hw_context, runs
        │  (XRT fires callbacks/hooks into XDP when a device/context is loaded)
        ▼
 ┌──────────────────────────────────────────────────────────────────────┐
 │ 1) PLUGIN  (profile/plugin/*)                                          │
 │    One library per feature: aie_trace, aie_profile, aie_halt,          │
 │    ml_timeline, device_offload, etc. Registers callbacks, decides      │
 │    WHAT to measure, drives HW setup, and pumps results into the DB.    │
 └──────────────────────────────────────────────────────────────────────┘
        │ writes/reads
        ▼
 ┌──────────────────────────────────────────────────────────────────────┐
 │ 2) DATABASE  (profile/database/*)  — the shared source of truth        │
 │                                                                        │
 │   STATIC  (static_info_database, "VPStaticDatabase")                    │
 │     Structure that does NOT change during a run: which devices exist,  │
 │     which binaries are loaded, the tiles/monitors/counters they hold.  │
 │     Key shape:  deviceId -> DeviceInfo -> [ConfigInfo] -> [VPBinData]   │
 │                                                                        │
 │   DYNAMIC (dynamic_event_database, "VPDynamicDatabase")                 │
 │     Values collected AS the app runs: trace events, counter samples,   │
 │     timestamps. Key shape: HostDB + (deviceId -> DeviceDB{pl_db,aie_db})│
 └──────────────────────────────────────────────────────────────────────┘
        │ read by
        ▼
 ┌──────────────────────────────────────────────────────────────────────┐
 │ 3) DEVICE  (profile/device/*)   talk to real/emulated HW & drivers     │
 │    PL monitors (AIM/AM/ASM), AIE trace offload, VE2 transactions,      │
 │    aie driver / zocl. This is where control code is submitted.         │
 └──────────────────────────────────────────────────────────────────────┘
        │ at end-of-run, contents serialized by
        ▼
 ┌──────────────────────────────────────────────────────────────────────┐
 │ 4) WRITER  (profile/writer/*)   DB -> output files                     │
 │    summary (csv), trace (wdb/csv), ML timeline (json). Reads STATIC    │
 │    for structure + DYNAMIC for values.                                 │
 └──────────────────────────────────────────────────────────────────────┘
```

### Mnemonic
- **STATIC** = "what the hardware *is*" (nouns: devices, binaries, tiles, monitors).
- **DYNAMIC** = "what the hardware *did*" (verbs/values: events, samples, counters).
- PLUGIN = brain, DEVICE = hands, WRITER = mouth, DATABASE = memory.

## How a typical run flows (VE2 AIE trace, simplified)
1. XRT loads a design; on hw_context creation it calls into the aie_trace plugin.
2. Plugin asks XRT `get_elf_flow()` → picks xclbin vs full-elf factory (Phase A).
3. Factory builds a `VPBinData` (`XclbinBinData`/`ElfBinData`) → `ConfigInfo`
   stored in **STATIC** under the `DeviceInfo`.
4. Plugin reads STATIC (tiles/counters to program), builds AIE **control code**,
   submits it to HW via the DEVICE layer (VE2 transaction → ELF → hw_context).
5. As the app runs, trace/counters are offloaded and written into **DYNAMIC**.
6. At teardown, a **WRITER** merges STATIC (structure) + DYNAMIC (values) into
   the output files.

## Where your change sits
Almost entirely in **layer 2 / STATIC** (the `VPBinData` abstraction) plus the
per-plugin entry points in **layer 1** that choose the flow, and the
control-code submission in **layer 3** (`ve2_transaction`, xclbin `xrt::module`
vs full-elf `hw_context.add_config`).

See: `03_phaseA_the_factory.md`, `02_xclbin_fullelf_deepdive.md`,
`04_concepts_deepdive.md`.
