#ifndef __PLUG_MT_H
#define __PLUG_MT_H
#include "stdint.h"

#define LCD_WIDTH	128
#define LCD_HEIGHT	64

#define LCD_BRIGHT 30

#define LCD_FONT_WIDTH 1



#define LCD_BUFFLENGTH (LCD_WIDTH*LCD_HEIGHT)/8

typedef struct buff
{
uint8_t LCD_buffer[8][128];
uint8_t ass;
}buff;

extern buff MT12864_LCD1;


#ifdef	__cplusplus
extern "C" {
#endif
MT12864_LCD1_buffer_clear();
MT12864_LCD1_init();

#ifdef	__cplusplus
}




#endif

#endif