#include<Servo.h>


Servo myservo;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  myservo.attach(9);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

int delaytime = 0;
// the loop function runs over and over again forever
void loop() {
  for (int i=0;i<15;i++){
    digitalWrite(13,HIGH);
    delay(10);
    digitalWrite(13,LOW);
    delay(40);  
  }
  myservo.write(0);
  delay(600);
  myservo.write(90);
  delay(600);
  myservo.write(180);
}
