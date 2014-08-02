void LCD_Init();
void LCD_SendData(uint8_t data);
void LCD_Mode(uint8_t data_mode);
void LCD_SendCommand(uint8_t command);
void LCD_SendData(uint8_t data);
void LCD_Reset();
void LCD_String(char * str, uint8_t x, uint8_t y);
uint8_t LCD_char(uint8_t ch, uint8_t x, uint8_t y);

