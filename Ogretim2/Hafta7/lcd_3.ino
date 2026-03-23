#include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte gulenYuz[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
  B11111,
};

uint8_t zil[8] = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.createChar(0, gulenYuz);//0-7 arasında tanımlama yapılabilir
  lcd.createChar(1, zil);

  lcd.setCursor(0, 0);  //sutun, satır
  


}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.print("A");
  //delay(250);
  lcd.write((byte)0);
  lcd.write((byte)1);
  lcd.print(" ");
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
