# 03_I2C_QMI8658

[English](README.md) | [简体中文](README_ZH.md)

## What It Does

Read acceleration and angular velocity from the onboard QMI8658 IMU over I2C.

## Hardware Required

ESP32-S3-Touch-AMOLED-2.41-V2 development board and a USB data cable.

## How to Run

Install Arduino-ESP32 in the [configured version](../../../../README.md) and set the sketchbook location to `examples/arduino/` (or copy its `libraries/` into your sketchbook). Select `ESP32S3 Dev Module`, set the non-default options below, and upload `03_I2C_QMI8658.ino`; use 115200 baud in the serial monitor.

| Tools menu | Value |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## Expected Result

The serial monitor prints three-axis acceleration and gyroscope readings as the board moves.

## Troubleshooting

None yet.
