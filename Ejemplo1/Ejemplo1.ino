// Hola mundo. Encender y apagar un LED

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);  // Configura el pin digital 2 como salida
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH); // Pone un valor alto en el pin2
  delay(500);// Tiempo de espera en ms.
  digitalWrite(2, LOW); // Pone un valor bajo en el pin2
  delay(500); 
}
