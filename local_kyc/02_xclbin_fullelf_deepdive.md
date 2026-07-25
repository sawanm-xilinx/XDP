# Phase 2 (PRIORITY): the xclbin + Full-ELF abstraction

This is the heart of your change. Understand *this one abstraction* and the rest
of your edits across plugins become obvious — they are all just "read the binary
through the new interface instead of the old concrete xclbin type".

## The problem your change solved

Before: the database assumed a loaded configuration always came from an
**xclbin** (`XclbinInfo`), which could hold PL info and/or AIE info. Every plugin
read that concrete type directly.

New requirement: on VE2, a design can be configured by a **Full ELF** — a single
`xrt::elf` that carries AIE control code + AIE metadata and has **no PL and no
xclbin** at all.

Rather than special-casing ELF everywhere, the change introduces a **neutral
interface** so plugins/writers don't care about the source.

## The core types (read these headers in this order)

1. `binary_types.h` — the vocabulary.

```27:42:profile/database/static_info/binary_types.h
  enum BinaryInfoType {
      XCLBIN_PL_ONLY,
      XCLBIN_AIE_ONLY,
      XCLBIN_AIE_PL,
      ELF_AIE_ONLY
  } ;
  enum ConfigInfoType { CONFIG_PL_ONLY, CONFIG_AIE_ONLY, CONFIG_AIE_PL,
    CONFIG_AIE_PL_FORMED, CONFIG_PL_DEVICE_INTF_ONLY, CONFIG_ELF_AIE_ONLY } ;
  enum class BinDataSource { XCLBIN, ELF } ;
```

2. `vp_bin_data.h` — `VPBinData`, the abstract interface. Note `source()`,
   `isXclbin()`, `getPl()/getAie()`, and the key factory method `buildConfig()`.
3. `xclbin_info.h` — `XclbinBinData` (xclbin implementation) **and** `ConfigInfo`.
4. `elf_bin_data.h` — `ElfBinData` (ELF implementation).

## Class relationships

```
              ┌──────────────────────────┐
              │   VPBinData  (interface)  │
              │  getUuid/getName/getType  │
              │  source() isXclbin()      │
              │  getPl()  getAie()        │
              │  buildConfig(DeviceInfo&) │
              └───────────┬──────────────┘
                 implements│implements
        ┌──────────────────┴───────────────────┐
        ▼                                        ▼
┌───────────────────┐                   ┌──────────────────────┐
│  XclbinBinData     │                   │   ElfBinData         │
│  source = XCLBIN   │                   │   source = ELF       │
│  has PLInfo m_pl   │                   │   getPl() -> THROWS  │
│  has AIEInfo m_aie │                   │   only AIEInfo m_aie │
│  fromLastConfig()  │                   │   readAIEMetadata()  │
└───────────────────┘                   └──────────────────────┘

  DeviceInfo ──owns──▶ vector<ConfigInfo>
  ConfigInfo ──owns──▶ vector<VPBinData*>   (deletes them in ~ConfigInfo)
```

### Key asymmetry to remember
- `XclbinBinData::getPl()` returns real `PLInfo`.
- `ElfBinData::getPl()` **throws `std::logic_error`** (ELF has no PL).
  → Callers must guard with `isXclbin()` **or** go through
  `ConfigInfo::getPlBinary()`, which is defined to *never* return an ELF binary.
  This is the single most important rule your plugin edits rely on.

## How a loaded binary becomes a ConfigInfo (creation path)

```
XRT loads binary
      │
      ▼
static_info_database.cpp   ← FACTORY: inspects input, builds a VPBinData
      │                       (XclbinBinData for xclbin, ElfBinData for full elf)
      ▼
DeviceInfo::createConfig(VPBinData*)      (device_info.h:93)
      │
      ▼
VPBinData::buildConfig(DeviceInfo&)       (polymorphic)
      │        ├─ XclbinBinData: may pull the "missing half" from the device's
      │        │  previous config via fromLastConfig()  (e.g. AIE-only xclbin
      │        │  merged with a prior PL-only one -> CONFIG_AIE_PL_FORMED)
      │        └─ ElfBinData: self-contained -> CONFIG_ELF_AIE_ONLY
      ▼
ConfigInfo (type + vector<VPBinData*>) appended to DeviceInfo::loadedConfigInfos
```

## How plugins/writers consume it (read path)

Consumers no longer touch xclbin fields directly. They ask `ConfigInfo`:
- `getPlBinary()` → the PL-bearing binary (always an xclbin, or none).
- `getAieBinary()` → the AIE-bearing binary (xclbin OR elf).
- `getNumAM/AIM/ASM(...)`, `getAMonitor(...)`, etc. take a `VPBinData*`.

So the pattern in your plugin edits is:
```
ConfigInfo* cfg = devInfo->currentConfig();
VPBinData*  aie = cfg->getAieBinary();   // works for xclbin AND elf
VPBinData*  pl  = cfg->getPlBinary();    // null on a pure-ELF config
```

## Questions to answer next (turn these into TODO reading)
- [ ] In `static_info_database.cpp`, *where exactly* is the decision "xclbin vs
      elf" made, and what XRT API reveals it? (grep `ElfBinData`, `get_cfg_uuid`)
- [ ] `getElfFlow()` was mentioned in a cleanup commit — where is the flag set in
      the profile ctor and who reads it?
- [ ] Why does trace offload use `numColumns = partitionSize` for full elf?
      (commit `1ed22ac`) — trace this in `aie_trace/ve2/aie_trace.cpp`.
- [ ] How does `ElfBinData::readAIEMetadata()` get metadata when there is no
      xclbin? (AIE_METADATA ELF section vs on-disk json fallback)
```
