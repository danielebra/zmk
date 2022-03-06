/*
*
* Copyright (c) 2021 Darryl deHaan
* SPDX-License-Identifier: MIT
*
*/

#include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ZENLOGO
#define LV_ATTRIBUTE_IMG_ZENLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ZENLOGO uint8_t zenlogo_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xd7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1e, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3c, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3c, 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x78, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x78, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x70, 0xf1, 0xe0, 0x00, 0x00, 0x00, 0x60, 0x1e, 0x07, 0x80,
  0xf0, 0xf1, 0xe8, 0x81, 0xf1, 0xfa, 0xff, 0x3f, 0x0f, 0xc0,
  0xf0, 0xf7, 0xdd, 0xc3, 0xf9, 0xff, 0xff, 0x7f, 0x9f, 0xc0,
  0xf3, 0xff, 0x9b, 0xc3, 0xfb, 0xff, 0x9f, 0x73, 0x1c, 0xc0,
  0xf1, 0xff, 0x3f, 0xc7, 0xb9, 0x3d, 0x1e, 0x73, 0xb9, 0xc0,
  0xe3, 0xfe, 0x3f, 0xc7, 0x3a, 0x38, 0x3c, 0xe7, 0x39, 0xc0,
  0xf0, 0xf0, 0x3f, 0xc7, 0x30, 0x78, 0x38, 0xfe, 0x3f, 0x8c,
  0xe0, 0xf0, 0x3f, 0xce, 0xf0, 0xf0, 0x78, 0xfc, 0x7f, 0x0e,
  0xf0, 0xf0, 0x3d, 0xff, 0xe0, 0xf0, 0xf0, 0xf8, 0x7e, 0x3c,
  0xe0, 0xe0, 0x3c, 0xff, 0x87, 0xe1, 0xe1, 0xf1, 0xf8, 0x78,
  0xf0, 0xf0, 0x3c, 0xff, 0x1f, 0xc3, 0xe3, 0xff, 0xff, 0xf0,
  0xf0, 0xe0, 0x78, 0x27, 0xff, 0xef, 0xff, 0xff, 0xdf, 0xe0,
  0x70, 0xe0, 0x38, 0x07, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0xc0,
  0xf1, 0xe0, 0x38, 0x03, 0xf1, 0xfc, 0x7c, 0x04, 0x02, 0x00,
  0x79, 0xe0, 0x30, 0x00, 0xa0, 0x50, 0x00, 0x00, 0x00, 0x00,
  0x7b, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

};

const lv_img_dsc_t zenlogo = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.w = 80,
  .header.h = 29,
  .data_size = 299,
  .data = zenlogo_map,
};

