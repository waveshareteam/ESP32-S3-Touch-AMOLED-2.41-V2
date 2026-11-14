# 04_SD_Card

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Mount a TF card through SPI and print its information and capacity.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. Insert a FAT-formatted TF card before starting.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `04_SD_Card.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

The serial monitor prints card information and capacity after a successful mount.

## Troubleshooting

The default SPI path does not format a card when mounting fails; the alternate SDMMC path enables formatting on mount failure.
