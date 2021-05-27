// C++ code
//
int SensorValue = 0;
int ledDimming = 0;
int pwmPin = 9;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  SensorValue = analogRead(A0);
  Serial.print("PhotoResistor read = ");
  Serial.println(SensorValue);
  ledDimming = map(SensorValue, 700,925,0,255);
  if(ledDimming < 0) ledDimming = 0;
  analogWrite(pwmPin, ledDimming);
  delay(100);
}