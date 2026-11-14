# 08_Li-ion_Test

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Initialize the battery power-control output to keep the board powered from a lithium battery.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. A charged 3.7 V lithium battery with the matching connector and polarity is required.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

After startup, the board remains powered when USB is disconnected and a charged battery is connected.

## Troubleshooting

This example enables battery power; it does not display battery percentage or implement button-controlled shutdown.
