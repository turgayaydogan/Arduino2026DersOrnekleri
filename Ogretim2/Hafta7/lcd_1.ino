#include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setCursor(-48, 0);
  lcd.print("12345678911234567892123456789312345678941234567895123456");
  //lcd.print("1234567891123456789212345678931234567899");

}

void loop() {
  // put your main code here, to run repeatedly:

}
