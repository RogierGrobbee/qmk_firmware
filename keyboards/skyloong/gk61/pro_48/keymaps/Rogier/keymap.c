// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

// compile command:
// qmk compile -kb skyloong/gk61/pro_48 -km Rogier

#include QMK_KEYBOARD_H


enum custom_keycodes {
    HUE_RED = SAFE_RANGE,
    KC_MY_FORWARD
};

// LED indexes
/*
 *     ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 *     │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │10 │11 │12 │13 │
 *     ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 *     │14 │15 │16 │17 │18 │19 │20 │21 │22 │23 │24 │25 │26 │27 │
 *     ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 *     │28 │29 │30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │   │40 │
 *     ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 *     │41 │42 │43 │44 │45 │46 │47 │48 │49 │50 │51 │   │52 │   │
 *     ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 *     │53 │54 │55 │   │56 │57 │   │   │58 │59 │60 │61 │   │62 │
 *     └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│Alt│   │Spc│Mut│   │   |MO1|Alt│App│Ctl│   │Mo2|
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_all(
         KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,       KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,
         KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,        KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,
        KC_LCTL,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,     KC_SCLN,     KC_QUOT,              KC_ENT,
        KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,    KC_COMM,   KC_DOT,     KC_SLSH,               KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,             KC_SPC,   KC_SPC,     KC_MUTE,               MO(1),  KC_RALT,      LGUI(KC_LEFT),   LGUI(KC_RIGHT),     MO(2)
    ),

   /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ ` │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│DEL│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │←  │↓  │↑  │→  │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
[1] = LAYOUT_all(
    _______,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,
    _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  KC_HOME,  KC_END,   _______,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  KC_GRV,             _______,
    _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  KC_BTN4,  KC_BTN5,  _______,            _______,
    _______,  _______,  _______,            _______,  _______,     _______,            _______,  _______,  _______,  _______,            _______
),

[2] = LAYOUT_all(
    _______, HUE_RED, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI, _______,
    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______, _______, _______, _______, QK_BOOT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
    _______, _______, _______,          _______, _______, _______,          _______, _______, _______, _______,            _______
),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) }
};
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HUE_RED:
            if (record->event.pressed) {
                // Set matrix hue to red
                rgb_matrix_sethsv(0, 255, 255); // Hue 0 is red
            }
            return false;
    }
    return true;
}

uint8_t get_current_hue(void) {
    HSV hsv = rgb_matrix_get_hsv();
    return hsv.h;
}

void set_hue(uint8_t hue) {
    rgb_matrix_sethsv(hue, 255, 255);
}
   
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(2)) {
        uint8_t current_hue = get_current_hue();
        if (clockwise) {
            current_hue = (current_hue + 1) % 256; // Increment hue, wrap around at 256
        } else {
            current_hue = (current_hue - 1 + 256) % 256; // Decrement hue, wrap around at 0
        }
        set_hue(current_hue);
    } else {
        if (clockwise) {
            tap_code16(C(A(KC_LEFT)));
        } else {
            tap_code16(C(A(KC_RIGHT)));
        }
    }
    return false;
}

// Function to scale RGB values based on brightness
void set_rgb_brightness(uint8_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t brightness) {
    uint8_t scaled_r = (r * brightness) / 255;
    uint8_t scaled_g = (g * brightness) / 255;
    uint8_t scaled_b = (b * brightness) / 255;
    rgb_matrix_set_color(index, scaled_r, scaled_g, scaled_b);
}



// Function gets called every tick of the lighting engine 
// Do all lighting changes here because if you do it in process_record_user, it will be overwritten immediately by the global lighting effect (if a global lighting effect is active).
void matrix_scan_user(void) {

        // Check if layer 1 is active
    if (layer_state_is(1)) {
        // Set arrow keys to red
        rgb_matrix_set_color(34, 0, 255, 110 ); // Left arrow key
        rgb_matrix_set_color(35, 0, 255, 110 ); // Down arrow key
        rgb_matrix_set_color(36, 0, 255, 110 ); // Up arrow key
        rgb_matrix_set_color(37, 0, 255, 110 ); // Right arrow key

        // Color Home and End keys
        rgb_matrix_set_color(31, 255, 0, 0 ); 
        rgb_matrix_set_color(32, 255, 0, 0  ); 

        rgb_matrix_set_color(39, 255, 0, 255 ); // Grv key

        rgb_matrix_set_color(13, 255, 77, 0 ); // Del key

        rgb_matrix_set_color(49, 255, 255, 0 ); // Desktop Left key
        rgb_matrix_set_color(50, 255, 255, 0 ); // Desktop Right key

        // color all the f keys gold
        for (int i = 1; i < 13; i++) {
            rgb_matrix_set_color(i, 0, 128, 255 );
        }
    }

     if (layer_state_is(2)) {
        rgb_matrix_set_color(11, 140, 140, 140 ); // minus key
        rgb_matrix_set_color(12, 255, 255, 255 ); // plus key
     }
}


