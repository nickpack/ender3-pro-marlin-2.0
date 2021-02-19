/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  64

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00011111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B11111111,B11111111,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000111,B11100000,B00000111,B11100000,B00000000,B00000000,
  B00000000,B00000000,B00001110,B00000111,B11100000,B01110000,B00000000,B00000000,
  B00000000,B00000000,B00111000,B11111111,B11111111,B00011100,B00000000,B00000000,
  B00000000,B00000000,B01110011,B11110000,B00001111,B11001110,B00000000,B00000000,
  B00000000,B00000000,B01101111,B00000000,B00000000,B11110110,B00000000,B00000000,
  B00000000,B00000000,B11011100,B00000000,B00000000,B00111011,B00000000,B00000000,
  B00000000,B00000001,B10110000,B00000000,B00000000,B00111101,B10000000,B00000000,
  B00000000,B00000001,B11100000,B00000000,B00000000,B00110111,B10000000,B00000000,
  B00000000,B00000011,B11000000,B01100000,B00000110,B00100111,B11000000,B00000000,
  B00000000,B00000011,B10000000,B01100000,B00000110,B00000111,B11000000,B00000000,
  B00000000,B00000011,B10000000,B01100000,B00000110,B00000101,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01100000,B00000110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01100000,B00000110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01111000,B00011110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01111000,B00011110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01111000,B00011110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B00111000,B00011100,B00000000,B11000000,B00000000,
  B00000000,B00000011,B11111100,B00111111,B11111100,B00111111,B11000000,B00000000,
  B00000000,B00000011,B11111111,B10011111,B11111001,B11111111,B11000000,B00000000,
  B00000000,B00000011,B00000011,B11100000,B00000111,B11000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B01111111,B11111110,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B00001111,B11110000,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,
  B00000000,B00000111,B01111110,B00000000,B00000000,B01111110,B11100000,B00000000,
  B00000000,B00000111,B11111111,B11100000,B00000111,B11111111,B11100000,B00000000,
  B00000000,B00000111,B11001100,B11110011,B11001111,B00110011,B11100000,B00000000,
  B00000000,B00000111,B10001100,B01111011,B11011110,B00110001,B11100000,B00000000,
  B00000000,B00000111,B10001100,B01011011,B11011010,B00110001,B11100000,B00000000,
  B00000000,B00000110,B11001111,B11011011,B11011011,B11100011,B01100000,B00000000,
  B00000000,B00000110,B11110111,B11110011,B11001111,B11101111,B01100000,B00000000,
  B00000000,B00000110,B01111111,B11100111,B11100111,B11111110,B01100000,B00000000,
  B00000000,B00000110,B00001111,B10001111,B11110001,B11110000,B01100000,B00000000,
  B00000000,B00000010,B00000110,B00000100,B00100000,B01100000,B01000000,B00000000,
  B00000000,B00000011,B00001110,B00001100,B00110000,B01110000,B11000000,B00000000,
  B00000000,B00000011,B00000000,B00001101,B10110000,B00000000,B11000000,B00000000,
  B00000000,B00000001,B10000000,B00011001,B10011000,B00000001,B10000000,B00000000,
  B00000000,B00000001,B10000001,B11011001,B10011011,B10000001,B10000000,B00000000,
  B00000000,B00000000,B11111111,B01110001,B10001110,B11111111,B00000000,B00000000,
  B00000000,B00000000,B11111110,B01111001,B10011110,B01111111,B00000000,B00000000,
  B00000000,B00000000,B10111001,B01101111,B11110110,B10011101,B00000000,B00000000,
  B00000000,B00000000,B11011011,B01000111,B11100010,B11011011,B00000000,B00000000,
  B00000000,B00000000,B11011110,B11000000,B00000011,B01111011,B00000000,B00000000,
  B00000000,B00000000,B11011100,B11000000,B00000011,B00111011,B00000000,B00000000,
  B00000000,B00000000,B11011000,B01110000,B00001110,B00011011,B00000000,B00000000,
  B00000000,B00000000,B11011111,B11111111,B11111111,B11111011,B00000000,B00000000,
  B00000000,B00000000,B11001111,B11111111,B11111111,B11110011,B00000000,B00000000,
  B00000000,B00000000,B01101101,B11111101,B10111111,B10110110,B00000000,B00000000,
  B00000000,B00000000,B01100101,B11111111,B11111111,B10100110,B00000000,B00000000,
  B00000000,B00000000,B00110110,B11111111,B11111111,B01101100,B00000000,B00000000,
  B00000000,B00000000,B00110110,B01111101,B10111110,B01101100,B00000000,B00000000,
  B00000000,B00000000,B00011110,B00111111,B11111100,B01111000,B00000000,B00000000,
  B00000000,B00000000,B00011110,B00001111,B11110000,B01111000,B00000000,B00000000,
  B00000000,B00000000,B00001100,B00000000,B00000000,B00110000,B00000000,B00000000,
  B00000000,B00000000,B00000110,B00001100,B00110000,B01100000,B00000000,B00000000,
  B00000000,B00000000,B00000110,B00001100,B00110000,B01100000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B00001100,B00100000,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00000001,B10000111,B11100001,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B11000011,B11000011,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01110000,B00011110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00111111,B11111100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11100000,B00000000,B00000000,B00000000
};
