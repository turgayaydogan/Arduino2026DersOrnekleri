#include <SoftwareSerial.h>
SoftwareSerial btSerial(10, 11);

int gelenDeger = 0;  //Bluetooth cihazından gelecek sinyalin değişkeni

void setup() {
  // put your setup code here, to run once:
  // 9600 baud hızında bir seri port açalım

  Serial.begin(9600);
  btSerial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13,0);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Gelen veriyi 'gelenDeger' değişkenine kaydet
  if (btSerial.available() > 0) {
    gelenDeger = btSerial.read();
    Serial.println(gelenDeger);

    if (gelenDeger == 65)// gelen değer ASCII 65 ise yani A 13 nolu pine 1 yolla
      digitalWrite(13, 1);
    if (gelenDeger == 66)// gelen değer ASCII 66 ise yani B 13 nolu pine 0 yolla
      digitalWrite(13, 0);
  }
}
