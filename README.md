Achieved ~100% accuracy in helmet detection using IR sensor, ensuring ignition lock compliance.
Detected alcohol consumption with ~100% accuracy using MQ-3 sensor, effectively preventing drunk-driving scenarios.
Implemented vibration-based accident detection with <5 sec alert response time using GSM module.
Gained hands-on experience in embedded systems, sensor integration, and IoT-based safety solutions.

# Smart-Helmet
IoT-based Smart Helmet designed to enhance two-wheeler safety by enforcing helmet usage, detecting alcohol consumption, and identifying accidents in real time. Uses Arduino, IR, MQ-3, vibration sensor, and GSM module to send instant emergency alerts.

# IoT-Based Smart Helmet for Accident Detection & Prevention

## 📌 Overview
The IoT-Based Smart Helmet is a safety-focused project designed to reduce two-wheeler accidents and fatalities by enforcing safe riding practices and providing immediate emergency assistance. The system integrates multiple sensors with an Arduino microcontroller to monitor helmet usage, detect alcohol consumption, and identify accidents in real time. In case of an emergency, alerts are automatically sent to emergency contacts, hospitals, and police stations using GSM communication.

## 🚀 Features
- Helmet Detection using IR sensor to ensure the rider is wearing the helmet
- Ignition Lock mechanism that prevents bike start without helmet
- Alcohol Detection using MQ-3 sensor to stop drunk driving
- Accident Detection using vibration sensor (SW-420)
- Automatic Emergency Alerts via GSM module (SIM900D)
- Continuous monitoring during the ride

## 🛠️ Hardware Components
- Arduino Microcontroller
- IR Obstacle Sensor
- MQ-3 Alcohol Sensor
- SW-420 Vibration Sensor
- GSM Module (SIM900D)
- Relay Module
- Power Supply

## 💻 Software & Tools
- Arduino IDE
- Embedded C
- GSM Libraries
- Sensor Libraries

## ⚙️ Working Principle
1. IR sensor checks if the helmet is worn.
2. MQ-3 sensor detects alcohol in the rider’s breath.
3. If conditions are safe, ignition is enabled.
4. Vibration sensor detects accidents based on threshold values.
5. GSM module sends emergency SMS alerts to predefined contacts.

## 📊 Results
The system successfully detects unsafe riding conditions and sends real-time alerts during accidents, improving response time and rider safety.

## 🔮 Future Enhancements
- Solar-powered helmet
- Drowsiness detection system
- Fog-clearing visor
- Built-in mobile charging port
