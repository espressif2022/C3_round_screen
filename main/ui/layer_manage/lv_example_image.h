/**
 * @file lv_example_image.h
 *
 */

#ifndef LV_EXAMPLE_IMAGE_H
#define LV_EXAMPLE_IMAGE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
LV_IMG_DECLARE(icon_clock);
LV_IMG_DECLARE(icon_fans);
LV_IMG_DECLARE(icon_light);
LV_IMG_DECLARE(icon_player);
LV_IMG_DECLARE(icon_weather);
LV_IMG_DECLARE(icon_washing);

LV_IMG_DECLARE(img_weather);
LV_IMG_DECLARE(img_bg);
LV_IMG_DECLARE(espressif_logo);

LV_IMG_DECLARE(light_close_bg)
LV_IMG_DECLARE(light_close_pwm)
LV_IMG_DECLARE(light_close_status)
LV_IMG_DECLARE(light_cool_100)
LV_IMG_DECLARE(light_cool_25)
LV_IMG_DECLARE(light_cool_50)
LV_IMG_DECLARE(light_cool_75)
LV_IMG_DECLARE(light_cool_bg)
LV_IMG_DECLARE(light_warm_100)
LV_IMG_DECLARE(light_warm_25)
LV_IMG_DECLARE(light_warm_50)
LV_IMG_DECLARE(light_warm_75)
LV_IMG_DECLARE(light_warm_bg)

LV_IMG_DECLARE(light_pwm_00)
LV_IMG_DECLARE(light_pwm_25)
LV_IMG_DECLARE(light_pwm_50)
LV_IMG_DECLARE(light_pwm_75)
LV_IMG_DECLARE(light_pwm_100)

LV_IMG_DECLARE(AC_BG)
LV_IMG_DECLARE(AC_temper)
LV_IMG_DECLARE(AC_unit)

LV_IMG_DECLARE(standby_eye_left)
LV_IMG_DECLARE(standby_eye_right)
LV_IMG_DECLARE(standby_eye_1)
LV_IMG_DECLARE(standby_eye_2)
LV_IMG_DECLARE(standby_eye_close)
LV_IMG_DECLARE(standby_face)
LV_IMG_DECLARE(standby_mouth_2)
LV_IMG_DECLARE(standby_eye_1_fade)
LV_IMG_DECLARE(standby_eye_3)
LV_IMG_DECLARE(standby_eye_open)
LV_IMG_DECLARE(standby_mouth_1)


/********************************
 * font
********************************/
LV_FONT_DECLARE(font_lanting16);
LV_FONT_DECLARE(font_KaiTi20);
LV_FONT_DECLARE(font_KaiTi60);
LV_FONT_DECLARE(font_KaiTi96);
LV_FONT_DECLARE(SourceHanSansCN_Normal20);
LV_FONT_DECLARE(SourceHanSansCN_Normal36);
LV_FONT_DECLARE(SourceHanSansCN_Normal120);

//LV_FONT_DECLARE(lv_font_montserrat_20);

#if (0 == LV_USE_FREETYPE)
typedef struct {
    lv_font_t * font;   /* point to lvgl font */
} lv_ft_info_t;
#endif

extern lv_ft_info_t font30;
extern lv_ft_info_t font20;
extern lv_ft_info_t font60;
extern lv_ft_info_t font36;
extern lv_ft_info_t font120;

extern lv_style_t style_radio;
extern lv_style_t style_radio_chk;

extern uint8_t submode_item_focus;
/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_EXAMPLE_IMAGE_H*/