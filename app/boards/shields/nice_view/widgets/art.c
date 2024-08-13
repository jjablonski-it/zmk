/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
        0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x15, 0x00, 0x05, 0x40, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x00, 0x50, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbf, 0xf0, 
        0xff, 0xff, 0xff, 0xe0, 0x00, 0x05, 0x55, 0x10, 0x00, 0x54, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x5f, 0xf0, 
        0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0x00, 0x05, 0x55, 0x55, 0x00, 0x15, 0x55, 0x50, 0x7f, 0xff, 0xfc, 0x1f, 0xf5, 0xff, 0xf0, 
        0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x02, 0xaa, 0xff, 0xf0, 
        0xff, 0xff, 0xfc, 0x00, 0x00, 0x05, 0x55, 0x55, 0x55, 0x54, 0x00, 0x00, 0x03, 0x00, 0x01, 0x55, 0xff, 0xf0, 
        0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xf0, 
        0xff, 0xff, 0xf0, 0x00, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x5d, 0x7f, 0xf0, 
        0xff, 0xff, 0xe0, 0x00, 0x00, 0x2a, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa7, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x05, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 0x57, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x00, 0xa8, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xfb, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x15, 0x55, 0x55, 0x54, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x55, 0x55, 0xdd, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x0a, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xfe, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x05, 0x55, 0x15, 0x75, 0x7f, 0xf0, 
        0xff, 0xff, 0x80, 0x02, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xee, 0xaf, 0xf0, 
        0xff, 0xff, 0x81, 0x55, 0x55, 0x00, 0x04, 0x00, 0x01, 0x01, 0x44, 0x00, 0x55, 0x54, 0x15, 0x7d, 0x7f, 0xf0, 
        0xff, 0xff, 0x80, 0x2a, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xba, 0xaf, 0xf0, 
        0xff, 0xff, 0x81, 0x55, 0x50, 0x01, 0x55, 0x10, 0x15, 0x55, 0x55, 0x40, 0x55, 0x55, 0x55, 0x55, 0x57, 0xf0, 
        0xff, 0xff, 0x80, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0xaa, 0xaf, 0xf0, 
        0xff, 0xff, 0x95, 0x55, 0x00, 0x15, 0x55, 0x15, 0x04, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xf0, 
        0xff, 0xff, 0x82, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xaa, 0xaf, 0xf0, 
        0xff, 0xff, 0x95, 0x50, 0x15, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x55, 0x55, 0x05, 0x7d, 0xf5, 0x57, 0xf0, 
        0xff, 0xff, 0x8a, 0xa0, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x80, 0x02, 0xff, 0xfa, 0xaf, 0xf0, 
        0xfb, 0xff, 0x95, 0x00, 0x55, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xf5, 0x57, 0xf0, 
        0xc9, 0x3f, 0xaa, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x02, 0xbf, 0xea, 0xaf, 0xf0, 
        0xe0, 0x7f, 0x50, 0x01, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xf5, 0x57, 0xf0, 
        0xe0, 0x3f, 0x80, 0x00, 0x0a, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x08, 0xa8, 0x00, 0xa2, 0xbe, 0xbe, 0xaf, 0xf0, 
        0xc1, 0x47, 0x00, 0x11, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7d, 0x5f, 0x57, 0xf0, 
        0x80, 0x80, 0x00, 0x08, 0x2a, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xa8, 0x00, 0x20, 0xba, 0xbb, 0xab, 0xf0, 
        0xd5, 0x40, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 0x51, 0x55, 0x5e, 0xd7, 0xf0, 
        0x8a, 0xa0, 0x00, 0x0a, 0xaa, 0x20, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x20, 0xaa, 0xaf, 0xaf, 0xf0, 
        0xd5, 0x51, 0x55, 0x55, 0x55, 0x55, 0x41, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 0x51, 0x55, 0x5d, 0x5f, 0xf0, 
        0xaa, 0xa0, 0x22, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x80, 0x00, 0x0a, 0xaa, 0xaf, 0xbf, 0xf0, 
        0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x41, 0x55, 0x54, 0x05, 0x55, 0x55, 0x54, 0x05, 0x55, 0x57, 0x5f, 0xf0, 
        0xea, 0xa0, 0x2a, 0xa0, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0xaa, 0xff, 0xf0, 
        0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x45, 0x55, 0x55, 0x50, 0x05, 0x55, 0x55, 0xff, 0xf0, 
        0xfa, 0xa8, 0x0a, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xab, 0xff, 0xf0, 
        0xfd, 0x55, 0x7f, 0xff, 0x85, 0x55, 0x55, 0x45, 0x55, 0x45, 0x40, 0x15, 0x54, 0x05, 0x55, 0x57, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfc, 0x0a, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0f, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0x80, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x05, 0x55, 0x5f, 0xff, 0xf0, 
        0xff, 0xff, 0xf8, 0x02, 0xaa, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 0x57, 0xff, 0xff, 0xf0, 
        0xff, 0xfc, 0x00, 0xaa, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x2f, 0xff, 0xff, 0xf0, 
        0xff, 0xf8, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xf0, 0xaa, 0xaa, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xe1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xc2, 0x80, 0xaa, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x2a, 0x88, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xc5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xca, 0x80, 0xaa, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x2a, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xd5, 0x55, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xea, 0xa0, 0xff, 0xc3, 0xfa, 0xaa, 0x00, 0x00, 0x80, 0x2a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xd7, 0xfd, 0x75, 0x57, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xea, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xf5, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x15, 0x00, 0x05, 0x40, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x15, 0x00, 0x00, 0x50, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbf, 0xf0, 
        0xff, 0xff, 0xff, 0xe0, 0x00, 0x05, 0x55, 0x10, 0x00, 0x54, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x5f, 0xf0, 
        0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0x00, 0x05, 0x55, 0x55, 0x00, 0x15, 0x55, 0x50, 0x7f, 0xff, 0xfc, 0x1f, 0xf5, 0xff, 0xf0, 
        0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x02, 0xaa, 0xff, 0xf0, 
        0xff, 0xff, 0xfc, 0x00, 0x00, 0x05, 0x55, 0x55, 0x55, 0x54, 0x00, 0x00, 0x03, 0x00, 0x01, 0x55, 0xff, 0xf0, 
        0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xf0, 
        0xff, 0xff, 0xf0, 0x00, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x5d, 0x7f, 0xf0, 
        0xff, 0xff, 0xe0, 0x00, 0x00, 0x2a, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa7, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x05, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 0x57, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x00, 0xa8, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xfb, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x15, 0x55, 0x55, 0x54, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x55, 0x55, 0xdd, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x0a, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xfe, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x55, 0x55, 0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x05, 0x55, 0x15, 0x75, 0x7f, 0xf0, 
        0xff, 0xff, 0x80, 0x02, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xee, 0xaf, 0xf0, 
        0xff, 0xff, 0x81, 0x55, 0x55, 0x00, 0x04, 0x00, 0x01, 0x01, 0x44, 0x00, 0x55, 0x54, 0x15, 0x7d, 0x7f, 0xf0, 
        0xff, 0xff, 0x80, 0x2a, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xba, 0xaf, 0xf0, 
        0xff, 0xff, 0x81, 0x55, 0x50, 0x01, 0x55, 0x10, 0x15, 0x55, 0x55, 0x40, 0x55, 0x55, 0x55, 0x55, 0x57, 0xf0, 
        0xff, 0xff, 0x80, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0xaa, 0xaf, 0xf0, 
        0xff, 0xff, 0x95, 0x55, 0x00, 0x15, 0x55, 0x15, 0x04, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0xf0, 
        0xff, 0xff, 0x82, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xaa, 0xaf, 0xf0, 
        0xff, 0xff, 0x95, 0x50, 0x15, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x55, 0x55, 0x05, 0x7d, 0xf5, 0x57, 0xf0, 
        0xff, 0xff, 0x8a, 0xa0, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x80, 0x02, 0xff, 0xfa, 0xaf, 0xf0, 
        0xfb, 0xff, 0x95, 0x00, 0x55, 0x55, 0x55, 0x55, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xf5, 0x57, 0xf0, 
        0xc9, 0x3f, 0xaa, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x02, 0xbf, 0xea, 0xaf, 0xf0, 
        0xe0, 0x7f, 0x50, 0x01, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xf5, 0x57, 0xf0, 
        0xe0, 0x3f, 0x80, 0x00, 0x0a, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x08, 0xa8, 0x00, 0xa2, 0xbe, 0xbe, 0xaf, 0xf0, 
        0xc1, 0x47, 0x00, 0x11, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7d, 0x5f, 0x57, 0xf0, 
        0x80, 0x80, 0x00, 0x08, 0x2a, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xa8, 0x00, 0x20, 0xba, 0xbb, 0xab, 0xf0, 
        0xd5, 0x40, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 0x51, 0x55, 0x5e, 0xd7, 0xf0, 
        0x8a, 0xa0, 0x00, 0x0a, 0xaa, 0x20, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x20, 0xaa, 0xaf, 0xaf, 0xf0, 
        0xd5, 0x51, 0x55, 0x55, 0x55, 0x55, 0x41, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 0x51, 0x55, 0x5d, 0x5f, 0xf0, 
        0xaa, 0xa0, 0x22, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x80, 0x00, 0x0a, 0xaa, 0xaf, 0xbf, 0xf0, 
        0xd5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x41, 0x55, 0x54, 0x05, 0x55, 0x55, 0x54, 0x05, 0x55, 0x57, 0x5f, 0xf0, 
        0xea, 0xa0, 0x2a, 0xa0, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0xaa, 0xff, 0xf0, 
        0xf5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x45, 0x55, 0x55, 0x50, 0x05, 0x55, 0x55, 0xff, 0xf0, 
        0xfa, 0xa8, 0x0a, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xab, 0xff, 0xf0, 
        0xfd, 0x55, 0x7f, 0xff, 0x85, 0x55, 0x55, 0x45, 0x55, 0x45, 0x40, 0x15, 0x54, 0x05, 0x55, 0x57, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xfc, 0x0a, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0f, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0x80, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x05, 0x55, 0x5f, 0xff, 0xf0, 
        0xff, 0xff, 0xf8, 0x02, 0xaa, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf0, 
        0xff, 0xff, 0xc0, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x15, 0x57, 0xff, 0xff, 0xf0, 
        0xff, 0xfc, 0x00, 0xaa, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x2f, 0xff, 0xff, 0xf0, 
        0xff, 0xf8, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xf0, 0xaa, 0xaa, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xe1, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xc2, 0x80, 0xaa, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x2a, 0x88, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xc5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xca, 0x80, 0xaa, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x2a, 0x8a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xd5, 0x55, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xea, 0xa0, 0xff, 0xc3, 0xfa, 0xaa, 0x00, 0x00, 0x80, 0x2a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xd5, 0x57, 0xff, 0xff, 0xff, 0xd7, 0xfd, 0x75, 0x57, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xea, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xf5, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};
