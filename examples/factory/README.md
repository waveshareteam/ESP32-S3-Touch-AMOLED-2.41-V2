# Factory Demo

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Run the factory touch UI with battery voltage, RTC, IMU, SD capacity, Wi-Fi scanning and BLE scanning.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A TF card and a 3.7 V battery are optional for their corresponding checks.

## How to Run

Use the [configured ESP-IDF version](../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The display shows the factory interface with peripheral readings and scan pages.

## Troubleshooting

SD mounting enables formatting on mount failure, so back up the card first; the GPIO self-test requires GPIO7–GPIO8 and EXIO5–EXIO6 loopback connections.
