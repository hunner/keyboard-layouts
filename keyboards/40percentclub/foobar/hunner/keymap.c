#include QMK_KEYBOARD_H
#include "hunner.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_HELM] = LAYOUT_ortho_3x10_wrapper(
    _______________HELM_LEFT_1_________________, _______________HELM_RIGHT_1________________,
    _______________HELM_LEFT_2_________________, _______________HELM_RIGHT_2________________,
    TO(_A_BASE), ______HELM_LEFT_3________, L_THUMB, R_THUMB, ______HELM_RIGHT_3_______, _______
  ),

  [_PORT] = LAYOUT_ortho_3x10_wrapper(
    _______________PORT_LEFT_1_________________, _______________PORT_RIGHT_1________________,
    _______________PORT_LEFT_2_________________, _______________PORT_RIGHT_2________________,
    _______, ______PORT_LEFT_3________, _______, _______, ______PORT_RIGHT_3_______, _______

  ),

  [_STARBOARD] = LAYOUT_ortho_3x10_wrapper(
    _____________STARBOARD_LEFT_1______________, _____________STARBOARD_RIGHT_1_____________,
    _____________STARBOARD_LEFT_2______________, _____________STARBOARD_RIGHT_2_____________,
    _______, ____STARBOARD_LEFT_3_____, _______, _______, ____STARBOARD_RIGHT_3____, _______
  ),

  [_AFT] = LAYOUT_ortho_3x10_wrapper(
    ________________AFT_LEFT_1_________________, ________________AFT_RIGHT_1________________,
    ________________AFT_LEFT_2_________________, ________________AFT_RIGHT_2________________,
    _______, _______AFT_LEFT_3________, _______, _______, _______AFT_RIGHT_3______, _______
  ),

  [_A_BASE] = LAYOUT_ortho_3x10(
    A_BASE_S,A_BASE_T,A_BASE_R,A_BASE_A,_______, _______,A_BASE_A,A_BASE_R,A_BASE_T,A_BASE_S,
    A_BASE_O,A_BASE_I,A_BASE_Y,A_BASE_E,_______, _______,A_BASE_E,A_BASE_Y,A_BASE_I,A_BASE_O,
    TO(_HELM), _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_NUM] = LAYOUT_ortho_3x10(
    A_NUM_S, A_NUM_T, A_NUM_R, A_NUM_A, _______, _______, A_NUM_A, A_NUM_R, A_NUM_T, A_NUM_S,
    A_NUM_O, A_NUM_I, A_NUM_Y, A_NUM_E, _______, _______, A_NUM_E, A_NUM_Y, A_NUM_I, A_NUM_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_NAV] = LAYOUT_ortho_3x10(
    A_NAV_S, A_NAV_T, A_NAV_R, A_NAV_A, _______, _______, A_NAV_A, A_NAV_R, A_NAV_T, A_NAV_S,
    A_NAV_O, A_NAV_I, A_NAV_Y, A_NAV_E, _______, _______, A_NAV_E, A_NAV_Y, A_NAV_I, A_NAV_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_SYM] = LAYOUT_ortho_3x10(
    A_SYM_S, A_SYM_T, A_SYM_R, A_SYM_A, _______, _______, A_SYM_A, A_SYM_R, A_SYM_T, A_SYM_S,
    A_SYM_O, A_SYM_I, A_SYM_Y, A_SYM_E, _______, _______, A_SYM_E, A_SYM_Y, A_SYM_I, A_SYM_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_BRAC] = LAYOUT_ortho_3x10(
    A_BRAC_S,A_BRAC_T,A_BRAC_R,A_BRAC_A,_______, _______,A_BRAC_A,A_BRAC_R,A_BRAC_T,A_BRAC_S,
    A_BRAC_O,A_BRAC_I,A_BRAC_Y,A_BRAC_E,_______, _______,A_BRAC_E,A_BRAC_Y,A_BRAC_I,A_BRAC_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_MOU] = LAYOUT_ortho_3x10(
    A_MOU_S, A_MOU_T, A_MOU_R, A_MOU_A, _______, _______, A_MOU_A, A_MOU_R, A_MOU_T, A_MOU_S,
    A_MOU_O, A_MOU_I, A_MOU_Y, A_MOU_E, _______, _______, A_MOU_E, A_MOU_Y, A_MOU_I, A_MOU_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_A_CUSTOM] = LAYOUT_ortho_3x10(
    A_CUSTOM_S,A_CUSTOM_T,A_CUSTOM_R,A_CUSTOM_A,_______, _______,A_CUSTOM_A,A_CUSTOM_R,A_CUSTOM_T,A_CUSTOM_S,
    A_CUSTOM_O,A_CUSTOM_I,A_CUSTOM_Y,A_CUSTOM_E,_______, _______,A_CUSTOM_E,A_CUSTOM_Y,A_CUSTOM_I,A_CUSTOM_O,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

};

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.

  // Set our LED pins as output
  setPinOutput(D5);
  setPinOutput(B0);
}

void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinLow(D5);
  } else {
    writePinHigh(D5);
  }

  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinLow(B0);
  } else {
    writePinHigh(B0);
  }
}
