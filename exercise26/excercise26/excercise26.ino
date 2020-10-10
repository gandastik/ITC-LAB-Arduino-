void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(UV, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(A1);
  Serial.println(temp);
}
