#include <Servo.h>

Servo myservo;  // Create servo object

const int button = 2;  // Button connected to pin 2
const int dcm = 8;
const int motor = 3;   // Servo connected to pin 3

int pos = 90;  // Store servo position

void setup() {
  pinMode(motor, OUTPUT);
  myservo.attach(motor);   // Attach servo to pin 3
  myservo.write(pos);      // Set initial servo position to 90°
}

void loop() {
    
    myservo.write(90);
    delay(3000);
    myservo.write(0);
    delay(9000);
}
