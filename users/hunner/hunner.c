#include "hunner.h"
#include "g/keymap_combo.h"
// #include "taipo/taipo.c"

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _PORT, _STARBOARD, _AFT);
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_S):
            return TAPPING_TERM + 30;
        case RGUI_T(KC_H):
            return TAPPING_TERM - 30;
        default:
            return TAPPING_TERM;
    }
}

void matrix_init_user() {
    steno_set_mode(STENO_MODE_GEMINI);
}

/*
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
*/
