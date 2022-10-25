#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd  (rs, en, d4, d5, d6, d7);
void setup (){
  //put your code here, to run once;
  Serial.begin(9600);
  lcd.begin(16, 2);
}
  void loop (){
    //put your main code here, to run repeatedly;
    lcd.setCursor(7, 5);
    lcd.println("HALLO!")
    //delay(1000)
    //lcd,print(" ");
    //delay(1000);    
;}
