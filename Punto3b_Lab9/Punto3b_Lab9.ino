// PULSADOR LED
  bool pulsador = LOW;
  bool estado = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  pulsador = digitalRead(5);
  if (pulsador == HIGH){
    if (estado == LOW){
      estado = HIGH;
      digitalWrite(2,estado);
    }
    else{
      estado = LOW;
      digitalWrite(2,estado);
    }
  }
  digitalWrite(2,estado);
}
