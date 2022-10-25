#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print("PAGIKU CERAHKU");
  delay(1000);
  lcd.clear();

  lcd.print("text by Rinta");
  lcd.setCursor(0,1);
  lcd.print("Arduino");
  delay(1000);
  lcd.clear();
}
