void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//seri haberleşme başlatıldı
  
  randomSeed(analogRead(0));  //A0
  
  pinMode(2, INPUT_PULLUP);   //basınca 0 gelecek
  //ledler çıkış olarak ayarlandı
  for(int i = 6;i<=10;i++)
    pinMode(i, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnDeger = digitalRead(2);
  //butona basılı ise
  if (btnDeger == 0)  //PULLUP olduğu için
  {
    int rnd = random(6,11);  //6,7,8,9,10
    Serial.print("RND: ");
    Serial.println(rnd);
    //ledleri söndür
    for(int i=6;i<=10;i++)//6-7-8-9-10
      digitalWrite(i,0);

    digitalWrite(rnd, 1);
    delay(500);
  }
}
