#include <string.h>
//#include "sh1106.h"
#include "lcd.h"
#include "wchar.h"
#include "font.h"
#include "math.h"

uint8_t OLED13_buff[OLED13_BUFFLENGTH];

#define mathC_powUi32 powf


//==============================================================================
// ��������� ���������� ������ �����
//==============================================================================
void OLED13_buffer_clear(void)
{
  memset(OLED13_buff, 0, sizeof(OLED13_buff));
}

//==============================================================================
// ��������� ������������� �������
//==============================================================================
void OLED13_init(void)
{
	//SH1106_Init(OLED13_WIDTH, OLED13_HEIGHT);
	OLED13_buffer_clear();
	//SH1106_UpdateScreen(OLED13_buff);
	//SH1106_SetContrast(OLED13_BRIGHT);
}

//==============================================================================
// ��������� ������������� ��������� 1 ������� �������
// ��������� ������������ ������� � ������ ��������� ������� �� 180 ����
//==============================================================================
void OLED13_DrawPixel(uint8_t X, uint8_t Y, uint8_t State)
{
	uint16_t ByteIdx;
	uint8_t BitIdx;
/*
  	X = OLED13_WIDTH - X - 1;
	Y = OLED13_HEIGHT - Y - 1;
	
  // ���������, ��������� �� ����� � ���� ��������� �������
  if ((X >= OLED13_WIDTH) || (Y >= OLED13_HEIGHT))
    return;
  
  ByteIdx = X >> 3;
  BitIdx = Y - (ByteIdx << 3); // ������ ������������ ������ ���� (0<=Y<=7)
  ByteIdx *= OLED13_WIDTH;  
  ByteIdx += Y;
  
  if (State)
    OLED13_buff[ByteIdx] |= (1 << BitIdx);
  else
    OLED13_buff[ByteIdx] &= ~(1 << BitIdx);
   */
   	//X = OLED13_WIDTH - X - 1;
   //	Y = OLED13_HEIGHT - Y - 1;
 ByteIdx = X/8 + Y*16;
 BitIdx = X%8;
 if (State)
    OLED13_buff[ByteIdx] |= (1 << BitIdx);
  else
    OLED13_buff[ByteIdx] &= ~(1 << BitIdx);

}

tChar OLED13_FindChar(char in_char, const tFont *font_L)
{
	uint8_t t;
	tChar tmp;
	for(t=0;t<=font_L->length-1;t++)
	{
        if( (char)font_L->chars[t].code==in_char){tmp=font_L->chars[t];}
	}
	return tmp;
}


void OLED13_DrawRect(uint8_t fromX, uint8_t fromY, uint8_t toX, uint8_t toY)
{
	uint8_t i_L;
	
	

	for(i_L = fromX;i_L <= toX;i_L++)
	{
		OLED13_DrawPixel(i_L, fromY, 1);
		OLED13_DrawPixel(i_L, toY, 1);
	}
	for(i_L = fromY;i_L <= toY;i_L++)
	{
		OLED13_DrawPixel(fromX, i_L, 1);
		OLED13_DrawPixel(toX, i_L, 1);
	}
}

void OLED13_DrawRectFill(uint8_t fromX, uint8_t fromY, uint8_t toX, uint8_t toY)
{
	uint8_t i_L;
	uint8_t j_L;	
	
	for(i_L = fromX;i_L <= toX;i_L++)
	{
		for(j_L = fromY;j_L <= toY;j_L++)
		{
			OLED13_DrawPixel(i_L, j_L, 1);
			OLED13_DrawPixel(i_L, j_L, 1);
		}
	}
}





uint8_t findBit(const uint8_t *buff, uint16_t bitNum_L)
{
	uint8_t bitState_L;
	
	bitState_L = (buff[bitNum_L/8]>>(7-(bitNum_L - (bitNum_L/8)*8)))&0x01;

	return bitState_L;
}

void OLED13_DrawChar(uint16_t x, uint16_t y, char in_char_t, const tFont *font_L, uint8_t inverse)
{
	uint16_t x_c;
	uint16_t y_c;
	uint16_t byte_num = 0;
	uint16_t width = 0;
	uint16_t height = 0;
	tChar tmp;
    uint8_t bitState;

	tmp = OLED13_FindChar(in_char_t, font_L);
	width = tmp.image->width;
	height = tmp.image->height;
	
	for(y_c=0;y_c<(height);y_c++)
	{
		if(width%8){byte_num = (width/8+1)*(y_c);}
		else{byte_num = (width/8)*(y_c);}
		
		for(x_c=0; x_c<width; x_c++)
		{
            bitState = findBit(tmp.image->data + byte_num, x_c);
            if(inverse)
            {
                 if(bitState) bitState =0x00;
                 else   bitState = 0x01;
            }
			OLED13_DrawPixel(x+x_c, y+y_c, bitState);
		}
	}
}


