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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(
    F10, F11,   F1, F2,     F3,     F4,     F5,     F6,      F7,  F8, F9,  BSPC,   VOLD, MUTE,   VOLU,
    F12, F13,   ESC, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0,MINS, EQL, BSLS, GRV,   MPRV, MPLY,   MNXT,
    F14, F15,   TAB, Q,  W,  E,  R,  T,  Y,  U,  I,  O,  P,   LBRC,RBRC,    DEL,   HOME, UP,     PGUP,
    F16, F17,   LCTL, A,  S,  D,  F,  G,  H,  J,  K,  L,  SCLN,QUOT,        ENT,   LEFT, INSERT, RIGHT, 
    F18, F19,   LSFT,  Z,  X,  C,  V,  B,  N,  M,  COMM,DOT,SLSH,     RSFT,RCTL,   END,  DOWN,   PGDOWN,
                LGUI, LALT,                 SPC,                      RALT,RGUI
    ),
};
