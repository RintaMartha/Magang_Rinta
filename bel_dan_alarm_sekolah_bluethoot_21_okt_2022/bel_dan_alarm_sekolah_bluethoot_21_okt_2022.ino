//Program: Bel Sekolah Bluetooth V1.2

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RTClib.h>
#include <EEPROM.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);
RTC_DS3231 rtc;

char HariDalamMinggu[7][12] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};

int buzzer = 7;
unsigned long lastmillis;

typedef struct
{
  uint8_t state;   // 1 byte  add 0
  uint8_t ak1;    // 1 byte  add 1
  uint8_t jm1;    // 1 byte  add 2
  uint8_t mm1;    // 1 byte  add 3
  uint8_t pl1;    // 1 byte  add 4

  uint8_t ak2;    // 1 byte  add 5
  uint8_t jm2;    // 1 byte  add 6
  uint8_t mm2;    // 1 byte  add 7
  uint8_t pl2;    // 1 byte  add 8

  uint8_t ak3;    // 1 byte  add 9
  uint8_t jm3;    // 1 byte  add 10
  uint8_t mm3;    // 1 byte  add 11
  uint8_t pl3;    // 1 byte  add 12

  uint8_t ak4;    // 1 byte  add 13
  uint8_t jm4;    // 1 byte  add 14
  uint8_t mm4;    // 1 byte  add 15
  uint8_t pl4;    // 1 byte  add 16

  uint8_t ak5;    // 1 byte  add 17
  uint8_t jm5;    // 1 byte  add 18
  uint8_t mm5;    // 1 byte  add 19
  uint8_t pl5;    // 1 byte  add 20

  uint8_t ak6;    // 1 byte  add 21
  uint8_t jm6;    // 1 byte  add 22
  uint8_t mm6;    // 1 byte  add 23
  uint8_t pl6;    // 1 byte  add 24

  uint8_t ak7;    // 1 byte  add 25
  uint8_t jm7;    // 1 byte  add 26
  uint8_t mm7;    // 1 byte  add 27
  uint8_t pl7;    // 1 byte  add 28

  uint8_t ak8;    // 1 byte  add 29
  uint8_t jm8;    // 1 byte  add 30
  uint8_t mm8;    // 1 byte  add 31
  uint8_t pl8;    // 1 byte  add 32

  uint8_t ak9;    // 1 byte  add 33
  uint8_t jm9;    // 1 byte  add 34
  uint8_t mm9;    // 1 byte  add 35
  uint8_t pl9;    // 1 byte  add 36

  uint8_t ak10;    // 1 byte  add 37
  uint8_t jm10;    // 1 byte  add 38
  uint8_t mm10;    // 1 byte  add 39
  uint8_t pl10;    // 1 byte  add 40

  uint8_t ak11;    // 1 byte  add 41
  uint8_t jm11;    // 1 byte  add 42
  uint8_t mm11;    // 1 byte  add 43
  uint8_t pl11;    // 1 byte  add 44

  uint8_t ak12;    // 1 byte  add 45
  uint8_t jm12;    // 1 byte  add 46
  uint8_t mm12;    // 1 byte  add 47
  uint8_t pl12;    // 1 byte  add 48

  uint8_t ak13;    // 1 byte  add 49
  uint8_t jm13;    // 1 byte  add 50
  uint8_t mm13;    // 1 byte  add 51
  uint8_t pl13;    // 1 byte  add 52

  uint8_t ak14;    // 1 byte  add 53
  uint8_t jm14;    // 1 byte  add 54
  uint8_t mm14;    // 1 byte  add 55
  uint8_t pl14;    // 1 byte  add 56

  uint8_t ak15;    // 1 byte  add 57
  uint8_t jm15;    // 1 byte  add 58
  uint8_t mm15;    // 1 byte  add 59
  uint8_t pl15;    // 1 byte  add 60

  uint8_t aksl;    // 1 byte  add 61
  uint8_t jmsl;    // 1 byte  add 62
  uint8_t mmsl;    // 1 byte  add 63
  uint8_t plsl;    // 1 byte  add 64

  uint8_t ak17;    // 1 byte  add 65
  uint8_t jm17;    // 1 byte  add 66
  uint8_t mm17;    // 1 byte  add 67
  uint8_t pl17;    // 1 byte  add 68

  uint8_t ak18;    // 1 byte  add 69
  uint8_t jm18;    // 1 byte  add 70
  uint8_t mm18;    // 1 byte  add 71
  uint8_t pl18;    // 1 byte  add 72

  uint8_t ak19;    // 1 byte  add 73
  uint8_t jm19;    // 1 byte  add 74
  uint8_t mm19;    // 1 byte  add 75
  uint8_t pl19;    // 1 byte  add 76

  uint8_t ak20;    // 1 byte  add 77
  uint8_t jm20;    // 1 byte  add 78
  uint8_t mm20;    // 1 byte  add 79
  uint8_t pl20;    // 1 byte  add 80

  uint8_t ak21;    // 1 byte  add 81
  uint8_t jm21;    // 1 byte  add 82
  uint8_t mm21;    // 1 byte  add 83
  uint8_t pl21;    // 1 byte  add 84

  uint8_t ak22;    // 1 byte  add 85
  uint8_t jm22;    // 1 byte  add 86
  uint8_t mm22;    // 1 byte  add 87
  uint8_t pl22;    // 1 byte  add 88

  uint8_t ak23;    // 1 byte  add 89
  uint8_t jm23;    // 1 byte  add 90
  uint8_t mm23;    // 1 byte  add 91
  uint8_t pl23;    // 1 byte  add 92

  uint8_t ak24;    // 1 byte  add 93
  uint8_t jm24;    // 1 byte  add 94
  uint8_t mm24;    // 1 byte  add 95
  uint8_t pl24;    // 1 byte  add 96

  uint8_t ak25;    // 1 byte  add 97
  uint8_t jm25;    // 1 byte  add 98
  uint8_t mm25;    // 1 byte  add 99
  uint8_t pl25;    // 1 byte  add 100

  uint8_t ak26;    // 1 byte  add 101
  uint8_t jm26;    // 1 byte  add 102
  uint8_t mm26;    // 1 byte  add 103
  uint8_t pl26;    // 1 byte  add 104

  uint8_t ak27;    // 1 byte  add 105
  uint8_t jm27;    // 1 byte  add 106
  uint8_t mm27;    // 1 byte  add 107
  uint8_t pl27;    // 1 byte  add 108

  uint8_t ak28;    // 1 byte  add 109
  uint8_t jm28;    // 1 byte  add 110
  uint8_t mm28;    // 1 byte  add 111
  uint8_t pl28;    // 1 byte  add 112

  uint8_t ak29;    // 1 byte  add 113
  uint8_t jm29;    // 1 byte  add 114
  uint8_t mm29;    // 1 byte  add 115
  uint8_t pl29;    // 1 byte  add 116

  uint8_t ak30;    // 1 byte  add 117
  uint8_t jm30;    // 1 byte  add 118
  uint8_t mm30;    // 1 byte  add 119
  uint8_t pl30;    // 1 byte  add 120

  uint8_t ak16;    // 1 byte  add 69
  uint8_t jm16;    // 1 byte  add 70
  uint8_t mm16;    // 1 byte  add 71
  uint8_t pl16;    // 1 byte  add 72
} struct_param;

