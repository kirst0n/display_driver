#ifndef __GRAPHTYPES_H
#define __GRAPHTYPES_H

 #include "stdint.h"
    /*
 typedef struct tImage{
     const uint8_t *data;
			uint16_t width;
			uint16_t height;
			uint16_t bit;
     } tImage;

 typedef struct tChar{
     long int code;
     const tImage *image;
     } tChar;
 
 typedef struct tFont{
     int length;
     const tChar *chars;
     } tFont;
         */

 typedef struct {
     const uint8_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
 typedef struct {
     long int code;
     const tImage *image;
     } tChar;
 typedef struct {
     int length;
     const tChar *chars;
     } tFont;
		 

		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
#endif /*__GRAPHTYPES_H */		 
		 
