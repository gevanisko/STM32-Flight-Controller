# STM32 Flight Controller

STM32-based flight controller PCB for a model/high-power rocket avionics system. The board is designed around an STM32 microcontroller and integrates sensor inputs, GPS, power regulation, external connectors, and pyro/fire control circuitry for flight events such as recovery deployment.

> **Status:** Hardware design in progress. This repository currently contains the Altium project files, schematics, PCB layout, libraries, and generated manufacturing outputs.

## Overview

This project is a custom flight computer PCB intended for rocket avionics. The goal of the board is to collect flight data from onboard sensors, interface with external modules such as GPS, and control pyro channels for deployment events.

The design is organized into multiple schematic sheets to keep the system modular and easier to review:

- **MCU:** STM32 microcontroller circuitry, programming/debug connections, reset, and supporting passives
- **MCU Power:** Local power filtering and regulation for the microcontroller
- **Power:** Main board power input, distribution, and regulator circuitry
- **Sensors:** IMU, barometer, magnetometer, GPS, and related sensor interfaces
- **Pyro Channel:** Output circuitry for pyro/fire control
- **Connectors:** External connections for power, debugging, sensors, and system integration
- **Stackup:** PCB layer stackup and board-level design information

## Features

- STM32-based embedded flight controller
- IMU interface for acceleration and orientation data
- Barometer support for altitude estimation
- Magnetometer support for heading/orientation reference
- GPS interface for position and velocity data
- Pyro/fire control channel for recovery-related events
- Debug/programming support for STM32 development
- Modular Altium schematic structure
- PCB layout and manufacturing output files included
<img width="1917" height="1195" alt="image" src="https://github.com/user-attachments/assets/e4d7573b-5ef1-4e80-b1c8-d9a3e1609e31" />
