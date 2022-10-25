//Scrolling text

#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();//inisialisasi lcd
  lcd.backlight();//menyalakan lampu belakang
}

void loop() {
  //Informasi pertama
  lcd.home();
  lcd.clear();
  lcd.setCursor(0,0);// Set posisi di kolom 0 baris ke-0 
  lcd.print("SMK NEGERI 9 SMG");
  lcd.setCursor(0,1);// Set posisi di kolom 0 baris ke-1
  lcd.print("Jl. PETERONGAN");

  delay(5000);

 //Gerak ke kiri
for(int j=1;j<= 16;j++)
 {
  lcd.scrollDisplayLeft();
  delay(100);
 }

  //Informasi kedua
  lcd.home();
  lcd.clear();
  lcd.setCursor(4,0); //Ser posisi di kolom 4 bariske-0
  lcd.print("JAM PERTAMA");
  lcd.setCursor(5,1); //Set posisi di kolom 5 baris ke-1
  lcd.print("07.00");

  delay(5000);

  //Gerak ke kanan
  for(int j=1;j<=16;j++)
  lcd.scrollDisplayRight();
  delay(100);
}
