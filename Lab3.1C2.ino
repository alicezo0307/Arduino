#define SW 2
#define ledRed 13
void setup() {
  Serial.begin(9600);
  Serial.println("Hello");
  pinMode(ledRed, OUTPUT);
  pinMode(SW, INPUT);
}

void loop() {
  Serial.println(digitalRead(SW));
  if (digitalRead(SW) == 0) {
    digitalWrite(ledRed, 0);
    Serial.println(digitalRead(SW));
  }
  else {
    digitalWrite(ledRed, 1);
    Serial.println(digitalRead(SW));
  }
}
