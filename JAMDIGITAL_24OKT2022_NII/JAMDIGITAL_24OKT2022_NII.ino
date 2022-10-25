#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int PinBuzzer = 12;

int terang=0;

void setup() {
   lcd.begin(16,2); //untuk lcd nya 
   Serial.begin(9600);
  pinMode (PinBuzzer,OUTPUT); //untuk keluarannya
  delay(4000); //jeda
  lcd.begin(16,2);
}

void loop() {
   if (digitalRead(12 == HIGH)) //if= jika,  high itu 1 jdi akan di tampilkan 
  {
    digitalWrite(PinBuzzer, HIGH);
    delay(2000);
    lcd.init(); //untuk muncul kan kalimat di lcd
    lcd.backlight(); // untuk muncul kan kalimat di lcd

    int i;
    lcd.setCursor(1, 0); // kiri kolom, kanan baris
    lcd.print("good day"); // nama kalimat
    
  for (i=0;i<15; i++);
    digitalWrite(PinBuzzer, LOW); // buzzer tidak berbunyi
    delay(200);
{
  lcd.scrollDisplayLeft();
  delay(1000);
  }
  
  }
  else   {
    digitalWrite(12, LOW);
  }
{
    digitalWrite(PinBuzzer, LOW);
    delay(500);
  int i;
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("good mood");
  for(i=0;i<15;i++) // i<15 = i kurang dari 15 , 15 sama aja dengan kolom, cuman bole sampai 50++
{
  lcd.scrollDisplayLeft();  // left gerak ke kiri, right ke kanan
  delay(1000);
  }

  lcd.clear(); //membersihkan lcd
  }
}
