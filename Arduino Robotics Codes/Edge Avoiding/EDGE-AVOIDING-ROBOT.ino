#define LS 9 // right sensor
#define RS 8 // left sensor 
//-------definning Outputs------
#define LM1 7 // right motor driver pin 14
#define LM2 6 // right motor driver pin 13
#define RM1 5 // left motor driver pin 12
#define RM2 4 // letf motor driver pin 11
void setup() { 
  pinMode(LS, INPUT); 
  pinMode(RS, INPUT); 
  pinMode(LM1, OUTPUT); 
  pinMode(LM2, OUTPUT); 
  pinMode(RM1, OUTPUT); 
  pinMode(RM2, OUTPUT);  
} 
void loop() { 
  if(!digitalRead(LS) && !digitalRead(RS)) // Move Forward 
  { 
    digitalWrite(LM1, HIGH); 
    digitalWrite(LM2, LOW); 
    digitalWrite(RM1, HIGH); 
    digitalWrite(RM2, LOW); 
  } if(digitalRead(LS) && !digitalRead(RS)) // Turn right 
  { 
    digitalWrite(LM1, HIGH); 
    digitalWrite(LM2, LOW); 
    digitalWrite(RM1, LOW); 
    digitalWrite(RM2, HIGH); 
    delay(1000);
  } if(!digitalRead(LS) && digitalRead(RS)) // turn left 
  { 
    digitalWrite(LM1, LOW); 
    digitalWrite(LM2, HIGH); 
    digitalWrite(RM1, HIGH); 
    digitalWrite(RM2, LOW);
    delay(1000); 
  } if(digitalRead(LS) && digitalRead(RS)) // stop 
  { 
    digitalWrite(LM1, LOW); 
    digitalWrite(LM2, HIGH); 
    digitalWrite(RM1, LOW); 
    digitalWrite(RM2, HIGH); 
    delay(2000);
    digitalWrite(LM1, LOW); 
    digitalWrite(LM2, HIGH); 
    digitalWrite(RM1, HIGH); 
    digitalWrite(RM2, LOW); 
    delay(2000);
  } 
}

