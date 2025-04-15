# Description

This repository contains the **registers address** definition of the LPC55xx MCUs peripherals.

# Dependencies

The driver relies on:

* An external `types.h` header file defining the **standard C types** of the targeted MCU.

# Compilation flags

| **Flag name** | **Value** | **Description** |
|:---:|:---:|:---:|
| `LPC55XX_REGISTERS_DISABLE_FLAGS_FILE` | `defined` / `undefined` | Disable the `lpc55xx_registers_flags.h` header file inclusion when compilation flags are given in the project settings or by command line. |
