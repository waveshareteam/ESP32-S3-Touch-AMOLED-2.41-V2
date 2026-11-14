# Firmware

[English](README.md) | [简体中文](README_ZH.md)

Ready-to-flash firmware tested on the ESP32-S3-Touch-AMOLED-2.41-V2 board. Each file is a merged image flashed at `0x0`; the date (or upstream version) in the file name is its version. Older versions are kept; the newest is listed first.

| File | Purpose |
| --- | --- |
| `ESP32-S3-Touch-AMOLED-2.41-V2_FactoryOnly_20260601.bin` | Factory firmware, restores the out-of-box demo |

Flash with esptool:

```bash
python -m pip install esptool
esptool.py --chip esp32s3 --port <PORT> erase_flash
esptool.py --chip esp32s3 --port <PORT> write_flash 0x0 ESP32-S3-Touch-AMOLED-2.41-V2_FactoryOnly_20260601.bin
```

The factory firmware source is in [`examples/factory`](../examples/factory/).
