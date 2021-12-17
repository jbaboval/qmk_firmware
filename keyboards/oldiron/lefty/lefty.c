#include <lefty.h>

__attribute__((weak))
void keyboard_post_init_user(void) {
    rgblight_setrgb_at(RGB_RED,    6);
    rgblight_setrgb_at(RGB_RED,    5);
    rgblight_setrgb_at(RGB_ORANGE, 4);
    rgblight_setrgb_at(RGB_YELLOW, 3);
    rgblight_setrgb_at(RGB_GREEN,  2);
    rgblight_setrgb_at(RGB_BLUE,   1);
    rgblight_setrgb_at(RGB_PURPLE, 0);


    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
//    rgblight_set_speed_noeeprom(200);
}

#if 0
void matrix_init_kb(void)
{

}
__attribute__((weak))
void matrix_scan_kb(void)
{
    rgblight_setrgb_at(RGB_RED,    5);
    rgblight_setrgb_at(RGB_ORANGE, 4);
    rgblight_setrgb_at(RGB_YELLOW, 3);
    rgblight_setrgb_at(RGB_GREEN,  2);
    rgblight_setrgb_at(RGB_BLUE,   1);
    rgblight_setrgb_at(RGB_PURPLE, 0);
}
bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{

}

void led_set_kb(uint8_t usb_led)
{

}
#endif
