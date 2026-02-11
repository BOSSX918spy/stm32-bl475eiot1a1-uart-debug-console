# STM32 UART Debug Console

## Overview
This project implements a UART-based debug console for the STM32L475
microcontroller. The console provides a centralized mechanism for transmitting
formatted diagnostic messages, enabling runtime visibility during firmware
development and debugging.

The design focuses on clarity, modularity, and industry-aligned firmware
structure.

---

## Target Platform
- MCU: STM32L475VGT6 (ARM Cortex-M4F)
- Board: B-L475E-IOT01A
- UART: USART1 (ST-Link Virtual COM Port)
- Pins: PB6 (TX), PB7 (RX)

---

## Software Environment
- STM32CubeIDE
- STM32CubeMX
- STM32 HAL (L4 series)

---

## Design Objectives
- Provide a reusable UART logging interface
- Centralize UART transmit logic
- Support formatted debug output
- Avoid scattering HAL UART calls across application code

---

## Key Concepts Demonstrated
- UART peripheral configuration
- Blocking UART transmission
- Variadic functions for formatted logging
- Separation of communication and application logic
- Debug-oriented firmware design

---

## Firmware Architecture
- `uart_console.c` implements the logging interface
- `main.c` uses the console without direct UART access
- HAL handles low-level peripheral configuration

This structure mirrors common embedded debug frameworks used in industry.

---

## Build and Run
1. Open the `.ioc` file in STM32CubeMX
2. Generate code for STM32CubeIDE
3. Build and flash the project
4. Open a serial terminal (115200 baud, 8N1)
5. Observe periodic debug messages

---

## Design Limitations
- Blocking UART transmit
- No receive or command handling
- Fixed buffer size

---

## Possible Extensions
- Interrupt or DMA-based UART transmission
- Ring buffer implementation
- Command-line interface (CLI)
- RTOS-safe logging backend

---

## Author
**Gurnoor Singh**  
Embedded Systems | Firmware Development | MCU Software
