void serialEvent() {
  int prm_idx = 0;
  char bchar;

  bchar = Serial.peek();

  if ((bchar == 'C') or (bchar == 'N') or (bchar == 'S'))
  {
    while ((bchar != '#') and (prm_idx < 150))
    {
      if (Serial.available())
      {
        bchar = (char)Serial.read();
        CH_Prm[prm_idx] = bchar;
        prm_idx ++;
        Serial.print(bchar);
      }
    }
    CH_Prm[prm_idx - 1] = '\0';
    LoadPrm();
  }
  else
  {
    while (Serial.available()) {
      Serial.read();
    }
  }
}

void LoadPrm() {
  String BT_Param;
  uint16_t  eeAdd = 0;
  uint8_t   eePut = 0;
  uint8_t   eeMax = 0;
  uint8_t   lenprm = strlen(CH_Prm) - 3;

  if (CH_Prm[0] == 'S' and CH_Prm[1] == 'D' and CH_Prm[2] == 'R') {
    BT_Param = String(CH_Prm);

    //data1
    EEPROM.put(1, (uint8_t)BT_Param.substring(3, 4).toInt());
    EEPROM.put(2, (uint8_t)BT_Param.substring(4, 6).toInt());
    EEPROM.put(3, (uint8_t)BT_Param.substring(7, 9).toInt());
    EEPROM.put(4, (uint8_t)BT_Param.substring(9, 11).toInt());
    EEPROM.put(5, (uint8_t)BT_Param.substring(11, 12).toInt());
    EEPROM.put(6, (uint8_t)BT_Param.substring(12, 14).toInt());
    EEPROM.put(7, (uint8_t)BT_Param.substring(15, 17).toInt());
    EEPROM.put(8, (uint8_t)BT_Param.substring(17, 19).toInt());
    //data2
    EEPROM.put(9, (uint8_t)BT_Param.substring(19, 20).toInt());
    EEPROM.put(10, (uint8_t)BT_Param.substring(20, 22).toInt());
    EEPROM.put(11, (uint8_t)BT_Param.substring(23, 25).toInt());
    EEPROM.put(12, (uint8_t)BT_Param.substring(25, 27).toInt());
    EEPROM.put(13, (uint8_t)BT_Param.substring(27, 28).toInt());
    EEPROM.put(14, (uint8_t)BT_Param.substring(28, 30).toInt());
    EEPROM.put(15, (uint8_t)BT_Param.substring(31, 33).toInt());
    EEPROM.put(16, (uint8_t)BT_Param.substring(33, 35).toInt());
    //data3
    EEPROM.put(17, (uint8_t)BT_Param.substring(35, 36).toInt());
    EEPROM.put(18, (uint8_t)BT_Param.substring(36, 38).toInt());
    EEPROM.put(19, (uint8_t)BT_Param.substring(39, 41).toInt());
    EEPROM.put(20, (uint8_t)BT_Param.substring(41, 43).toInt());
    EEPROM.put(21, (uint8_t)BT_Param.substring(43, 44).toInt());
    EEPROM.put(22, (uint8_t)BT_Param.substring(44, 46).toInt());
    EEPROM.put(23, (uint8_t)BT_Param.substring(47, 49).toInt());
    EEPROM.put(24, (uint8_t)BT_Param.substring(49, 51).toInt());
    //data4
    EEPROM.put(25, (uint8_t)BT_Param.substring(51, 52).toInt());
    EEPROM.put(26, (uint8_t)BT_Param.substring(52, 54).toInt());
    EEPROM.put(27, (uint8_t)BT_Param.substring(55, 57).toInt());
    EEPROM.put(28, (uint8_t)BT_Param.substring(57, 59).toInt());
    EEPROM.put(29, (uint8_t)BT_Param.substring(59, 60).toInt());
    EEPROM.put(30, (uint8_t)BT_Param.substring(60, 62).toInt());
    EEPROM.put(31, (uint8_t)BT_Param.substring(63, 65).toInt());
    EEPROM.put(32, (uint8_t)BT_Param.substring(65, 67).toInt());
    //data5
    EEPROM.put(33, (uint8_t)BT_Param.substring(67, 68).toInt());
    EEPROM.put(34, (uint8_t)BT_Param.substring(68, 70).toInt());
    EEPROM.put(35, (uint8_t)BT_Param.substring(71, 73).toInt());
    EEPROM.put(36, (uint8_t)BT_Param.substring(73, 75).toInt());
    EEPROM.put(37, (uint8_t)BT_Param.substring(75, 76).toInt());
    EEPROM.put(38, (uint8_t)BT_Param.substring(76, 78).toInt());
    EEPROM.put(39, (uint8_t)BT_Param.substring(79, 81).toInt());
    EEPROM.put(40, (uint8_t)BT_Param.substring(81, 83).toInt());
    //data6
    EEPROM.put(41, (uint8_t)BT_Param.substring(83, 84).toInt());
    EEPROM.put(42, (uint8_t)BT_Param.substring(84, 86).toInt());
    EEPROM.put(43, (uint8_t)BT_Param.substring(87, 89).toInt());
    EEPROM.put(44, (uint8_t)BT_Param.substring(89, 91).toInt());
    EEPROM.put(45, (uint8_t)BT_Param.substring(91, 92).toInt());
    EEPROM.put(46, (uint8_t)BT_Param.substring(92, 94).toInt());
    EEPROM.put(47, (uint8_t)BT_Param.substring(95, 97).toInt());
    EEPROM.put(48, (uint8_t)BT_Param.substring(97, 99).toInt());
    //data7
    EEPROM.put(49, (uint8_t)BT_Param.substring(99, 100).toInt());
    EEPROM.put(50, (uint8_t)BT_Param.substring(100, 102).toInt());
    EEPROM.put(51, (uint8_t)BT_Param.substring(103, 105).toInt());
    EEPROM.put(52, (uint8_t)BT_Param.substring(105, 107).toInt());
    EEPROM.put(53, (uint8_t)BT_Param.substring(107, 108).toInt());
    EEPROM.put(54, (uint8_t)BT_Param.substring(108, 110).toInt());
    EEPROM.put(55, (uint8_t)BT_Param.substring(111, 113).toInt());
    EEPROM.put(56, (uint8_t)BT_Param.substring(113, 115).toInt());
    //data8
    EEPROM.put(57, (uint8_t)BT_Param.substring(115, 116).toInt());
    EEPROM.put(58, (uint8_t)BT_Param.substring(116, 118).toInt());
    EEPROM.put(59, (uint8_t)BT_Param.substring(119, 121).toInt());
    EEPROM.put(60, (uint8_t)BT_Param.substring(121, 123).toInt());

  }

  else if (CH_Prm[0] == 'S' and CH_Prm[1] == 'D' and CH_Prm[2] == 'T') {
    BT_Param = String(CH_Prm);

    int tahun1 = (BT_Param.substring(3, 7).toInt());
    byte bulan1 = byte(BT_Param.substring(7, 9).toInt());
    byte tanggal1 = byte(BT_Param.substring(9, 11).toInt());
    byte jam1 = byte(BT_Param.substring(11, 13).toInt());
    byte menit1 = byte(BT_Param.substring(13, 15).toInt());
    byte detik1 = byte(BT_Param.substring(15, 17).toInt());

    rtc.adjust(DateTime(tahun1, bulan1, tanggal1, jam1, menit1, detik1));

    lcd.clear();
    delay(50);
    lcd.setCursor(2, 0);
    lcd.print("Update Waktu");
    delay(1000);
    lcd.clear();
    delay(50);
  }

  //get new parameter
  GetPrm();
}

