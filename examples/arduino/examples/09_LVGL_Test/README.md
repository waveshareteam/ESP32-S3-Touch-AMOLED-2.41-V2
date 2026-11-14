# 09_LVGL_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Run the LVGL 8 widgets demo on the AMOLED display with capacitive touch.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `09_LVGL_Test.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

The screen displays the LVGL widgets demo and responds to touch.

## Troubleshooting

Use the bundled LVGL 8.4 library and lv_conf.h; LVGL 9 is not compatible with this sketch.
