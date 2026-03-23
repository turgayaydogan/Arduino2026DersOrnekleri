void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int btn1 = digitalRead(8);
  if(btn1==0)//butona basılı ise, açma butonu
    digitalWrite(11,HIGH);//digitalWrite(11,1);
  
  int btn2 = digitalRead(9);
  if(btn2==0)//2.butona basıldı kapatma butonu
    digitalWrite(11,LOW);//digitalWrite(11,0);

}
