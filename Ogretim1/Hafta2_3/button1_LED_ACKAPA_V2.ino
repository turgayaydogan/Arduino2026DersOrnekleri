int durum = 0;//0 ise sönük 1 ise yanık
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT_PULLUP);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(8);
  //durum 0 ise led sönük
  if(btn==0 && durum==0)//butona tıklandıysa
  {
      digitalWrite(11,1);
      durum=1;//led artık yanıyor
  }//durum 1 ise led yanık
  else  if(btn==0 && durum==1)//butona tıklandıysa
  {
     digitalWrite(11,0);
     durum = 0;//led artık sönük
  }
  delay(2000);//sistemin daha kararlı çalışması için kullanıcıya butona basma çekme süresi tanınıyor
}
