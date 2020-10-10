#define LED1 9
#define LED2 10
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop() {
  //LED1 lit up in 1 Hz frequency (1000 ms / round)
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
  //LED2 lit up in 2 Hz frequency (500 ms / round)
  digitalWrite(LED2, HIGH);
  delay(250);
  digitalWrite(LED2, LOW);
  delay(250);
}
