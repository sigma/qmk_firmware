/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "util.h"
#include "sun_usb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    JP_UNIX_KEYMAP(
        HELP,            NO,   F1, F2, F3, F4,      F5, F6, F7, F8,      F9, F10,F11,F12,   PSCR,SLCK,PAUS,  MUTE,VOLD,VOLU,PWR,
        STOP,   AGAIN,   ESC,1,  2,  3,  4,  5,  6,  7,  8,  9,  0,   MINS,EQL, BSLS,GRV,   INS, HOME,PGUP,  NLCK,PSLS,PAST,PMNS,
        MENU,   UNDO,    TAB, Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P,   LBRC,RBRC,    BSPC,  DEL, END, PGDN,  P7,  P8, P9,  PPLS,
        SELECT, COPY,    LCTL, A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN,QUOT,        ENT,                    P4,  P5, P6,
        EXECUTE,PASTE,   LSFT,  Z,  X,  C,  V,  B,  N,  M,  COMM,DOT,SLSH,           RSFT,       UP,         P1,  P2, P3,  PENT,
        FIND,   CUT,     CAPS, LALT, LGUI,HENK,  SPC,            MHEN,KANA,RGUI,APP, RALT,  LEFT,DOWN,RGHT,  P0,      PDOT
    ),
};
