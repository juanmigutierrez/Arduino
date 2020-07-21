const int pot=0;
int voltaje_pot;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltaje_pot = analogRead(pot);
  Serial.print("Valor leido en A0: ");
  Serial.print(voltaje_pot);

  delay(500);
  if(voltaje_pot < 256 ){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  else if (voltaje_pot >= 256 and voltaje_pot <512){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);   
  }
  else if (voltaje_pot >= 512 and voltaje_pot <768){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);   
  }
  else if (voltaje_pot >= 758 and voltaje_pot <1024){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);   
  }
}
