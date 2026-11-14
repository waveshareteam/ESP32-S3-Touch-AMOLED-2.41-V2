# 05_WIFI_STA

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Connect to a 2.4 GHz Wi-Fi network in station mode.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A 2.4 GHz Wi-Fi access point is required.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `05_WIFI_STA.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

A successful connection prints the assigned IP address to the serial monitor.

## Troubleshooting

Set the SSID and password in `espwifi.cpp` before building.
