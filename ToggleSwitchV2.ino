int switchPin = 2;
int switchValue;
String onOrOff;
String cocatenatedResult;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(switchPin, INPUT);
digitalWrite(switchPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
switchValue = digitalRead(switchPin);

if(switchValue == 0){
  onOrOff = "";
  onOrOff = "ON";
}
if(switchValue == 1){
  onOrOff = "";
  onOrOff = "OFF";
}

cocatenatedResult = "Your button is: " + onOrOff;

Serial.println(cocatenatedResult);
delay(dt);


}
