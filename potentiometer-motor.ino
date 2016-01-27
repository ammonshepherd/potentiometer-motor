const int sensorPin = 0;  // Analog input pin
const int motorPin = 9;   // Control motor from pin 9


void setup() {
  pinMode(motorPin, OUTPUT); // Set up the motor pin to be an output:

  Serial.begin(9600);  // Set up the serial port:
}

void loop() {
 int speed;

 int sensorValue = analogRead(sensorPin);
 Serial.print("Sensor value:");
 Serial.print(sensorValue);

 if (sensorValue < 20)
 {
   speed = 0;
 }
 else
 {
   speed = constrain(map(sensorValue, 0, 1023, 50, 255), 50, 255);
 } 
 analogWrite(motorPin, speed);

 Serial.print(" Speed: ");
 Serial.println(speed);

}
