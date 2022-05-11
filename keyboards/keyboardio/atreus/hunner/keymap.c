#include QMK_KEYBOARD_H
#include "hunner.h"

#define L_TAIPO DF(_TAIPO)
#define L_STENO DF(_STENO)
#define L_HELM  DF(_HELM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HELM] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
    _______________HELM_LEFT_1_________________,                   _______________HELM_RIGHT_1________________,
    _______________HELM_LEFT_2_________________, L_TAIPO, L_STENO, _______________HELM_RIGHT_2________________,
    _______, ______HELM_LEFT_3________, L_THUMB, _______, _______, R_THUMB, ______HELM_RIGHT_3_______, _______
  ),

  [_PORT] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
    _______________PORT_LEFT_1_________________,                   _______________PORT_RIGHT_1________________,
    _______________PORT_LEFT_2_________________, _______, _______, _______________PORT_RIGHT_2________________,
    _______, ______PORT_LEFT_3________, L_THUMB, _______, _______, R_THUMB, ______PORT_RIGHT_3_______, _______
  ),

  [_STARBOARD] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
    _____________STARBOARD_LEFT_1______________,                   _____________STARBOARD_RIGHT_1_____________,
    _____________STARBOARD_LEFT_2______________, _______, _______, _____________STARBOARD_RIGHT_2_____________,
    _______, ____STARBOARD_LEFT_3_____, L_THUMB, _______, _______, R_THUMB, ____STARBOARD_RIGHT_3____, _______
  ),

  [_AFT] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
    ________________AFT_LEFT_1_________________,                   ________________AFT_RIGHT_1________________,
    ________________AFT_LEFT_2_________________, _______, _______, ________________AFT_RIGHT_2________________,
    _______, _______AFT_LEFT_3________, L_THUMB, _______, _______, R_THUMB, _______AFT_RIGHT_3_______, _______
  ),

  [_TAIPO] = LAYOUT_wrapper(
    L_HELM , _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
    TAIPO_1_LEFT______________________, _______,                   _______, TAIPO_1_RIGHT_____________________,
    TAIPO_2_LEFT______________________, _______, _______, _______, _______, TAIPO_2_RIGHT_____________________,
    _______, _______, _______, KC_SPC , KC_BSPC, _______, _______, KC_BSPC, KC_SPC , _______, _______, _______
  ),

  [_STENO] = LAYOUT_wrapper(
    L_HELM , STN_N1 , STN_N2 , STN_N3 , STN_N4 ,                   STN_N5 , STN_N6 , STN_N7 , STN_N8 , STN_N9 ,
    STN_FN , STN_S1 , STN_TL , STN_PL , STN_HL ,                   STN_FR , STN_PR , STN_LR , STN_TR , STN_DR ,
    STN_PWR, STN_S2 , STN_KL , STN_WL , STN_RL , STN_ST2, STN_ST4, STN_RR , STN_BR , STN_GR , STN_SR , STN_ZR ,
    _______, _______, _______, _______, STN_A  , STN_O  , STN_E  , STN_U  , _______, _______, _______, _______
  )
};
