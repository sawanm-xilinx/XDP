# XDP — Know Your Codebase (KYC) notes

Personal learning notes for understanding the XDP project, with priority on the
**xclbin + Full ELF** changes. These are *reading notes only* — nothing here is
compiled or shipped. Source files are not modified from this workspace.

> How to read code efficiently (the method these notes follow):
> **outside-in, then one vertical slice end-to-end, then breadth.**
> Trace *data*, not files. For each key class ask "who creates it?" and
> "who consumes it?". Draw a diagram per phase. Keep a glossary.

---

## Read-once overview

- **`09_summary_full_flow.md`** — the complete start→end picture in one pass.
- **`diagrams/master_index.png`** — one big diagram linking every phase.

Start here if you want the whole picture quickly, then dive into the numbered
notes below for detail.

## Suggested reading order (phases)

| Phase | Goal | Note file |
|------:|------|-----------|
| 0 | Orient: what XDP is, the 4 layers, data flow | `01_architecture_overview.md` |
| A | The factory: where xclbin-vs-full-elf is decided | `03_phaseA_the_factory.md` |
| 2 | **PRIORITY:** the xclbin/Full-ELF abstraction you changed | `02_xclbin_fullelf_deepdive.md` |
| — | Concepts Q&A (DeviceInfo/ConfigInfo, dynamic db, control code, xrt::elf, metadata, hw_context) | `04_concepts_deepdive.md` |
| — | createConfig/buildConfig/ctors: who calls what & when ctors fire | `05_createconfig_buildconfig.md` |
| — | setMetricsSettings, XAie/transactions, add_config vs module, assembler, ELF types, pollTimers | `07_setmetrics_transaction_elf.md` |
| B | One vertical slice: aie_trace on VE2 start→end | `06_phaseB_slice_aie_trace_ve2.md` |
| 3 | Breadth: other plugins reuse the same spine | `08_phase3_breadth.md` |

Diagrams live in `diagrams/` (`.dot` source + rendered `.png`).

Recommended path for *you* given the goal:
**0 → 2 → 1 → 3**. Phase 2 is first-class because it explains *why* your change
rippled across so many plugins.

---

## The 4 layers of XDP (mental model)

```
        host app / XRT  ── loads a binary (xclbin OR full elf), runs kernels
                │
   ┌────────────▼──────────────────────────────────────────────┐
   │ PLUGIN      per-feature controller (aie_trace, aie_profile, │
   │             aie_halt, ml_timeline...). Decides WHAT to      │
   │             measure and configures the hardware.            │
   ├────────────────────────────────────────────────────────────┤
   │ DATABASE    the shared "source of truth". static_info holds │
   │  (static +  DeviceInfo → ConfigInfo → VPBinData (xclbin/elf).│
   │   dynamic)  dynamic_info holds the collected events/counters.│
   ├────────────────────────────────────────────────────────────┤
   │ DEVICE      talks to real/emulated hardware & drivers       │
   │             (aie driver, zocl, PL monitors).                │
   ├────────────────────────────────────────────────────────────┤
   │ WRITER      serializes DB contents to output files          │
   │             (summary, trace, timeline).                     │
   └────────────────────────────────────────────────────────────┘
```

Your change lives mostly in the **DATABASE / static_info** layer, which is why
every plugin (a consumer of the database) had to be touched.

---

## Glossary (fill in as you go)

- **PL** — Programmable Logic (FPGA fabric portion of the device).
- **AIE** — AI Engine array (the ML compute tiles).
- **xclbin** — traditional container binary; may carry PL + AIE info.
- **Full ELF** — newer flow: a single `xrt::elf` carrying AIE control code +
  AIE metadata, *no xclbin*, no PL.
- **hw_context** — XRT handle representing a loaded configuration on a device.
- **GMIO** — Global Memory I/O; AIE↔DDR streaming path used for trace offload.
- **VPBinData** — neutral interface for "a loaded binary" (see phase 2).
- **ConfigInfo** — one loaded configuration = a set of `VPBinData*`.
- **DeviceInfo** — one physical/emulated device + history of its ConfigInfos.

---

## Key files cheat-sheet (verified locations)

- `profile/database/static_info/binary_types.h` — the enums (`BinaryInfoType`,
  `ConfigInfoType`, `BinDataSource`). **Start here — smallest file, biggest signal.**
- `profile/database/static_info/vp_bin_data.h` — the `VPBinData` interface.
- `profile/database/static_info/xclbin_info.h` — `XclbinBinData` + `ConfigInfo`.
- `profile/database/static_info/elf_bin_data.h` — `ElfBinData` (Full ELF).
- `profile/database/static_info/device_info.h` — `DeviceInfo`.
- `profile/database/static_info_database.{h,cpp}` — creates the binaries; the
  factory/wiring point where XRT input becomes `VPBinData`.
- `profile/plugin/aie_trace/ve2/aie_trace.cpp` — a consumer (your slice).
- `profile/writer/vp_base/summary_writer.cpp` — a consumer (output side).
