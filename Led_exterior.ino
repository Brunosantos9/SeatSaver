int led1 = 0;
void setup(){
  
  pinMode(led1,OUTPUT);
}
void loop(){
  analogWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(100);
}