int prev = 0;
void setup() {
  // put your setup code here, to run once:
  //pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  Serial.println(a);
  Serial.println("Previous = "+prev);
  if(a > 525){
    prev++;
  }
  if(prev%2==0){
    digitalWrite(7,LOW);
  }
  else{
    digitalWrite(7,HIGH);
  }
  //delay(1000);
}
