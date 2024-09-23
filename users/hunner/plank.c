static uint16_t tap_timer;
static uint8_t tap_count;
static bool is_hold_action;

#define IS_LAYER_TOGGLE(kc) (kc >= QK_TO && kc <= QK_TO_MAX)
#define IS_LAYER_TAP(kc) ((kc >= QK_LAYER_TAP && kc <= QK_LAYER_TAP_MAX) || (kc >= QK_MOMENTARY && kc <= QK_MOMENTARY_MAX))
//#define GET_TAP_KC(kc) (kc & 0xFF)
#define IS_MOMENTARY(kc) (kc >= QK_MOMENTARY && kc <= QK_MOMENTARY_MAX)
#define GET_LAYER(kc) ((kc >> 8) & 0xF)

typedef struct {
  char* sequence;
  uint16_t action;
} tap_hold_sequence_t;

tap_hold_sequence_t sequences[] = {
  {"1T", KC_SPACE},
  {"1H", LT(_STARBOARD, KC_SPACE)},
  {"2T", KC_SPACE},
  {"2H", LT(_PLANK, KC_SPACE)},
  {"3T", KC_SPACE},
  {"3H", KC_SPACE},
};

uint16_t parse_sequence(uint8_t taps, bool is_hold) {
  char sequence[4];
  if (is_hold) {
    snprintf(sequence, sizeof(sequence), "%dH", taps);
  } else {
    snprintf(sequence, sizeof(sequence), "%dT", taps);
  }

  for (int i = 0; i < sizeof(sequences) / sizeof(sequences[0]); i++) {
    if (strcmp(sequences[i].sequence, sequence) == 0) {
      return sequences[i].action;
    }
  }
  return KC_NO;
}

void custom_tap_dance_finished(tap_dance_state_t *state, void *user_data) {
  tap_timer = timer_read();
  tap_count = state->count;
  is_hold_action = state->pressed;
  uint16_t action = parse_sequence(tap_count, is_hold_action);
  xprintf("finished tap_count: %d, is_hold_action: %d\n", tap_count, is_hold_action);

  if (action != KC_NO) {
    if (IS_LAYER_TOGGLE(action)) {
      xprintf("toggle layer\n");
      xprintf("action: %d\n", action);
      layer_on(GET_LAYER(action));
    } else if (IS_LAYER_TAP(action) || IS_MOMENTARY(action)) {
      xprintf("tap layer\n");
      xprintf("action: %d\n", GET_LAYER(action));
      layer_on(GET_LAYER(action));
    } else {
      xprintf("send action\n");
      xprintf("action: %d\n", action);
      register_code16(action);
    }
  }
}

void custom_tap_dance_reset(tap_dance_state_t *state, void *user_data) {
  uint16_t action = parse_sequence(tap_count, is_hold_action);
  xprintf("reset tap_count: %d, is_hold_action: %d\n", tap_count, is_hold_action);
  if (action != KC_NO) {
    if (IS_LAYER_TOGGLE(action)) {
      // Do nothing, layer stays on
    } else if (IS_LAYER_TAP(action) || IS_MOMENTARY(action)) {
      layer_off(GET_LAYER(action));
    } else {
      unregister_code16(action);
    }
  }
  tap_count = 0;
  is_hold_action = false;
}

tap_dance_action_t tap_dance_actions[] = {
  [TD_CUSTOM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, custom_tap_dance_finished, custom_tap_dance_reset)
};

