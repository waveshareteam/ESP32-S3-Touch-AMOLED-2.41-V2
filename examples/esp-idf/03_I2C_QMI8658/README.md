# 03_I2C_QMI8658

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Read acceleration and angular velocity from the onboard QMI8658 IMU over I2C.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable.

## How to Run

Use the [configured ESP-IDF version](../../../README.md) and run from this example directory:

```bash
idf.py set-target esp32s3 build flash monitor
```

## Expected Result

The serial monitor prints three-axis acceleration and gyroscope readings as the board moves.

## Troubleshooting

None yet.
