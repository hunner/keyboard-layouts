#include QMK_KEYBOARD_H
#include "hunner.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BOW] = LAYOUT_ortho_3x10_wrapper(
    ________________BOW_LEFT_1_________________, ________________BOW_RIGHT_1________________,
    ________________BOW_LEFT_2_________________, ________________BOW_RIGHT_2________________,
    _______, _______BOW_LEFT_3________, L_THUMB, R_THUMB, _______BOW_RIGHT_3_______, _______
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
  )
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
