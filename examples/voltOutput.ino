int pin = 11;

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i <= 255; i += 10) {
    analogWrite(pin, i);   
    float volt = map(i, 0, 255, 0, 500);
    Serial.print(i);
    Serial.print("   ");
    Serial.println(volt/100);
    delay(500); 
  }
}
