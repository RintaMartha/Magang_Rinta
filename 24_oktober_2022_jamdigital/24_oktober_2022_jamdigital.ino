#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define PinBuzzer 12

int terang=0;

void setup() {
   lcd.begin(16,2);
   Serial.begin(9600);
   pinMode (PinBuzzer,OUTPUT);
   delay(4000);
   lcd.begin(16,2);
}

void loop() {
  if (digitalRead(12) == LOW){
  {
    digitalWrite(PinBuzzer, HIGH);
    delay(200);
    lcd.init();
    lcd.backlight();

    int i;
    lcd.clear();
    lcd.setCursor(0,15);
    lcd.print("good day");
    for (i=0;i<30;i++);
{
  lcd.scrollDisplayLeft();
  delay(1000);
  }
  }
  }
  else  {
    digitalWrite(12, HIGH);
  }
{ 
  digitalWrite(PinBuzzer, LOW);
  int i;
  lcd.clear();
  lcd.setCursor(15,0); //
  lcd.print("good mood");
  for(i=0;i<30;i++)//KOTAK
{
  lcd.scrollDisplayLeft();
  delay(1000);
  }

  lcd.clear();
  }
}
