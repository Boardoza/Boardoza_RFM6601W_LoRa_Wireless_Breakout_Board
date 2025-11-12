# Boardoza RFM6601W LoRa Wireless Communication Module Breakout Board

The **Boardoza RFM6601W** is a LoRa wireless communication module designed by **HOPERF**, featuring an integrated LoRa transceiver, RF transmitter/receiver, and a powerful **32-bit ARM Cortex-M4 RISC microcontroller** operating at 48 MHz. This module is ideal for long-range, low-power wireless applications including IoT sensor networks, smart agriculture, industrial monitoring, and remote telemetry systems.

The module operates with **3.3V or 5V** supply voltage and communicates via **UART** interface, making it compatible with a wide range of microcontroller platforms. It supports operating frequencies  **868 MHz** with exceptional receiving sensitivity of **-138 dBm** at maximum spreading factor.

## [Click here to purchase!](https://www.ozdisan.com/p/arduino-sensorleri-ve-modulleri-613/boardoza-boardoza-rfm6601w-1202716)

|Front Side|Back Side|
|:---:|:---:|
| ![RFM6601W Front](./assets/RFM6601W%20Front.png)| ![RFM6601W Back](./assets/RFM6601W%20Back.png)|

---

## Key Features

- **Integrated MCU:** 32-bit ARM Cortex-M4 processor at 48 MHz.  
- **Operation Frequency Range:** 868 MHz ISM bands.
- **High Sensitivity:** –138 dBm at SF=12, BW=125 kHz.  
- **Adjustable Output Power:** Up to +2 dBm.  
- **Low Power Consumption:** 10 mA RX, 20 mA TX at +2 dBm.  
- **Simple UART Interface:** Easy integration with most microcontrollers.  
- **Dual Voltage Support:** Operates at 3.3V or 5V.  
- **Compact Form Factor:** Ideal for wireless embedded applications.  

---

## Technical Specifications

**Manufacturer:** HOPERF  
**Model:** RFM6601W  
**Input Voltage:** 3.3V - 5V  
**Voltage Input Type:** 7-pin 2.50mm header  
**Interface:** UART  
**Functions:** LoRa Wireless Communication Module  
**Processor:** ARM Cortex-M4 32-bit RISC MCU  
**Clock Speed:** 48 MHz  
**Frequency Range:** 868 MHz - 868.2 MHz (continuous coverage)  
**Operating Frequencies:**  868 MHz  
**Receiving Sensitivity:** -138 dBm @SF=12, BW=125KHz  
**Transmit Current:** 20 mA @+2dBm, 868MHz  
**Receive Current:** 10 mA @868.1MHz  
**Operating Temperature:** -40°C ~ +85°C  
**Board Dimensions:** 40mm x 40mm

---

## Board Pinout

### **( J1 ) Main Communication & Power Pins**

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | GND | Ground |
| 2 | TX | MCU GPIO (UART_RXD) |
| 3 | RX | MCU GPIO (UART_TXD) |
| 4 | CLOCK | SWD CLK (Serial Wire Debug Clock) |
| 5 | DATA | SWD DATA (Serial Wire Debug Data) |
| 6 | RESET | Reset signal (active low) |
| 7 | VDD | Power supply input (3.3V - 5V) |

### **( J2 ) GPIO Extension Pins**

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | GPIO32 | MCU General Purpose I/O |
| 2 | GPIO33 | MCU General Purpose I/O |
| 3 | GPIO37 | MCU General Purpose I/O |
| 4 | GPIO1 | MCU General Purpose I/O |
| 5 | GPIO0 | MCU General Purpose I/O |
| 6 | GPIO03 | MCU General Purpose I/O |
| 7 | GPIO02 | MCU General Purpose I/O |
| 8 | GPIO16 | MCU General Purpose I/O |
| 9 | GPIO14 | MCU General Purpose I/O |
| 10 | GPIO15 | MCU General Purpose I/O |

### **( J3 ) GPIO Extension Pins**

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | GPIO44 | MCU General Purpose I/O |
| 2 | GPIO45 | MCU General Purpose I/O |
| 3 | GPIO47 | MCU General Purpose I/O |
| 4 | GPIO09 | MCU General Purpose I/O |
| 5 | GPIO04 | MCU General Purpose I/O |
| 6 | GPIO05 | MCU General Purpose I/O |
| 7 | GPIO08 | MCU General Purpose I/O |
| 8 | GPIO11 | MCU General Purpose I/O |
| 9 | GPIO58 | MCU General Purpose I/O |
| 10 | GPIO60 | MCU General Purpose I/O |

---

## Board Dimensions

<img src="./assets/RFM6601W Dimension.png" alt="RFM6601W Dimensions" width="450"/>

---

## Step Files

[Boardoza RFM6601W.step](./assets/RFM6601W%20Step.step)

---

## Datasheet

[HOPERF RFM6601W Datasheet.pdf](./assets/RFM6601W%20Datasheet.pdf)

---

## Version History

- V1.0.0 - Initial Release

---

## Support

- If you have any questions or need support, please contact <support@boardoza.com>

---

## License

Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
