#include <Servo.h>

Servo myservo;
int pos = 0;
int IRsensor = 2;
int wave;
int led = 13;
int buzzer = 12;

void setup() {
  Serial.begin(9600);
  pinMode(IRsensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  myservo.attach(9);
}

void loop() {

  wave = digitalRead(IRsensor);
  Serial.println(wave);

  for(int n = 0; n <8; n +=1) {
    myservo.write(pos=165);
    delay(15);
    myservo.write(pos=115);
    delay(15);
  }    

  if (wave == 1) {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
    
  if (wave == 0) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
    
}

/*
  // optik = 01101111 01110000 01110100 01101001 01101011

  // 0 = 01101111
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  
  // p = 01110000
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);

  // t = 01110100
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=65);    // 0
  delay(1000);

  // i = 01101001
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  
  // k = 01101011
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=65);    // 0
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
  myservo.write(pos=155);   // 1
  delay(500);
*/
