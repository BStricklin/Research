int volt;
int out1 = DAC0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogWriteResolution(12);
  volt = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
    volt = Serial.parseInt();
    if (volt >4095)
    {
      volt = 4095;
    }
    if (volt < 0)
    {
      volt = 0;
    }
    Serial.println(volt);
  }
  analogWrite(out1,volt);
  analogWrite(DAC1,volt);
}
