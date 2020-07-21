uint8_t buf[8]={ 0 } ;

#define SPACE 41
#define PIN 2

int state = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN,INPUT);
  digitalWrite(PIN,1);
  delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(PIN);
  if (state !=1){
    buf[0] = SPACE;
    Serial.write(buf,8);
    releaseKey();
  }

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Release key  
  delay(200);
}
  
}
