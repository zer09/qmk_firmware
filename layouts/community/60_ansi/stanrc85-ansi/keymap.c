/* Copyright 2018 Stanrc85
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define DEFAULT 0 	//Custom ANSI
#define LAYER1 1 	  //Default ANSI (enable with Fn2+D)
#define LAYER2 2 	  //Function keys, arrows, custom shortcuts, volume control
#define LAYER3 3 	  //Backlight controls and RESET

#define KC_CAD	LALT(LCTL(KC_DEL))
#define KC_LOCK	LGUI(KC_L)

//Tap Dance Declarations
enum {
	TD_WIN = 0,
	TD_ESC
};

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_WIN] = ACTION_TAP_DANCE_DOUBLE(KC_CAD, KC_LOCK),
	[TD_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_GRV)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(
		TD(TD_ESC),    KC_1,    KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,       KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		KC_TAB,        KC_Q,    KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,       KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		LT(2, KC_ESC), KC_A,    KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,       KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,       KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,     KC_SLSH, KC_RSFT,
		KC_LCTL,       KC_LGUI, KC_LALT,    LT(2, KC_SPC),          KC_RALT, TD(TD_WIN), MO(3),   KC_RCTL),

	[1] = LAYOUT_60_ansi(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC ,          KC_RALT, MO(2),  MO(3),   KC_RCTL),

	[2] = LAYOUT_60_ansi(
		KC_TILD, KC_F1,   KC_F2,        KC_F3,   KC_F4,        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
		_______, _______, LCA(KC_QUOT), KC_VOLU, LCA(KC_SCLN), _______, _______, KC_HOME, KC_UP,   KC_END,  _______, _______, _______, RESET,
		KC_CAPS, _______, KC_MUTE,      KC_VOLD, KC_MPLY,      _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
		_______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______,                             _______,                        _______, _______, _______, _______)

	[3] = LAYOUT_60_ansi(
		RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
		KC_CAPS, _______, _______, TG(1),   _______, _______, BL_STEP, BL_DEC,  BL_INC,  BL_TOGG, _______, _______, _______,
		_______, _______, _______, RGB_VAD, RGB_VAI, RGB_SAI, RGB_HUD, RGB_HUI, RGB_MOD, RGB_TOG, _______, _______,
		_______, _______, _______,                   _______,                   _______, _______, _______, _______)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
