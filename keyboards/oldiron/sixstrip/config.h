/*
 * Copyright (C) John Baboval <baboval-keyboard@oldironlabs.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 ONLY.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1337
#define DEVICE_VER      0x0001
#define MANUFACTURER    OldIronLabs
#define PRODUCT         SixStrip

#define MATRIX_ROWS 1
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS {D7}
#define MATRIX_COL_PINS {D2, D3, D1, D0, D4, C6}

#define RGB_DI_PIN B0
#define RGBLED_NUM 6
#define RGBLIGHT_ANIMATIONS

#define DIODE_DIRECTION COL2ROW
