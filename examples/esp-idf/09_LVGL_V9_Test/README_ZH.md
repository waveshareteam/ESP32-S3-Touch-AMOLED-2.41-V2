# 09_LVGL_V9_Test

[English](README.md) | [简体中文](README_ZH.md)

## 功能

在 AMOLED 屏上运行 LVGL 9 widgets 演示，并启用电容触摸。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

屏幕显示 LVGL widgets 演示，并响应触摸操作。

## 常见问题

首次编译时，组件管理器会下载清单中声明的显示、触摸、LVGL 和适配器依赖。
