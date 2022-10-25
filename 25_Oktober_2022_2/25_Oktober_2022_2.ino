#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
String teks ="Selamat mempelajari LCD";
int indeks =0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.print("SMK NEGERI 9 SMG");

  teks=teks+
  "TETAP PATUHI PROTOKOL KESEHATAN"+"DAN CUCI TANGAN";
}

void loop() {
  char st[17];
  st[16]=0;

  //bentuk string
  for (int j=0;j<16;j++)
  if(indeks +j<teks.length())
  st[j]= 32;//Spasi

  //Tampilan di baris kedua
  lcd.setCursor(0,1);
  lcd.print(st);

  //Peroleh indeks berikutnya
  indeks++;
  if(indeks==teks.length()-1)
  indeks=0;
  delay(600);
}
