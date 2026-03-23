void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);//2 nolu pini çıkış yap
  digitalWrite(2,HIGH);// 2 nolu pine +5V yolla  
  
  pinMode(8,INPUT_PULLUP);
  //butona basılınca 0V gidecek
  //butona basılı değilse +5V gidecek

  Serial.begin(9600);//saniyene yollanacak bit miktarı
  //baundrate
}

void loop() {
  // put your main code here, to run repeatedly:

  int okunanDeger = digitalRead(8);//1 veya 0 gelecek
  Serial.println(okunanDeger);
  delay(500);
  
}
