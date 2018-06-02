int m1=8,m2=9,m3=10,m4=11,pw1=A0,pw2=A1,analogVal = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
//  pinMode(pw1,OUTPUT);
//  pinMode(pw2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  char dir;
  if(Serial.available() > 0){
//    Serial.print("Enter The Amount Of Speed = ");
//    analogVal = Serial.read();
//    Serial.println(analogVal);
//    analogWrite(pw1,200);
//    analogWrite(pw2,200);
    dir = Serial.read();
    Serial.print("DIRECTION = ");
    Serial.println(dir);
    if(dir == 'F'){
      Serial.println("Moving FORWARD");
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
    }
    else if(dir == 'B'){
      Serial.println("Moving BACKWARD");
      digitalWrite(m1,LOW);
      digitalWrite(m2,HIGH);
      digitalWrite(m3,LOW);
      digitalWrite(m4,HIGH);
    }
    else if(dir == 'R'){
      Serial.println("Moving RIGHT");
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,LOW);
      digitalWrite(m4,LOW);
    }
    else if(dir == 'L'){
      Serial.println("Moving LEFT");
      digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
    }
    else{
      digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
      digitalWrite(m3,LOW);
      digitalWrite(m4,LOW);
    }
  }
}
