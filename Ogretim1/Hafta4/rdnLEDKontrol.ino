void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//seri haberleşme başlatıldı
  
  randomSeed(analogRead(0));  //A0
  
  pinMode(2, INPUT_PULLUP);   //basınca 0 gelecek
  //ledler çıkış olarak ayarlandı
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnDeger = digitalRead(2);
  //butona basılı ise
  if (btnDeger == 0)  //PULLUP olduğu için
  {
    int rnd = random(5);  //0-1-2-3-4
    Serial.print("RND: ");
    Serial.println(rnd);
  
    if (rnd == 0)
      digitalWrite(6, 1);
    if (rnd == 1)
      digitalWrite(7, 1);
    if (rnd == 2)
      digitalWrite(8, 1);
    if (rnd == 3)
      digitalWrite(9, 1);
    if (rnd == 4)
      digitalWrite(10, 1);

    delay(500);
  }
}
