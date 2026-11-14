# 09_LVGL_V9_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Run the LVGL 9 widgets demo on the AMOLED display with capacitive touch.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The screen displays the LVGL widgets demo and responds to touch.

## Troubleshooting

The component manager downloads the declared display, touch, LVGL and adapter dependencies during the first build.
