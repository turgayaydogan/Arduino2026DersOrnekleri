#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);//16 sutun 2 satırlık 
  //lcd.print("1234567891123456789212345678931234567894");
  //lcd.print("123456789112345678921234567AAAAAAAAAAAAAAA");
  lcd.print("Merhaba millet!.");
  lcd.setCursor(0,1);
  lcd.print("Nasilsiniz?");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(3000);
  silSatir(0); 
  lcd.setCursor(0,0);
  lcd.print("iyiyiz.");
  delay(3000);
  silSatir(1);//2.satırı sil
}

void silSatir(int satirIndex)
{
  lcd.setCursor(0,satirIndex);
  lcd.print("                ");
}
