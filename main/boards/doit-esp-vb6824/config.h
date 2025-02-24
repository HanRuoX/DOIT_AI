#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define BOOT_BUTTON_GPIO        GPIO_NUM_9

// #define CODEC_TX_GPIO           GPIO_NUM_19
// #define CODEC_RX_GPIO           GPIO_NUM_18
#define CODEC_TX_GPIO           GPIO_NUM_10
#define CODEC_RX_GPIO           GPIO_NUM_18
// #define CODEC_TX_GPIO           GPIO_NUM_0
// #define CODEC_RX_GPIO           GPIO_NUM_1
// #define CODEC_TX_GPIO           GPIO_NUM_6
// #define CODEC_RX_GPIO           GPIO_NUM_7


// #define DISPLAY_BACKLIGHT_PIN GPIO_NUM_1
// #define DISPLAY_MOSI_PIN      GPIO_NUM_4
// #define DISPLAY_CLK_PIN       GPIO_NUM_3
// #define DISPLAY_DC_PIN        GPIO_NUM_2
// #define DISPLAY_RST_PIN       GPIO_NUM_10
// #define DISPLAY_CS_PIN        -1

// #define DISPLAY_WIDTH   240
// #define DISPLAY_HEIGHT  240
// #define DISPLAY_MIRROR_X false
// #define DISPLAY_MIRROR_Y false
// #define DISPLAY_SWAP_XY false
// #define DISPLAY_INVERT_COLOR    true
// #define DISPLAY_RGB_ORDER  LCD_RGB_ELEMENT_ORDER_RGB
// #define DISPLAY_OFFSET_X  0
// #define DISPLAY_OFFSET_Y  0
// #define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

// #define DISPLAY_BACKLIGHT_PIN GPIO_NUM_3
// #define DISPLAY_MOSI_PIN      GPIO_NUM_1
// #define DISPLAY_CLK_PIN       GPIO_NUM_0
// #define DISPLAY_DC_PIN        GPIO_NUM_10
// #define DISPLAY_RST_PIN       GPIO_NUM_2
// #define DISPLAY_CS_PIN        GPIO_NUM_4

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_5
#define DISPLAY_MOSI_PIN      GPIO_NUM_1
#define DISPLAY_CLK_PIN       GPIO_NUM_0
#define DISPLAY_DC_PIN        GPIO_NUM_3
#define DISPLAY_RST_PIN       GPIO_NUM_2
#define DISPLAY_CS_PIN        GPIO_NUM_4


#define DISPLAY_WIDTH   128
#define DISPLAY_HEIGHT  160
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false
#define DISPLAY_INVERT_COLOR    false
#define DISPLAY_RGB_ORDER  LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#endif // _BOARD_CONFIG_H_
