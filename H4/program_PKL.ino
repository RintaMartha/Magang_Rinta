#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//#include <LiquidCrystal.h>

//#define led 8
//#define led2 9
int terang=0;

//const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//int lampu;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (led,OUTPUT);
  pinMode (led2,OUTPUT);
  lcd.begin(16,2)
  }

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite (led, LOW);
//  delay(200);
//  analogWrite (led2, 170);
//  delay(1000);
//  analogWrite (led2, 50);
//  delay(1000);
//  analogWrite (led2, 20);
//  delay(1000);
//  digitalWrite (led2, HIGH);
//  delay(200);
//  digitalWrite (led, HIGH);
//  delay(200);
//  terang=terang-10;
//  delay(100);
//  analogWrite (led2, terang); 
//  serial();
    //LCD(); 
  lcd.init();
  lcd.backlight();
  int i;  
  lcd.setCursor(15, 0);
  lcd.print("TIM DRC FULL SENYUM");
  for (i = 0 ; i < 30; i++) 
  {
     lcd.scrollDisplayLeft(); 
    delay(400);
  } 
    lcd.clear();
    
  lcd.setCursor(15, 0);
  lcd.print("kakak wibi selalu di hati");
  for (i = 0 ; i < 30; i++) 
  {
    lcd.scrollDisplayLeft(); 
    delay(400);
  } 
    lcd.clear();
}
  }
