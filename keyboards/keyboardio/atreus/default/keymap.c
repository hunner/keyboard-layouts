#include "hunner.h"

#define _SPC_RS LT(_RAISE, KC_SPC)
#define BSPC_LW LT(_LOWER, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT_wrapper(
      _________________DVORAK_L1_________________,                   _________________DVORAK_R1_________________,
      _________________DVORAK_L2_________________,                   _________________DVORAK_R2_________________,
      _________________DVORAK_L3_________________, _______, _______, _________________DVORAK_R3_________________,
      _______, _______, _______, _______, BSPC_LW, _______, _______, _SPC_RS, _______, _______, _______, _______
  ),

  [_RAISE] = LAYOUT_wrapper(
      _________________RAISE_L1__________________,                   _________________RAISE_R1__________________,
      _________________RAISE_L2__________________,                   _________________RAISE_R2__________________,
      _________________RAISE_L3__________________, _______, _______, _________________RAISE_R3__________________,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT_wrapper(
      _________________LOWER_L1__________________,                   _________________LOWER_R1__________________,
      _________________LOWER_L2__________________,                   _________________LOWER_R2__________________,
      _________________LOWER_L3__________________, _______, _______, _________________LOWER_R3__________________,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_ADJUST] = LAYOUT_wrapper(
      ___________________BLANK___________________,                   ___________________BLANK___________________,
      ___________________BLANK___________________,                   ___________________BLANK___________________,
      ___________________BLANK___________________, _______, _______, ___________________BLANK___________________,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_QWERTY] = LAYOUT_wrapper(
      _________________QWERTY_L1_________________,                   _________________QWERTY_R1_________________,
      _________________QWERTY_L2_________________,                   _________________QWERTY_R2_________________,
      _________________QWERTY_L3_________________, _______, _______, _________________QWERTY_R3_________________,
      _______, _______, _______, _______, BSPC_LW, _______, _______, _SPC_RS, _______, _______, _______, _______
  )
};