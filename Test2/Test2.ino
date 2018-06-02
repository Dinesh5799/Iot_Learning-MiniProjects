int m1=8,m2=9,m3=10,m4=11,s1=6,s2=5,trigPin=13,echoPin=12,duration,distance;
int leftsensor_val = 0,rightsensor_val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(trigPin,LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration*0.034/2;
   Serial.print("Distance = ");
   Serial.println(distance);
   leftsensor_val = digitalRead(s1);
   rightsensor_val = digitalRead(s2);
   Serial.print("leftsensor_val = ");
   Serial.println(leftsensor_val);
   Serial.print("rightsensor_val = ");
   Serial.println(rightsensor_val);
   if(leftsensor_val == 1 && rightsensor_val == 1){
    Serial.println("Stopping");
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
   }
   else if(leftsensor_val == 1 && rightsensor_val == 0){
    Serial.println("Moving Left");
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
   }
   else if(leftsensor_val == 0 && rightsensor_val == 1){
    Serial.println("Moving Right");
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
   }
   else if(leftsensor_val == 0 && rightsensor_val == 0){
    Serial.println("Moving Forward");
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
   }
}
