# spinetime-fw
Firmware for [SpineTime](https://github.com/Daringcuteseal/spinetime). This firmware runs on ATtiny1616 at 8 MHz clock speed. It can be flashed via the UPDI pin of the SpineTime controller unit with a USB-to-TTL adapter from a computer using SerialUPDI. To configure the resulting firmware, the `cfg.h` file can be edited accordingly.

## Credits
Libraries & apps used:
- VSCode + PlatformIO
- [DS3231-RTC library](https://github.com/hasenradball/DS3231-RTC/)
- [tinyNeoPixel library](https://github.com/SpenceKonde/megaTinyCore/tree/master/megaavr/libraries/tinyNeoPixel), since apparently AdaFruit's NeoPixel library doesn't work well with 8 MHz clock speed.