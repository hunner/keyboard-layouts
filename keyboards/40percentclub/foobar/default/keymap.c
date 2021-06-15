#include QMK_KEYBOARD_H
#include "hunner.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_3x10_wrapper(
    _______________BASE_LEFT_1_________________, _______________BASE_RIGHT_1________________,
    _______________BASE_LEFT_2_________________, _______________BASE_RIGHT_2________________,
    _______, ______BASE_LEFT_3________, L_THUMB, R_THUMB, ______BASE_RIGHT_3_______, _______
  ),

  [_LEFT] = LAYOUT_ortho_3x10_wrapper(
    _______________LEFT_LEFT_1_________________, _______________LEFT_RIGHT_1________________,
    _______________LEFT_LEFT_2_________________, _______________LEFT_RIGHT_2________________,
    _______, ______LEFT_LEFT_3________, _______, _______, ______LEFT_RIGHT_3_______, _______

  ),

  [_RIGHT] = LAYOUT_ortho_3x10_wrapper(
    _______________RIGHT_LEFT_1________________, _______________RIGHT_RIGHT_1_______________,
    _______, _______, _______, _______, _______, _______________RIGHT_RIGHT_2_______________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_ADJUST] = LAYOUT_ortho_3x10_wrapper(
    _______________ADJUST_LEFT_1_______________, _______________ADJUST_RIGHT_1______________,
    _______________ADJUST_LEFT_2_______________, _______________ADJUST_RIGHT_2______________,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
