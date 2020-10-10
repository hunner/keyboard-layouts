/* Copyright 2019 Kyle Terry
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "hunner.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_wrapper(
    _________________QWERTY_L1_6________________________, KC_LCTL,   T_C,     _________________QWERTY_R1_6________________________,
    _________________QWERTY_L2_6________________________, KC_LALT,   _______, _________________QWERTY_R2_6________________________,
    _________________QWERTY_L3_6________________________, NUM,       OS_LGUI, _________________QWERTY_R3_6________________________,
    KC_LCTL,                            OS_LGUI, KC_SPC, LOWER,      RAISE,   KC_SPC,  KC_ENT,                             KC_RALT
  ),

  [_LOWER] = LAYOUT_wrapper(
    _________________LOWER_L1_6_________________________, KC_LPRN,   T_PN,    _________________LOWER_R1_6_________________________,
    _________________LOWER_L2_6_________________________, KC_LBRC,   T_SB,    _________________LOWER_R2_6_________________________,
    _________________LOWER_L3_6_________________________, KC_LCBR,   T_CB,    _________________LOWER_R3_6_________________________,
    _______,                            _______, _______, _______,   _______, _______, _______,                            _______
  ),

  [_RAISE] = LAYOUT_wrapper(
    _________________RAISE_L1_6_________________________, T_MD,      KC_VOLU, _________________RAISE_R1_6_________________________,
    _________________RAISE_L2_6_________________________, KC_MNXT,   KC_VOLD, _________________RAISE_R2_6_________________________,
    _________________RAISE_L3_6_________________________, _______,   _______, _________________RAISE_R3_6_________________________,
    _______,                            _______, _______, _______,   _______, _______, _______,                            _______
  ),

  [_ADJUST] = LAYOUT_wrapper(
    _________________FUNC_LEFT_6________________________, SQWER,     _______, _________________FUNC_RIGHT_6_______________________,
    ___________________BLANK_6__________________________, _______,   _______, ___________________BLANK_6__________________________,
    ___________________BLANK_6__________________________, _______,   _______, ___________________BLANK_6__________________________,
    _______,                            _______, _______, _______,   _______, _______, _______,                            _______
  ),

  [_NUM] = LAYOUT_wrapper(
    ___________________BLANK_6__________________________, _______,   _______, _______, _________________NUM_R1____________________,
    ___________________BLANK_6__________________________, _______,   _______, _______, _________________NUM_R2____________________,
    _______, RGB_MOD, RGB_TOG, _______, _______, _______, _______,   _______, _______, _________________NUM_R3____________________,
    _______,                            _______, _______, _______,   _______, _______, _______,                               KC_0
  )
};
