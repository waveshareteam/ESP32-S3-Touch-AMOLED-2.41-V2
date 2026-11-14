# 01_ADC_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Read the battery-voltage ADC and print the raw reading and converted voltage.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A 3.7 V battery is optional for battery-voltage measurements.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

Raw ADC readings and voltage are printed once per second.

## Troubleshooting

This example reports the divider voltage; it does not estimate battery percentage.
