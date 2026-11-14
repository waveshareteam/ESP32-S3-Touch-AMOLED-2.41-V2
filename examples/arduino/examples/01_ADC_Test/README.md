# 01_ADC_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Read the battery-voltage ADC and print the raw reading and converted voltage.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A 3.7 V battery is optional for battery-voltage measurements.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `01_ADC_Test.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

Raw ADC readings and voltage are printed once per second.

## Troubleshooting

This example reports the divider voltage; it does not estimate battery percentage.
