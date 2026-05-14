#include <Servo.h>   // Library for controlling servo motors

// Create servo objects for 6 servos
Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setup() {

  // Initialize serial communication for debugging/output
  Serial.begin(9600);

  // Attach servos to Arduino digital pins
  servo1.attach(8);   
  servo2.attach(9);   
  servo3.attach(10);  
  servo4.attach(11);  
  servo5.attach(12);  
  servo6.attach(13);  
}

void loop() {

  // Read analog values from potentiometers
  int analogValue1 = analogRead(A0);
  int analogValue2 = analogRead(A1);
  int analogValue3 = analogRead(A2);
  int analogValue4 = analogRead(A3);
  int analogValue5 = analogRead(A4);

  // Convert potentiometer values into servo angles
  int angle1 = map(analogValue1, 0, 1023, 0, 90);

  // Reverse motion for second servo
  int angle2 = map(analogValue1, 0, 1023, 90, 0);

  int angle3 = map(analogValue2, 0, 1023, 0, 180);
  int angle4 = map(analogValue3, 0, 1023, 0, 180);
  int angle5 = map(analogValue4, 0, 1023, 0, 180);
  int angle6 = map(analogValue5, 0, 1023, 0, 180);

  // Rotate servos to calculated angles
  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);
  servo5.write(angle5);
  servo6.write(angle6);

  // Print analog readings and servo angles to Serial Monitor for debugging
  
  Serial.print("Analog1: ");
  Serial.print(analogValue1);

  Serial.print(", Angle1: ");
  Serial.print(angle1);

  Serial.print(", Angle2: ");
  Serial.print(angle2);

  Serial.print(" | Analog2: ");
  Serial.print(analogValue1);

  Serial.print(", Angle3: ");
  Serial.print(angle3);

  Serial.print(" | Analog3: ");
  Serial.print(analogValue2);

  Serial.print(", Angle4: ");
  Serial.print(angle4);

  Serial.print(" | Analog4: ");
  Serial.print(analogValue3);

  Serial.print(", Angle5: ");
  Serial.print(angle5);

  Serial.print(" | Analog5: ");
  Serial.print(analogValue4);

  Serial.print(", Angle6: ");
  Serial.print(angle6);

  Serial.print(" | Analog6: ");
  Serial.print(analogValue5);

  // Small delay for stable servo movement
  delay(100);
}
