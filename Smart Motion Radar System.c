// Include the ESP32-compatible Servo library
#include <ESP32Servo.h>
// Define pin numbers for the ultrasonic sensor
#define trigPin 5 // Trigger pin of the ultrasonic sensor
#define echoPin 4 // Echo pin of the ultrasonic sensor
// Variables to store distance calculation
long duration;
int distance;
// Create a Servo object to control the servo motor
Servo myservo;
- 3 -
// Function to calculate distance using the HC-SR04 sensor
int calculateDistance() {
digitalWrite(trigPin, LOW); // Clear the trigger pin
delayMicroseconds(2); // Wait for 2 microseconds
digitalWrite(trigPin, HIGH); // Send a 10 microsecond pulse
delayMicroseconds(10);
digitalWrite(trigPin, LOW); // Turn off the trigger pin
duration = pulseIn(echoPin, HIGH); // Read the duration of the echo pulse
distance = duration * 0.034 / 2; // Convert time to distance (cm)
return distance; // Return the distance
}
void setup() {
pinMode(trigPin, OUTPUT); // Set trigger pin as output
pinMode(echoPin, INPUT); // Set echo pin as input
myservo.attach(13); // Attach servo to pin 13
Serial.begin(9600); // Start serial communication at 9600 baud
}
void loop() {
int i;
// Sweep servo from 15° to 165° while measuring distance
for (i = 15; i <= 165; i++) {
myservo.write(i); // Rotate servo to position i
delay(15); // Wait for servo to reach position
calculateDistance(); // Measure distance
Serial.print(i); // Print angle
erial.print(",");
- 4 -
Serial.print(distance); // Print distance
Serial.print("."); // Delimiter
}
// Sweep servo back from 165° to 15°
for (i = 165; i >= 15; i--) {
myservo.write(i); // Rotate servo to position i
delay(15); // Wait for servo to reach position
calculateDistance(); // Measure distance
Serial.print(i); // Print angle
Serial.print(",");
Serial.print(distance); // Print distance
Serial.print("."); // Delimiter
}
}
