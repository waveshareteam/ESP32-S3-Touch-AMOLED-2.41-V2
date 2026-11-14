# 07_EX_GPIO

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Test native GPIO and TCA9554 expanded GPIO with external loopback connections.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable. With power disconnected, connect GPIO7 to GPIO8 and EXIO5 to EXIO6 on J8 using two jumper wires.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The serial monitor repeatedly prints GPIO test passed or GPIO test failed.

## Troubleshooting

Both loopback pairs are required for the test to pass; see the V2 schematic for J8 pin positions.
