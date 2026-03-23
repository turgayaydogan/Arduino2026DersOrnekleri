#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sayac = 0;
byte gulenYuz[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B01110,
  B01110,
};

uint8_t zil[8] = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};


void setup() {
  // put your setup code here, to run once:
  lcd.createChar(0, gulenYuz);//0-7 arasında tanımlama yapılabilir
  lcd.createChar(1, zil);
 
  lcd.begin(16, 2);  //16 sutun 2 satırlık



  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  lcd.write((byte)0);
  lcd.write((byte)1);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  lcd.print(" ");
  lcd.write((byte)0);
  lcd.write((byte)1);
  
}

void silSatir(int satirIndex) {
  lcd.setCursor(0, satirIndex);
  lcd.print("                ");
}

void sil(int sutunIndex, int satirIndex, int uzunluk) {
  lcd.setCursor(sutunIndex, satirIndex);
  for (int i = 0; i < uzunluk; i++)
    lcd.print(" ");
}
