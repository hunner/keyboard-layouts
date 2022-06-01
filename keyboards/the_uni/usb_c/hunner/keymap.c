#include QMK_KEYBOARD_H
#include "hunner.h"
// Need to comment out taipo.c include in hunner.c because combos are hard
// the issue is that I still don't have combos on the helm layer

#define L_STENO DF(_STENO)
#define L_HELM  DF(_HELM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HELM] = LAYOUT_wrapper(
    _______________HELM_LEFT_1_________________, _______________HELM_RIGHT_1________________, KC_Q   ,
    _______________HELM_LEFT_2_________________, _______________HELM_RIGHT_2________________, KC_V   ,
                      KC_J   , KC_K   , L_THUMB, R_THUMB, KC_M   , KC_W
  ),

  [_PORT] = LAYOUT_wrapper(
    _______________PORT_LEFT_1_________________, _______________PORT_RIGHT_1________________, KC_GRV ,
    _______________PORT_LEFT_2_________________, _______________PORT_RIGHT_2________________, L_STENO,
                      KC_LBRC, KC_RBRC, L_THUMB, R_THUMB, L_STENO, _______
  ),

  [_STARBOARD] = LAYOUT_wrapper(
    _____________STARBOARD_LEFT_1______________, _____________STARBOARD_RIGHT_1_____________, _______,
    _____________STARBOARD_LEFT_2______________, _____________STARBOARD_RIGHT_2_____________, _______,
                      _______, _______, L_THUMB, R_THUMB, _______, _______
  ),

  [_AFT] = LAYOUT_wrapper(
    ________________AFT_LEFT_1_________________, ________________AFT_RIGHT_1________________, KC_BTN2,
    ________________AFT_LEFT_2_________________, ________________AFT_RIGHT_2________________, MS_W_RI,
                      KC_BTN1, KC_BTN3, L_THUMB, R_THUMB, MS_W_DN, MS_W_UP
  ),

  [_STENO] = LAYOUT_wrapper(
    STN_S1 , STN_TL , STN_PL , STN_HL , STN_ST1, STN_ST3, STN_FR , STN_PR , STN_LR , STN_TR , STN_DR ,
    STN_S2 , STN_KL , STN_WL , STN_RL , STN_ST2, STN_ST4, STN_RR , STN_BR , STN_GR , STN_SR , STN_ZR ,
                      STN_N1 , STN_A  , STN_O  , STN_E  , STN_U  , STN_N2
  ),
};

void keyboard_post_init_user(void) {
  set_single_persistent_default_layer(_STENO);
}
