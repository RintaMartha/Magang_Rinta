#include <LiquidCrystal_I2C.h>
void setup() {
lcd.begin(16,2);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(12,INPUT);
}
int detik;
int menit;
int jam;
void loop() {
for (jam = 0;jam<=23;jam++)
{
for (menit=0;menit<=59;menit++)
{
for (detik=0;detik<=59;detik++)
{
if (digitalRead(9)== LOW)
{jam++;}
if (digitalRead(10)== LOW)
{jam-;}
if (digitalRead(11)== LOW)
{menit++;}
if (digitalRead(12)== LOW)
{menit-;} 
lcd.setCursor(0,1);
lcd.print("Pukul");
lcd.print(jam);
lcd.print(":");
lcd.print(menit);
lcd.print(":");
lcd.print(detik);
lcd.print(":");
delay(1000);
}
}
}
}
}
