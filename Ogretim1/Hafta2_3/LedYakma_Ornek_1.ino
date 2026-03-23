void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//13 nolu dijital pin çıkış olarak ayarlandı
}

void loop() {
  // put your main code here, to run repeatedly:
  //13 nolu dijital pine +5V yani Digital 1 yolla
  digitalWrite(13,HIGH);
  delay(1000);//1000ms=1sn bekle
  //13 nolu dijital pine 0V yani Digital 0 yolla
  digitalWrite(13,LOW);
  delay(1000);//1000ms=1sn bekle
}
