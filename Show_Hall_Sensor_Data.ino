

int hall_1 = A0;
int hall_2 = A2;
int hall_3 = A4;
int count = 0;

unsigned long StartTime;
unsigned long CurrentTime;
unsigned long ElapsedTime;

double hall_value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  pinMode(hall_1, INPUT);
  pinMode(hall_2, INPUT);
  pinMode(hall_3, INPUT);
  StartTime = millis();

}

void loop() {
  // put your main code here, to run repeatedly:
  hall_value = analogRead(hall_1);
//  Serial.print("H1: ");
//  Serial.print(hall_value);
  hall_value = analogRead(hall_2);
//  Serial.print("  H2: ");
//  Serial.print(hall_value);
  hall_value = analogRead(hall_3);
//  Serial.print("  H3: ");
//  Serial.print(hall_value);
//  Serial.print("  Count: ");
//  Serial.println(count);
  count = count + 1;
  if (count == 1000)
  {
    CurrentTime = millis();
    ElapsedTime = CurrentTime - StartTime;
    Serial.println(ElapsedTime);
    StartTime = millis();
    count = 0;
  }

}
