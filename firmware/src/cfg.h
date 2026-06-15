/** Copyright 2026 DaringCuteSeal/Cikitta T.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions: The above copyright
 * notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
 * EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

// Set this to true in order to configure the RTC's time to the compilation time.
#define SET_TIME false

// Set this to true in order for the microcontroller to print out debug messages (via serial communication).
#define SET_DBG true

// The starting hour of the bookmark.
#define HOUR_OFFSET 3

// Color of LED, when summed up together (2 LEDs will be on at a time when minute is not near 00).
// Red channel rgb(255, 98, 0)
#define COLOR_R 255
// Green channel
#define COLOR_G 74
// Blue channel
#define COLOR_B 115

// Baud rate (for serial communication, used only for debugging if the debug flag is set).
#define SERIAL_BAUD_RATE 38400

// The pin for sending the LED array data.
#define LED_PIN PIN_PA5

// Count of LEDs.
#define LED_COUNT 24

// Pin used for sensing current battery voltage
#define PIN_BAT PIN_PB4

// Threshold for low battery (in 10 bits, so 0 to 1024)
// remember to sync with the resolution of the board's ADC,
// and Adjust to the voltage divider you have
#define LOW_BAT_THRESH 600

#define BAT_LED_PIN PIN_PC1