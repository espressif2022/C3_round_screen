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
LV_IMG_DECLARE(part_1);
LV_IMG_DECLARE(part_2);

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