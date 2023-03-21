
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
/*  note:
  SCL pin -> A5
  SDA pin -> A4
*/
String message = "The whole universe is in hot dense state";
int chars = 0;
int end = chars + 16;
int mid = 0;
String cutMess = "";
String midMess = "";
String disp = "";
void setup()
{
  lcd.begin();
  lcd.backlight();

}
void loop()
{
  delay(1000);
  lcd.setCursor(0, 0);
  disp = mess();
  lcd.print(disp); 
  chars = chars + 1;
  chars = chars % message.length();
}

String mess()
{
  end = chars + 16;
  //Serial.println(end);
  if(end > message.length())
  {
    mid = end - message.length();
    Serial.println(mid);
    end = message.length();
    cutMess = message.substring(chars,end);
    midMess = message.substring(0,mid);
    cutMess = cutMess+midMess;
  }
  else
  {
    cutMess = message.substring(chars,end);
  }
  return cutMess;
}


