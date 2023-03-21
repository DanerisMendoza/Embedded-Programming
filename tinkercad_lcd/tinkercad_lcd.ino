#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd_1(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd_1.init();
  lcd_1.backlight();
}

void loop() {
  delay(1000);
  lcd_1.begin(16, 2);
  lcd_1.print("celcius");
}
