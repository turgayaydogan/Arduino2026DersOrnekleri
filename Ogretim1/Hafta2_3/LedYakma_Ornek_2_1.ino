void setup() {
  // put your setup code here, to run once:
  //dijital 13 nolu pin ÇIKIŞ olarak ayarla
  pinMode(13,OUTPUT);//INPUT veya OUTPUT veya ....
}

void loop() {
  // put your main code here, to run repeatedly:
  //13 nolu çıkışa +5V değerini yolla
  digitalWrite(13,HIGH);  //HIGH = +5V, LOW = 0V
  delay(1000);//1000 ms = 1 sn bekle
  digitalWrite(13,LOW);
  delay(1000);
}
