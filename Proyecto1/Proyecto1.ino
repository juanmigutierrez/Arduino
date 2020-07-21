uint8_t buf[8]={ 0 } ;

#define SPACE 41

  bool pulsador = LOW;
  bool estado = LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);
  delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsador = digitalRead(5);
  if (pulsador == HIGH){
  digitalWrite(2,HIGH);
  buf[0]=SPACE;
  Keyboard.press('v');
  Serial.write(buf,8);
  releaseKey();
  }
  else{
  digitalWrite(2,LOW);  
  }
}
