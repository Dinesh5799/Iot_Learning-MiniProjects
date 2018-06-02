int m1=8,m2=9,m3=10,m4=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Moving FORWARD");
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
//  for(int i = 0;i < 60; i++){
//    delay(1000);
//  }
}
