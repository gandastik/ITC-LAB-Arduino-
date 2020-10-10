#define RED 9
#define BLUE 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(A0);
  Serial.println(temp);
  if(temp == 0)
  {
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
  }
  else if(temp == 1023)
  {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, HIGH);
  }
}
