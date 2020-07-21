 bool pulsador = LOW;
  bool estado = LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsador = digitalRead(5);
  if (pulsador == HIGH){
  digitalWrite(2,HIGH);
  Serial.println(1);
  delay(200);
  }
  else{
  digitalWrite(2,LOW);
  Serial.println(0);
  }
}
