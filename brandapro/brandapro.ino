//branda projesi
#include <Servo.h> //servo motor kütüphanesi eklendi
int susev=A0; //su seviye sensörü A0 pinine bağladık
Servo servo; //servo türünde değişken tanıttık

void setup() {

pinMode(susev,INPUT);
Serial.begin(9600);

servo.attach(2); //servo motor 2.pine bağladık
}

void loop() {
  
int susevd=analogRead(susev); //sensörün değer okumasını yapıyoruz
  Serial.print("su seviyesi:");
  Serial.println(susevd);
  delay(500);

if(susevd>180){

  servo.write(90);  //servo 90 derece olsun
  Serial.println("yağmur yağıyor");
   Serial.println("----------------------");
  
  }else{
    
    servo.write(0); //servo 0 dereceye gelsin
    Serial.println("Hava kuru");
    Serial.println("---------------------");
    }
}

//01.09.2021 ben ömer faruk koç saygı ve sevgilerimle umarım faydalı olur <33
