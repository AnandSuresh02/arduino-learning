void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  // put your setup code here, to run once:

}


void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH);
delay(250);
digitalWrite(9,HIGH);
delay(250);
digitalWrite(10,HIGH);
delay(250);
digitalWrite(11,HIGH);
delay(250);
digitalWrite(8, LOW);
delay(750);
digitalWrite(9, LOW);
delay(750);
digitalWrite(10, LOW);
delay(750);
digitalWrite(11, LOW);
delay(750);
}
