#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd (0x27,16,2);// mengatur dan mengetahui alamat LCD

void setup() { //digunakan untuk sekali program berjalan
  lcd.init(); //inisialisasi lcd
  lcd.backlight();// menampilkan pencahayaan lcd
}

void loop() { // digunakan untuk mengulang program

  lcd.setCursor(0,0); //untuk menampilkan karakter dari kolom 0 dan baris 0
  lcd.print("SMK NEGERI 09 SEMARANG "); //untuk menampilkan tulisan di lcd
  lcd.scrollDisplayLeft(); // untuk menampilkan tulisan berjalan ke arah kiri
  delay(500); // untuk delay saat tulisan sedang berjalan

  lcd.setCursor(0,1);
  lcd.print("JL. Peterongan, Kota Semarang");
  lcd.scrollDisplayLeft();
  delay(100);

}
