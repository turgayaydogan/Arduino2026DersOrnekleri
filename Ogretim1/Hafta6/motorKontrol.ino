#define MotorLE 3  //PWM
#define MotorL1 5
#define MotorL2 4

#define MotorRE 6  //PWM
#define MotorR1 7
#define MotorR2 8

#define btnIleri 10
#define btnGeri 11

#define btnSag 12
#define btnSol 13

void setup() {

  pinMode(MotorL1, OUTPUT);
  pinMode(MotorL2, OUTPUT);
  pinMode(MotorLE, OUTPUT);  //Motorlarımızı çıkış olarak tanımlıyoruz.
  pinMode(MotorR1, OUTPUT);
  pinMode(MotorR2, OUTPUT);
  pinMode(MotorRE, OUTPUT);

  pinMode(btnIleri, INPUT_PULLUP);
  pinMode(btnGeri, INPUT_PULLUP);
  pinMode(btnSag, INPUT_PULLUP);
  pinMode(btnSol, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  int btn_ileri = digitalRead(btnIleri);
  int btn_geri = digitalRead(btnGeri);


  if (btn_ileri == 0)  //ileri butonua basıldı
    ileri();
  else if (btn_geri == 0)
    geri();
  else
    dur();
}
void dur() {
  digitalWrite(MotorR1, LOW);  // Sağ motorun ileri hareketi pasif
  digitalWrite(MotorR2, LOW);  // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 0);     // Sağ motorun hızı 0
  digitalWrite(MotorL1, LOW);  // Sol motorun ileri hareketi pasif
  digitalWrite(MotorL2, LOW);  // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 0);     // Sol motorun hızı 0
}
void ileri() {                  // Robotun ileri yönde hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, HIGH);  // Sağ motorun ileri hareketi aktif
  digitalWrite(MotorR2, LOW);   // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 255);    // Sağ motorun hızı 0-255
  digitalWrite(MotorL1, HIGH);  // Sol motorun ileri hareketi aktif
  digitalWrite(MotorL2, LOW);   // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 255);    // Sol motorun hızı 0-255
}
void sag() {                    // Robotun sağa dönme hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, HIGH);  // Sağ motorun ileri hareketi aktif
  digitalWrite(MotorR2, LOW);   // Sağ motorun geri hareketi pasif
  analogWrite(MotorRE, 0);      // Sağ motorun hızı 0 (Motor duruyor)
  digitalWrite(MotorL1, HIGH);  // Sol motorun ileri hareketi aktif
  digitalWrite(MotorL2, LOW);   // Sol motorun geri hareketi pasif
  analogWrite(MotorLE, 150);    // Sol motorun hızı 150
}
void sol() {                    // Robotun sola dönme hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, LOW);   // Sağ motorun ileri hareketi pasif
  digitalWrite(MotorR2, HIGH);  // Sağ motorun geri hareketi aktif
  analogWrite(MotorRE, 150);    // Sağ motorun hızı 150
  digitalWrite(MotorL1, LOW);   // Sol motorun ileri hareketi pasif
  digitalWrite(MotorL2, HIGH);  // Sol motorun geri hareketi aktif
  analogWrite(MotorLE, 0);      // Sol motorun hızı 150
}
void geri() {                   // Robotun geri yönde hareketi için fonksiyon tanımlıyoruz.
  digitalWrite(MotorR1, LOW);   // Sağ motorun ileri hareketi pasif
  digitalWrite(MotorR2, HIGH);  // Sağ motorun geri hareketi aktif
  analogWrite(MotorRE, 150);    // Sağ motorun hızı 150
  digitalWrite(MotorL1, LOW);   // Sol motorun ileri hareketi pasif
  digitalWrite(MotorL2, HIGH);  // Sol motorun geri hareketi aktif
  analogWrite(MotorLE, 150);    // Sol motorun hızı 150
}
