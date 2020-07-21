
const int pot=0;
int voltaje_pot;
const int led =3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltaje_pot = analogRead(pot);
  Serial.print("Valor leido en A0: ");
  Serial.print(voltaje_pot);
  analogWrite(led,voltaje_pot/4);
  delay(500);
}
