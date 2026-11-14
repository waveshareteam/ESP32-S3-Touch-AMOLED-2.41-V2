# 06_WIFI_AP

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Create a Wi-Fi access point on the board.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A phone or computer with Wi-Fi is required.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

A phone or computer can discover and join the configured Wi-Fi network.

## Troubleshooting

The SSID and password are hard-coded in `main/main.c`; this example does not provide a web page.
