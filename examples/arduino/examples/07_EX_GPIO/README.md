# 07_EX_GPIO

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Test native GPIO and TCA9554 expanded GPIO with external loopback connections.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. With power disconnected, connect GPIO7 to GPIO8 and EXIO5 to EXIO6 on J8 using two jumper wires.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `07_EX_GPIO.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

The serial monitor repeatedly prints GPIO test passed or GPIO test failed.

## Troubleshooting

Both loopback pairs are required for the test to pass; see the V2 schematic for J8 pin positions.
