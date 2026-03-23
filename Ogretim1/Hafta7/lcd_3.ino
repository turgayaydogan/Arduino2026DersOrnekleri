#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sayac = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);  //16 sutun 2 satırlık
  //lcd.print("1234567891123456789212345678931234567894");
  //lcd.print("123456789112345678921234567AAAAAAAAAAAAAAA");
  lcd.print("Merhaba millet!.");
  lcd.setCursor(0, 1);
  lcd.print("Nasilsiniz?");

  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  int btnDeger = digitalRead(7);
  if (btnDeger == 0)  //PULLUP olduğu için basılınca 0 değeri okunur
  {
    sayac++;
    sil(0,0,16);
    lcd.setCursor(0, 0);
    lcd.print(sayac);
    delay(400);
  }
  int btnDeger2 = digitalRead(8);
  if (btnDeger2 == 0) {
    sayac = 0;
  }
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
