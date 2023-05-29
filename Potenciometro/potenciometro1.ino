const int pinPot = A5;
const int pinBuzzer = 8;
const int time = 70;

void setup(){
	pinMode(pinBuzzer, OUTPUT);
  	pinMode(pinPot, INPUT);
    Serial.begin(9600);
}

void loop(){
	int potValue = analogRead(pinPot);
    int frequency = map(potValue, 0, 1023,0,2500);
    float volt = potValue * (5.00/1023.0);
  
  Serial.print("P = ");
  Serial.print(potValue);
  Serial.print(" | F = ");
  Serial.println(frequency);
  
  tone(pinBuzzer, frequency, time);
}