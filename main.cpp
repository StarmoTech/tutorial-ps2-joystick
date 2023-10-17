int X_osa = A0; //varijabla za X osu
int Y_osa = A1; // varijabla za Y osu
int buttonPin = 7; // Varijabla za dugme

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int xVal = analogRead(X_osa);
  int yVal = analogRead(Y_osa);
  int buttonVal = digitalRead(buttonPin);

  Serial.print("X = ");
  Serial.print(xVal);

  Serial.print("    Y = ");
  Serial.print(yVal);

  Serial.print("    Button = ");
  Serial.println(buttonVal);

  delay(2000);
}
