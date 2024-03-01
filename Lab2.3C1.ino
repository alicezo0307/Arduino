int ledGreen = 8;
int ledRed = 9;
String command;
int color;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello");
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.toLowerCase();
    if (command == "all on") {
      digitalWrite(9, 1);
      digitalWrite(8, 1);
      Serial.println("Green && Red : On");
    }
    else if (command == "all off") {
      digitalWrite(9, 0);
      digitalWrite(8, 0);
      Serial.println("Green && Red : Off");
    }
    if (command == "red") color = 1;
    else if (command == "green") color = 2;

    if (command == "on" && color == 1) digitalWrite(9, 1);
    else if (command == "off" && color == 1) digitalWrite(9, 0);
    else if (command == "on" && color == 2) digitalWrite(8, 1);
    else if (command == "off" && color == 2) digitalWrite(8, 0);

    if (color == 1) Serial.println("Red :" + command);
    else if (color == 2) Serial.println("Green :" + command);
    else Serial.print("");
  }
}
