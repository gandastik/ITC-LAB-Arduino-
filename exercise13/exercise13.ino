#define LED1 9
#define LED2 10
#define LED3 11
#define LED4 12
#define LED5 13
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
}

void loop() {
  // put your main code here, to run repeatedly
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    delay(100);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED5, LOW);
    delay(100);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
}
