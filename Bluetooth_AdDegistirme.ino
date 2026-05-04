#include <SoftwareSerial.h>
// TAVSİYE:
// AT modunda Bluetooth modülünü başlatmak için:
// Bluetooth modülünün EN pinini +5V da bağlayınız...

// SoftwareSerial RX, TX
// RX ==> TX e bağlanır
// TX ==> RX e bağlanır
//Arduino 10 nolu pin RX gibi davran
//Arduino 11 nolu pin TX gibi davran şeklinde aşağıda ayar yaptık
SoftwareSerial BTSerial(10, 11); 
// Yukarıdaki ayara göre:
// Bluetooth modülünün RX pinini = Arduino 11 nolu pine bağla
// Bluetooth modülünün TX pinini = Arduino 10 nolu pine bağla

void setup() {
  // Start Serial Monitor
  Serial.begin(9600);
  
  //Bluetooth Serial haberleşmeyi baud rate 38400 olarak AT Mode için başlat
  BTSerial.begin(38400);

  delay(2000);
  Serial.println("HC-05 Ayarlanmaya çalışacak:");

  sendATCommand("AT");                // Test AT haberleşme, seri monitorde sonucu OK yazmalı
  sendATCommand("AT+NAME=EAGLE48");     // BLUETOOTH vermek istediğiniz ad
  sendATCommand("AT+PSWD=484848A");       // Vermek istediğiniz ŞİFRE 
  sendATCommand("AT+NAME?");           // ADI KONTROL ET
  sendATCommand("AT+PSWD?");           // ŞİFREYİ KONTROL ET
  //Bu komutlardan sonra OK çıkıyor ise olmuştur.
  //Arduino IDe de serial terminal baundrate 9600 olacak, Both NL & CR olacak
}

void loop() {
  // Seri Monitörden HC-05'e manuel komut girişine izin veriliyor
  if (Serial.available()) {
    BTSerial.write(Serial.read());
  }
  if (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
}

void sendATCommand(const char *cmd) {
  Serial.print("Yollanıyor: ");
  Serial.println(cmd);
  BTSerial.print(cmd);
  BTSerial.print("\r\n"); // CR+LF ile bitir

  delay(500);

  while (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  Serial.println();
}