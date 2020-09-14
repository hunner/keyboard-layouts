#include "kyleterry.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_4x12_wrapper(
    _________________QWERTY_L1_6________________________, _________________QWERTY_R1_6________________________,
    _________________QWERTY_L2_6________________________, _________________QWERTY_R2_6________________________,
    _________________QWERTY_L3_6________________________, _________________QWERTY_R3_6________________________,
    _______, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_LOWER] = LAYOUT_ortho_4x12_wrapper(
    _________________LOWER_L1_6_________________________, _________________LOWER_R1_6_________________________,
    _________________LOWER_L2_6_________________________, _________________LOWER_R2_6_________________________,
    _________________LOWER_L3_6_________________________, _________________LOWER_R3_6_________________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________
  ),

  [_RAISE] = LAYOUT_ortho_4x12_wrapper(
    _________________RAISE_L1_6_________________________, _________________RAISE_R1_6_________________________,
    _________________RAISE_L2_6_________________________, _________________RAISE_R2_6_________________________,
    _________________RAISE_L3_6_________________________, _________________RAISE_R3_6_________________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________
  ),

  [_ADJUST] = LAYOUT_ortho_4x12_wrapper(
    _________________FUNC_LEFT_6________________________, _________________FUNC_RIGHT_6_______________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________
  ),

  [_NUM] = LAYOUT_ortho_4x12_wrapper(
    ___________________BLANK_6__________________________, _______, _________________NUM_R1____________________,
    ___________________BLANK_6__________________________, _______, _________________NUM_R2____________________,
    _______, RGB_MOD, RGB_TOG, _______, _______, _______, _______, _________________NUM_R3____________________,
    ___________________BLANK_6__________________________, ___________________BLANK_6__________________________
  )
};
