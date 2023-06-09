#ifndef __lcd12864_H_
#define __lcd12864_H_


#include "sys.h"
static u8 LCD_addr[4][8]={
	{0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87},  
	{0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97},		
	{0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F},		
	{0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F}		
	};

#define WRITE_CMD	0xF8//???
#define WRITE_DAT	0xFA//???

#define SID PFout(15)
#define SCLK PFout(14)
#define CS PGout(1)  

void LCD_Clear(void);
void LCD_Display_Picture(uint8_t *img);
void LCD_Display_Words(uint8_t x,uint8_t y,uint8_t*str);
void LCD_Init(void);
void Lcd_WriteData(u8 Dat );
void Lcd_WriteCmd(u8 Cmd );
void SendByte(u8 byte);
void LCD_GPIO_Init();

#endif	