//Variable dari struktur
struct_param    Prm;
char        CH_Prm[250];


void setup() {
  Serial.begin(9600);
 //poj, lcd.begin();
  
  if (! rtc.begin()) {
    Serial.println("RTC tidak terhubung, Cek kembali wiring!");
    while (1);
  }
  if (rtc.lostPower()) {
    Serial.println("RTC tidak bekerja, Setel ulang waktu!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  GetPrm();
  delay(2000);

}

void loop() {
  DateTime now = rtc.now();

  printwaktu();
  cekjadwal(Prm.ak1, Prm.jm1, Prm.mm1);  //jadwal 1
  cekjadwal(Prm.ak2, Prm.jm2, Prm.mm2);  //jadwal 2
  cekjadwal(Prm.ak3, Prm.jm3, Prm.mm3);  //jadwal 3
  cekjadwal(Prm.ak4, Prm.jm4, Prm.mm4);  //jadwal 4
  cekjadwal(Prm.ak5, Prm.jm5, Prm.mm5);  //jadwal 5
  cekjadwal(Prm.ak6, Prm.jm6, Prm.mm6);  //jadwal 6
  cekjadwal(Prm.ak7, Prm.jm7, Prm.mm7);  //jadwal 7
  cekjadwal(Prm.ak8, Prm.jm8, Prm.mm8);  //jadwal 8
  cekjadwal(Prm.ak9, Prm.jm9, Prm.mm9);  //jadwal 9
  cekjadwal(Prm.ak10, Prm.jm10, Prm.mm10);  //jadwal 10
  cekjadwal(Prm.ak11, Prm.jm11, Prm.mm11);  //jadwal 11
  cekjadwal(Prm.ak12, Prm.jm12, Prm.mm12);  //jadwal 12
  cekjadwal(Prm.ak13, Prm.jm13, Prm.mm13);  //jadwal 13
  cekjadwal(Prm.ak14, Prm.jm14, Prm.mm14);  //jadwal 14
  cekjadwal(Prm.ak15, Prm.jm15, Prm.mm15);  //jadwal 15

}

void cekjadwal(byte aktif, byte jam1, byte menit1) {
  DateTime now = rtc.now();
  if (aktif == 1) {
    if (jam1 == now.hour() && menit1 == now.minute()) {
      if ((now.second() <= 25) && (now.second() % 2) == 0) {

        digitalWrite(buzzer, HIGH);
      }
      else {
        digitalWrite(buzzer, LOW);
      }
    }
  }
}

void printwaktu() {
  DateTime now = rtc.now();
  //hari
  lcd.setCursor(0, 0);
  lcd.print(HariDalamMinggu[now.dayOfTheWeek()]);
  lcd.print(",  ");

  //tanggal
  lcd.setCursor(8, 0);
  printposisi(now.day());
  lcd.print("/");
  printposisi(now.month());
  lcd.print("/");
  printposisi(now.year() - 2000);

  //waktu
  lcd.setCursor(8, 1);
  printposisi(now.hour());
  lcd.print(":");
  printposisi(now.minute());
  lcd.print(":");
  printposisi(now.second());
}


void printposisi(int digits) {
  if (digits < 10)
    lcd.print("0");
  lcd.print(digits);
}
