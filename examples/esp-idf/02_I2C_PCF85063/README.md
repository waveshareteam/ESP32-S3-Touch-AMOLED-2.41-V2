# 02_I2C_PCF85063

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Set the onboard PCF85063 RTC to a fixed initial time and read it over I2C.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The serial monitor periodically prints the date and time.

## Troubleshooting

The example sets its fixed initial time on every boot; edit the CTime initializer when setting the clock.
