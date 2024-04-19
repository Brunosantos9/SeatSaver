int tmp = A6;
float temp =0.0, ultimatemp=0.0;
int led=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp=(analogRead(tmp)*(3.3/1023))/0.1;
  if (temp!=ultimatemp) {
    ultimatemp=temp;
    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.println("ºC");
  }
  if (temp>=7.8) {
    digitalWrite(led,HIGH);
  }
  else if (temp<7.8){
    digitalWrite(led,LOW);

  }
  
  delay(1000);
}
