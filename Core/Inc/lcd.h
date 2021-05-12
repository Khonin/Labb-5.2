/*
 * lcd.h
 *
 *  Created on: Apr 27, 2021
 *      Author: axeand
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_
#include "main.h"

typedef struct
{
	I2C_HandleTypeDef *hi2c;
	uint8_t DevAddress;
	uint8_t data;

} TextLCDType;

void TextLCD_Init(TextLCDType *lcd, I2C_HandleTypeDef *hi2c, uint8_t DevAddress);
void TextLCD_Home(TextLCDType *lcd);
void TextLCD_Clear(TextLCDType *lcd);
void TextLCD_Position(TextLCDType *lcd, int x, int y);
void TextLCD_Putchar(TextLCDType *lcd, uint8_t data);
void TextLCD_Puts(TextLCDType *lcd, char *string);
//void TextLCD_Printf(TextLCDType *lcd, char *message, …);

#endif /* INC_LCD_H_ */
