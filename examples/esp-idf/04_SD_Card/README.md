# 04_SD_Card

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Mount a TF card through SPI and print its information and capacity.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. Insert a FAT-formatted TF card before starting.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The serial monitor prints card information and capacity after a successful mount.

## Troubleshooting

The default SPI path does not format a card when mounting fails; the alternate SDMMC path enables formatting on mount failure.
