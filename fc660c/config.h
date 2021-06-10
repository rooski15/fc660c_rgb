/*
Copyright 2017 Balz Guenat

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4853 /* HS */
#define PRODUCT_ID      0x660C
#define DEVICE_VER      0x0100
#define MANUFACTURER    Hasu
#define PRODUCT         FC660C

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

//#define DIODE_DIRECTION

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define LED_CAPS_LOCK_PIN B6
#define LED_PIN_ON_STATE 0

/* number of backlight levels */
// #define BACKLIGHT_LEVELS  1

/* mapping backlight LEDs to correct Pin */
// #define BACKLIGHT_PIN B7

/*RGB*/
/*Repurpose Insert LED */
#define RGB_DI_PIN B5
 #ifdef RGB_DI_PIN
   #define RGBLED_NUM 16
   #define RGBLIGHT_DEFAULT_HUE 127
   #define RGBLIGHT_HUE_STEP 8
   #define RGBLIGHT_SAT_STEP 8
   #define RGBLIGHT_VAL_STEP 8
   #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
   #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
 /*== all animations enable ==*/
   //#define RGBLIGHT_ANIMATIONS
 /*== or choose animations ==*/
   #define RGBLIGHT_EFFECT_PLAIN
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   //#define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   //#define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   //#define RGBLIGHT_EFFECT_RGB_TEST
   //#define RGBLIGHT_EFFECT_ALTERNATING
 /*== customize breathing effect ==*/
   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
   //#define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
   /*==== use exp() and sin() ====*/
   //#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
   //#define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
 #endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE  0
#define TAPPING_TERM      175

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define USE_I2C

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

// higher value means deeper actuation point, less sensitive
// be careful and only make small adjustments (steps of 1 or 2).
// too high and keys will fail to actuate. too low and keys will actuate spontaneously.
// test all keys before further adjustment.
// this should probably stay in the range +/-5.
// #define ACTUATION_DEPTH_ADJUSTMENT 0

#endif
