#include "hunner.h"
#include "g/keymap_combo.h"
#include "taipo/taipo.c"

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _PORT, _STARBOARD, _AFT);
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
