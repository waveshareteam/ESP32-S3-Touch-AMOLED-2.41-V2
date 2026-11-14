# 05_WIFI_STA

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Connect to a 2.4 GHz Wi-Fi network in station mode.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A 2.4 GHz Wi-Fi access point is required.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

A successful connection prints the assigned IP address to the serial monitor.

## Troubleshooting

Set the SSID and password in `components/esp_wifi_bsp/esp_wifi_bsp.c` before building.
