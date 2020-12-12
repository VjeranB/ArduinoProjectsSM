//Arduino DC motor
volatile int motorSpeed = 0;
void setup() { //setup function
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(" DC Motor simulation");
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), Accelerate, RISING);
  attachInterrupt(digitalPinToInterrupt(3), Decelerate, FALLING);
}

void Accelerate(){
  motorSpeed+=15;
  if(motorSpeed > 255){ motorSpeed = 255;}
  if(motorSpeed < 0){ motorSpeed = 0;}
  analogWrite(9,motorSpeed);
  Serial.print("Speed: ");
  Serial.println(motorSpeed);
}
void Decelerate(){
  motorSpeed -= 15;
  if(motorSpeed > 255){ motorSpeed = 255;}
  if(motorSpeed < 0){ motorSpeed = 0;}
  analogWrite(9, motorSpeed);
  Serial.print("Speed: ");
  Serial.println(motorSpeed);
}
void loop() { //loop function
  
 while(Serial.available() == 0);

}