void GetPrm() {
  DateTime now = rtc.now();
  // Serial.println("Get parameter");
  // Get Parameter and check
  EEPROM.get(0, Prm);
  //check value of Prm State .. set Default
  if (Prm.state != 212) {
    set_default_prm();
  }
  if (now.year() < 2000) {
    set_default_time();
  }

}

void set_default_prm() {
  // Put Parameter start form addr 500
  Prm = (struct_param) {
    212, 0, 00, 00, 00, //1
         0, 00, 00, 00, //2
         0, 00, 00, 00, //3
         0, 00, 00, 00, //4
         0, 00, 00, 00, //5
         0, 00, 00, 00, //6
         0, 00, 00, 00, //7
         0, 00, 00, 00, //8
         0, 00, 00, 00, //9
         0, 00, 00, 00, //10
         0, 00, 00, 00, //11
         0, 00, 00, 00, //12
         0, 00, 00, 00, //13
         0, 00, 00, 00, //14
         0, 00, 00, 00, //15
         0, 00, 00, 00, //16
         0, 00, 00, 00, //17
         0, 00, 00, 00, //18
         0, 00, 00, 00, //19
         0, 00, 00, 00, //20
         0, 00, 00, 00, //21
         0, 00, 00, 00, //22
         0, 00, 00, 00, //23
         0, 00, 00, 00, //24
         0, 00, 00, 00, //25
         0, 00, 00, 00, //26
         0, 00, 00, 00, //27
         0, 00, 00, 00, //28
         0, 00, 00, 00, //29
         0, 00, 00, 00, //30
         0, 00, 00, 00, //16
  };
  //{0,1,2,3,4}

  EEPROM.put(0, Prm);

}

void set_default_time() {
  rtc.adjust(DateTime(2018, 1, 1, 12, 0, 0));
}