void OLED13_DrawString(uint16_t x_L, uint16_t y_L, uint16_t num_char_L, uint16_t gap_L, char *str_buf_L, const tFont *font_L, uint8_t inverse)
{
	uint16_t i_L;
	uint16_t fontWidth_L;
	uint32_t fontWidthSumm_L = 0;
	tChar tmp_L;
	

	for(i_L = 0; i_L < num_char_L; i_L++)
	{
		tmp_L = OLED13_FindChar(str_buf_L[i_L], font_L);
		fontWidth_L = tmp_L.image->width;
		OLED13_DrawChar(x_L + gap_L + fontWidthSumm_L, y_L, str_buf_L[i_L], font_L,inverse);
		fontWidthSumm_L = fontWidthSumm_L + fontWidth_L + gap_L;
	}
}

uint16_t OLED13_DrawUInt(uint16_t x_L, uint16_t y_L, uint16_t gap_L, uint32_t num_L, uint8_t size_L, const tFont *font_L)
{
	uint32_t numCurr_L;
	uint16_t fontWidth_L = 0;
	uint16_t x_shift_L = 0;
	uint8_t i_L;
	tChar tmp_L;
	
	for(i_L=0;i_L<size_L;i_L++)
	{
		numCurr_L = (num_L/(uint32_t)mathC_powUi32(10, size_L - i_L - 1))%10;
		tmp_L = OLED13_FindChar(numCurr_L+0x30, font_L);
		fontWidth_L = tmp_L.image->width;
		OLED13_DrawChar(x_L + x_shift_L, y_L, numCurr_L+0x30, font_L,0);
		x_shift_L = x_shift_L + gap_L + fontWidth_L;
	}
	return x_shift_L - gap_L;
}

float my_pow(float value, uint8_t step)
{
uint8_t i;
float result;
result = 1;

    for (i = 0; i < step; i++) {
     result*= value;
    }
    return result;
}

void OLED13_DrawUFloat(uint16_t x_L, uint16_t y_L, uint16_t gap_L, uint8_t setNum, float num_L, uint8_t sizeInt_L, uint8_t sizeFrac_L, const tFont *font_L)
{
 char float_to_str[17];
 uint32_t pow_i,digit;
 uint16_t sepWidth_L;
 float val;

 if(num_L<0) {
 float_to_str[0] = '-';
 val = num_L *-1.0;
 }
 else  {
 float_to_str[0] = '+';
 val=num_L;
 }
 float_to_str[sizeInt_L+1]='.';


 for (pow_i = 0; pow_i < sizeInt_L; pow_i++) {

  digit = ((uint32_t)(val/my_pow(10,pow_i)))%10;
  float_to_str[sizeInt_L-pow_i] = digit + 0x30;
 }

 for (pow_i = 1; pow_i <= sizeFrac_L; pow_i++) {

  digit = ((uint32_t)(val*my_pow(10,pow_i)))%10;
  float_to_str[sizeInt_L+pow_i+1] = digit + 0x30;
 }


 sepWidth_L = 0;
 for (pow_i = 0; pow_i < sizeInt_L+sizeFrac_L+2; pow_i++) {
 if(setNum==pow_i) OLED13_DrawChar(x_L+sepWidth_L, y_L, float_to_str[pow_i], font_L,1);
  else OLED13_DrawChar(x_L+sepWidth_L, y_L, float_to_str[pow_i], font_L,0);
  sepWidth_L += OLED13_FindChar(float_to_str[pow_i], font_L).image->width+gap_L;
 }


}



 /*
void OLED13_DrawUFloat(uint16_t x_L, uint16_t y_L, uint16_t gap_L, float num_L, uint8_t sizeInt_L, uint8_t sizeFrac_L, const tFont *font_L)
{
	uint16_t sepWidth_L;
	uint16_t x_shift_intPart_L;
	uint8_t sepChar_L;
	
	sepChar_L = '.';

	sepWidth_L = OLED13_FindChar(sepChar_L, font_L).image->width;

	x_shift_intPart_L = OLED13_DrawUInt(x_L, y_L, gap_L, (uint32_t)num_L, sizeInt_L, font_L);
	
	if(sizeFrac_L>0)
	{
		OLED13_DrawChar(x_shift_intPart_L + gap_L, y_L, sepChar_L, font_L,0);
		OLED13_DrawUInt(x_shift_intPart_L + sepWidth_L + gap_L*2, y_L, gap_L,
			(uint32_t)((float)((float)num_L - ((uint32_t)num_L))*mathC_powUi32(10, sizeFrac_L)), sizeFrac_L, font_L);
	}
}   */

void OLED13_drawImage(uint16_t x_L, uint16_t y_L, const tImage *image_L)
{
	uint16_t x_c;
	uint16_t y_c;
	uint16_t byte_num = 0;
	uint16_t width = 0;
	uint16_t height = 0;

	
	width = image_L->width;
	height = image_L->height;
	
	for(y_c=0;y_c<(height);y_c++)
	{
		if(width%8){byte_num = (width/8+1)*(y_c);}
		else{byte_num = (width/8)*(y_c);}
		
		for(x_c=0; x_c<width; x_c++)
		{
			OLED13_DrawPixel(x_L+x_c, y_L+y_c, findBit(image_L->data + byte_num, x_c));
		}
	}


}

void OLED13_update(void)
{
	//SH1106_UpdateScreen(OLED13_buff);
}

