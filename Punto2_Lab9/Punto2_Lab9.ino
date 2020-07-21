
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT); 
}

void loop() {
  //AMARILLO
  digitalWrite(2,LOW); 
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(2000);
  //MORADO
  digitalWrite(2,LOW); 
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(2000);
  //AGUAMARINA
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(2000);
  //BLANCO2
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(2000);
  //APAGADO
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(2000); 
}
