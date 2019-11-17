#include <Wire.h> 
#include <LiquidCrystal_I2C.h>  // I2C lib.
LiquidCrystal_I2C lcd(0x27,16,2); 
void setup()
{
 lcd.begin();                      // LCD start
 
 lcd.backlight();                 // open background led
 lcd.print("Hello");
 lcd.setCursor(0,1);
 lcd.print("World!");
}
void loop()
{
}
