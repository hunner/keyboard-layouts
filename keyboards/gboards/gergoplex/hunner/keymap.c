#include QMK_KEYBOARD_H
#include "hunner.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HELM] = LAYOUT_split_3x5_3_wrapper(
    _______________HELM_LEFT_1_________________, _______________HELM_RIGHT_1________________,
    _______________HELM_LEFT_2_________________, _______________HELM_RIGHT_2________________,
 DF(_TAIPO), ______HELM_LEFT_3________, _______, _______, ______HELM_RIGHT_3_______, _______,
                      _______, L_THUMB, _______, _______, R_THUMB, _______
  ),

  [_PORT] = LAYOUT_split_3x5_3_wrapper(
    _______________PORT_LEFT_1_________________, _______________PORT_RIGHT_1________________,
    _______________PORT_LEFT_2_________________, _______________PORT_RIGHT_2________________,
    _______, ______PORT_LEFT_3________, _______, _______, ______PORT_RIGHT_3_______, _______,
                      _______, L_THUMB, _______, _______, R_THUMB, _______
  ),

  [_STARBOARD] = LAYOUT_split_3x5_3_wrapper(
    _____________STARBOARD_LEFT_1______________, _____________STARBOARD_RIGHT_1_____________,
    _____________STARBOARD_LEFT_2______________, _____________STARBOARD_RIGHT_2_____________,
    _______, ____STARBOARD_LEFT_3_____, _______, _______, ____STARBOARD_RIGHT_3____, _______,
                      _______, L_THUMB, _______, _______, R_THUMB, _______
  ),

  [_AFT] = LAYOUT_split_3x5_3_wrapper(
    ________________AFT_LEFT_1_________________, ________________AFT_RIGHT_1________________,
    ________________AFT_LEFT_2_________________, ________________AFT_RIGHT_2________________,
    _______, _______AFT_LEFT_3________, _______, _______, _______AFT_RIGHT_3_______, _______,
                      _______, L_THUMB, _______, _______, R_THUMB, _______
  ),
};
