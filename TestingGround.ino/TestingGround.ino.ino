// Arduino Mega using all four of its Serial ports 
// (Serial, Serial1, Serial2, Serial3), 
// with different baud rates:

void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
}

char rec;
char let = 'A';

void loop() {

  Serial1.write(let);
  delay(1000);
  rec = Serial.read();
  Serial.println("Test");
  Serial.println(rec);

}
