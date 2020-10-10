#define LED 9
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=20;i>=5;i--)
  {
    Serial.println(i);
    for(int j=0;j<20;j++)
    {
      digitalWrite(LED, HIGH);
      delay(i);
      digitalWrite(LED, LOW);
      delay(i * 3);
    }
    delay(500);
  }
}
