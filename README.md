PIR Motion Sensor with Arduino Uno R3

This project demonstrates how to interface a PIR (Passive Infrared) motion sensor with an Arduino Uno R3 to detect movement and trigger an LED. When the PIR sensor detects motion, the LED turns on for one second, and a "Motion detected" message is printed on the Serial Monitor. If no motion is detected, the LED remains off, and "Motion not detected" is displayed.

Hardware Components

Arduino Uno R3

PIR motion sensor module

LED

Jumper wires

Breadboard

How It Works

The PIR sensor continuously monitors infrared radiation in its range.

When motion is detected (digitalRead returns HIGH), the LED turns on, and a detection message is sent via Serial.

When no motion is detected (digitalRead returns LOW), the LED turns off, and a no-motion message is displayed.

Pin Connections
Component	Arduino Pin
PIR Sensor OUT	9
LED (+)	13
VCC (PIR)	5V
GND (PIR & LED)	GND
Applications

Home security systems

Automatic lighting

Intrusion detection

Circuit Diagram
![PIR Motion Sensor Circuit Diagram](C:\Users\ocdga\Desktop\images\PIR-Sensor Circuit diagram.png)


(Place PIR_Circuit_Diagram.png in the same repo folder as this README)

YouTube Demonstration

🔗 Watch the project in action on YouTube
