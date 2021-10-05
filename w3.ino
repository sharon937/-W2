void setup() {
  Serial.begin(115200);
  pinMode(13, INPUT);

  ledcSetup(0, 5000, 8);
  ledcAttachPin(14, 0);
}

void loop() {
  int input = analogRead(13);
  int inputmap = map(input, 0, 600, 255, 0);
  ledcWrite(0,inputmap);
  Serial.println(inputmap);
  }
