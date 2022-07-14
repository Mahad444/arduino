int led=4;
int relay=4;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(relay,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
digitalWrite(relay,HIGH);
delay(1000);

digitalWrite(led,LOW);
digitalWrite(relay,LOW);

}
