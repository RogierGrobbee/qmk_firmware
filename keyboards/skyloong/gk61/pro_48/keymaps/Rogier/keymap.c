// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

// compile command:
// qmk compile -kb skyloong/gk61/pro_48 -km Rogier

#include QMK_KEYBOARD_H


enum custom_keycodes {
    HUE_1 = SAFE_RANGE,
    HUE_2,
    HUE_3,
    HUE_4,
    HUE_5,
    HUE_6,
    HUE_7,
    HUE_8,
    HUE_9,
    HUE_10,
};

// create a static list with all the number indexes of the alpha keys.
// So that means 15 is Q, 16 is W, 17 is E, etc.
static const uint8_t alpha_keys[] = {
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 
    29, 30, 31, 32, 33, 34, 35, 36, 37,
    42, 43, 44, 45, 46, 47, 48
};

// do the same for number keys
static const uint8_t number_keys[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};

// do the same for symbol keys
static const uint8_t symbol_keys[] = {
    11, 12, 25, 26, 27, 38, 39, 49, 50, 51
};

// do the same for modifier keys
static const uint8_t modifier_keys[] = {
    13, 14, 28, 41, 52, 53, 54, 55, 56, 57, 58, 60, 61, 62, 63, 64
};

// esc, enter and space keys
static const uint8_t other_keys[] = {
   0, 40, 56, 57, 58, 59
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
 *     │53 │54 │55 │   │56 │57 │   │58 │59 │60 │61 │62 │   │64 │
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
  * │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│DEL│
  * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
  * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
  * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
  * │   │   │   │HOM│END│   │←  │↓  │↑  │→  │   │ ` │   │   │
  * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
  * │   │   │   │   │   │   │   │   │M4 │M5 │   │   │   │   │
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
    _______, HUE_1,   HUE_2,   HUE_3,   HUE_4,   HUE_5,   HUE_6,   HUE_7,   HUE_8,    HUE_9,   HUE_10,  RGB_VAD, RGB_VAI, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, RGB_SPD, RGB_SPI, QK_BOOT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, RGB_SAD, RGB_SAI,            _______,
    _______, _______, _______, _______, _______, _______, _______, _______, RGB_RMOD, RGB_MOD, _______,            _______,
    _______, _______, _______,          _______, _______, _______,          _______,  _______, _______, _______,            _______
),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) }
};
#endif

// Global variable to keep track of the current LED position
static bool typing_cursor_effect_enabled = true;
static uint8_t typing_cursor_current_position = 0;
static uint32_t typing_cursor_last_keypress = 0;
static bool typing_cursor_timeout_elapsed = true;
#define LED_TIMEOUT 6000 // 6 seconds in milliseconds

static bool colored_modifiers = false;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    // Check hue changing keycodes
    if (record->event.pressed) {
        switch (keycode) {
            case HUE_1: 
                rgb_matrix_sethsv(0, 255, 255); // Hue 0 is red
                return false;
            case HUE_2: 
                rgb_matrix_sethsv(25, 255, 255); // Hue 25
                return false;
            case HUE_3: 
                rgb_matrix_sethsv(51, 255, 255); // Hue 51
                return false;
            case HUE_4: 
                rgb_matrix_sethsv(76, 255, 255); // Hue 76
                return false;
            case HUE_5: 
                rgb_matrix_sethsv(102, 255, 255); // Hue 102
                return false;
            case HUE_6: 
                rgb_matrix_sethsv(127, 255, 255); // Hue 127
                return false;
            case HUE_7: 
                rgb_matrix_sethsv(153, 255, 255); // Hue 153
                return false;
            case HUE_8: 
                rgb_matrix_sethsv(178, 255, 255); // Hue 178
                return false;
            case HUE_9: 
                rgb_matrix_sethsv(204, 255, 255); // Hue 204
                return false;
            case HUE_10: 
                rgb_matrix_sethsv(229, 255, 255); // Hue 229
                return false;
        }
    }

    
    if (record->event.pressed) {
        if (keycode == KC_C && layer_state_is(2)) {
            // Toggle typing cursor effect
            typing_cursor_effect_enabled = !typing_cursor_effect_enabled;
            return false;
        }
        if (keycode == KC_W && layer_state_is(2)) {
            // Toggle colored modifiers
            colored_modifiers = !colored_modifiers;
            return false;
        }

        // Check if the key is an alpha key, symbol, or space
        if (((keycode >= KC_A && keycode <= KC_Z) || 
            (keycode >= KC_1 && keycode <= KC_0) || 
            (keycode >= KC_EXLM && keycode <= KC_SLSH) || 
            keycode == KC_SPACE || 
            keycode == KC_BSPC)  &&
            !(get_mods() & (MOD_MASK_CTRL | MOD_MASK_SHIFT | MOD_MASK_ALT | MOD_MASK_GUI))) {
            
            if (keycode == KC_BSPC) {
                // Move the LED position backwards
                if (typing_cursor_current_position == 1) {
                    // do nothing
                } else {
                    typing_cursor_current_position--;
                }
            } else {
                // Increment the LED position
                typing_cursor_current_position++;
                if (typing_cursor_current_position > 12) {
                    typing_cursor_current_position = 1;
                }
                typing_cursor_last_keypress = timer_read();
                typing_cursor_timeout_elapsed = false;
            }
            
        }
    }
    return true;
}
   
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(2)) {
        HSV current_hsv = rgb_matrix_get_hsv();
        uint8_t current_hue = current_hsv.h;
        if (clockwise) {
            current_hue = (current_hue - 1 + 256) % 256; // Decrement hue, wrap around at 0
        } else {
            current_hue = (current_hue + 1) % 256; // Increment hue, wrap around at 256
        }
        rgb_matrix_sethsv(current_hue, current_hsv.s, current_hsv.v);
    } else if (layer_state_is(1)) {
        if (clockwise) {
            tap_code(KC_VOLU); // Increase volume
        } else {
            tap_code(KC_VOLD); // Decrease volume
        }
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


void handle_layer_2_lighing(void) {
    // Set hue buttons to their respective colors using HSV values
    RGB rgb1 = hsv_to_rgb((HSV){0, 255, 255});
    rgb_matrix_set_color(1, rgb1.r, rgb1.g, rgb1.b); // Red
    RGB rgb2 = hsv_to_rgb((HSV){25, 255, 255});
    rgb_matrix_set_color(2, rgb2.r, rgb2.g, rgb2.b); // Hue 25
    RGB rgb3 = hsv_to_rgb((HSV){51, 255, 255});
    rgb_matrix_set_color(3, rgb3.r, rgb3.g, rgb3.b); // Hue 51
    RGB rgb4 = hsv_to_rgb((HSV){76, 255, 255});
    rgb_matrix_set_color(4, rgb4.r, rgb4.g, rgb4.b); // Hue 76
    RGB rgb5 = hsv_to_rgb((HSV){102, 255, 255});
    rgb_matrix_set_color(5, rgb5.r, rgb5.g, rgb5.b); // Hue 102
    RGB rgb6 = hsv_to_rgb((HSV){127, 255, 255});
    rgb_matrix_set_color(6, rgb6.r, rgb6.g, rgb6.b); // Hue 127
    RGB rgb7 = hsv_to_rgb((HSV){153, 255, 255});
    rgb_matrix_set_color(7, rgb7.r, rgb7.g, rgb7.b); // Hue 153
    RGB rgb8 = hsv_to_rgb((HSV){178, 255, 255});
    rgb_matrix_set_color(8, rgb8.r, rgb8.g, rgb8.b); // Hue 178
    RGB rgb9 = hsv_to_rgb((HSV){204, 255, 255});
    rgb_matrix_set_color(9, rgb9.r, rgb9.g, rgb9.b); // Hue 204
    RGB rgb10 = hsv_to_rgb((HSV){229, 255, 255});
    rgb_matrix_set_color(10, rgb10.r, rgb10.g, rgb10.b); // Hue 229

    // Set colors for brightness keys
    rgb_matrix_set_color(11, 111, 111, 111 ); // minus key
    rgb_matrix_set_color(12, 255, 255, 255 ); // plus key

    // Set colors for speed keys. Blinking slow and fast.
    if (timer_read() % 1000 < 800) { // Slow key. on for 800ms, off for 200ms
        rgb_matrix_set_color(25, 0, 255, 255 );
    } else {
        rgb_matrix_set_color(25, 0, 0, 0 );
    }
    if (timer_read() % 400 < 200) { // Fast key. on for 200ms, off for 200ms
        rgb_matrix_set_color(26, 255, 0, 0 ); 
    } else {
        rgb_matrix_set_color(26, 0, 0, 0 );
    }

    //make the boot key blue
    rgb_matrix_set_color(27, 0, 0, 255 ); // Boot key

    // Set colors for saturation keys
    rgb_matrix_set_color(38, 176, 255, 176); // Low saturation key (whiteish green)
    rgb_matrix_set_color(39, 0, 255, 0);     // Full saturation key (green)

    // Set colors for mode change buttons
    rgb_matrix_set_color(49, 0, 0, 255);
    rgb_matrix_set_color(50, 0, 0, 255);


    // Typing cursor effect enabled indicator
    if (typing_cursor_effect_enabled) {
        rgb_matrix_set_color(44, 0, 255, 0 ); // Green
    } else {
        rgb_matrix_set_color(44, 255, 0, 0 ); // Red
    }

    // Colored modifiers enabled indicator
    if (colored_modifiers) {
        rgb_matrix_set_color(16, 0, 255, 0 ); // Green
    } else {
        rgb_matrix_set_color(16, 255, 0, 0 ); // Red
    }

}

void apply_modifier_colors(void) {
    if (colored_modifiers) {
        // Set the modifier keys to green
        for (int i = 0; i < sizeof(modifier_keys); i++) {
            rgb_matrix_set_color(modifier_keys[i], 0, 255, 108);
        }
        for (int i = 0; i < sizeof(other_keys); i++) {
            rgb_matrix_set_color(other_keys[i], 0, 255, 108);
        }

        rgb_matrix_set_color(61, 255, 42, 0);
        rgb_matrix_set_color(62, 255, 42, 0);
        
    } 
}

// Function gets called every tick of the lighting engine 
// Do all lighting changes here because if you do it in process_record_user, it will be overwritten immediately by the global lighting effect (if a global lighting effect is active).
void matrix_scan_user(void) {

    if (layer_state_is(0)) {
        apply_modifier_colors();
    }



    if (typing_cursor_effect_enabled && !typing_cursor_timeout_elapsed) {
        // Typing cursor lighting effect
        if (timer_elapsed(typing_cursor_last_keypress) < LED_TIMEOUT) {
            rgb_matrix_set_color(typing_cursor_current_position, 255, 255, 255);
        }
        else {
            typing_cursor_current_position = 0;
            typing_cursor_timeout_elapsed = true;
        }
    }

    // Check if layer 1 is active
    if (layer_state_is(1)) {
        // turn off all the keys
        for (int i = 0; i < 64; i++) {
            rgb_matrix_set_color(i, 0, 0, 0);
        }

        apply_modifier_colors();

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
        handle_layer_2_lighing();
     }
}





