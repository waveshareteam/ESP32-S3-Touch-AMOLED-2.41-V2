# 06_WIFI_AP

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Create a Wi-Fi access point on the board.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A phone or computer with Wi-Fi is required.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `06_WIFI_AP.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

A phone or computer can discover and join the configured Wi-Fi network.

## Troubleshooting

The SSID and password are hard-coded in `06_WIFI_AP.ino`; this example does not provide a web page.
