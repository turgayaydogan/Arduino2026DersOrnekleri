#include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);  //sutun, satır
  //lcd.autoscroll();
  lcd.print("merhaba millet!...");
  lcd.setCursor(0, 1);
  lcd.print("nasilsiniz?");
}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.print("A");
  //delay(250);
  delay(5000);
  //silSatir(0);
  sil(0,0,16);
  lcd.setCursor(0, 0);
  lcd.print("iyiyiz...");
  delay(15000);
}
void silSatir(int satir) {
  lcd.setCursor(0, satir);
  lcd.print("                ");
}

void sil(int sutun, int satir, int uzunluk) {
  lcd.setCursor(sutun, satir);
  for (int i = 0; i < uzunluk; i++)
    lcd.print(" ");
}
