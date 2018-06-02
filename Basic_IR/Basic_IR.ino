void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int in_value = digitalRead(8);
  if(in_value == 1){
    digitalWrite(7,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(7,LOW);
    delay(1000);
  }
}
