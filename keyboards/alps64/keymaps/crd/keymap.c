#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  LAYOUT_all(
    KC_GRV,        KC_1,    KC_2,    KC_3,   KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,  _______, KC_BSPC,
    KC_TAB,        KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,   KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT,       KC_NUBS, KC_Z,    KC_X,   KC_C,     KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, _______, KC_RSFT,
    MO(1),         KC_LALT, KC_LGUI,                   KC_SPC,                                       _______, KC_RGUI, KC_RALT, MO(2)
  ),
  /* 1: fn1 */
  LAYOUT_all(
    _______,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  _______, _______,
    _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_HOME, KC_PGUP, _______,
    _______,       _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_END,  KC_PGDOWN, _______,
    _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
    _______,       _______, _______,                   _______,                                      _______, _______, _______, _______
  ),
};

const uint16_t PROGMEM fn_actions[] = {};
