int sensorpin=2;
int sensorvalue;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin,INPUT);
  Serial.begin(9600);
  

}
/
void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue=digitalRead(sensorpin);
  Serial.print("sensorpin");
  Serial.println(sensorvalue);
  
  

}
