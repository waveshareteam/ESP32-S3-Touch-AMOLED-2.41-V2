# 08_Li-ion_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Initialize the battery power-control output to keep the board powered from a lithium battery.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A charged 3.7 V lithium battery with the matching connector and polarity is required.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `08_Li-ion_Test.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

After startup, the board remains powered when USB is disconnected and a charged battery is connected.

## Troubleshooting

This example enables battery power; it does not display battery percentage or implement button-controlled shutdown.
