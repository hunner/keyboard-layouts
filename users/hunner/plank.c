// Tap dance functions
static uint16_t tap_timer;
static uint8_t tap_count;

static uint16_t tap_timer;
static uint8_t tap_count;

void space_star_plank_finished(tap_dance_state_t *state, void *user_data) {
  tap_timer = timer_read();
  tap_count = state->count;

  if (state->pressed) {
    if (state->count == 1) {
      layer_on(_STARBOARD);
    } else if (state->count > 1) {
      layer_on(_PLANK);
    }
  } else {
    if (state->count == 1) {
      register_code(KC_SPACE);
      unregister_code(KC_SPACE);
    }
  }
}

void space_star_plank_reset(tap_dance_state_t *state, void *user_data) {
  if (tap_count == 1 && timer_elapsed(tap_timer) > TAPPING_TERM) {
    layer_off(_STARBOARD);
  } else if (tap_count > 1) {
    layer_off(_PLANK);
  }
  tap_count = 0;
}

// Tap dance actions
tap_dance_action_t tap_dance_actions[] = {
  [TD_SPACE_STAR_PLANK] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, space_star_plank_finished, space_star_plank_reset)
};
