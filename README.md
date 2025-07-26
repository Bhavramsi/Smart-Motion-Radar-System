# Smart-Motion-Radar-System
Based on your uploaded PDF report on **“Echo Sweep: Smart Motion Radar System”**, here is a detailed `README.md` file formatted for GitHub or other project documentation platforms.

---


# 🔍 Echo Sweep: Smart Motion Radar System

## 🛰️ Overview

**Smart motion detection radar** built using **ESP32**, **HC-SR04 ultrasonic sensor**, and a **servo motor**, visualized using **Processing IDE**. The system simulates a rotating radar that scans its environment in real-time, detects object distance, and displays it graphically in a radar-style interface.

This project was built as part of the IoT Laboratory Course at **Dayananda Sagar College of Engineering** under the **Open Ended Project** initiative.

---

## 🛠️ Hardware Components

| Component           | Description                             |
|---------------------|-----------------------------------------|
| ESP32               | Microcontroller unit (Wi-Fi + BLE)      |
| HC-SR04             | Ultrasonic Distance Sensor              |
| SG90 Servo Motor    | Controls sensor sweep angle             |
| Jumper Wires        | For circuit connections                 |
| USB Cable           | ESP32 programming and power             |

---

## 🧰 Circuit Diagram

| Device             | ESP32 Pin Mapping   |
|--------------------|---------------------|
| HC-SR04 VCC        | 3.3V                |
| HC-SR04 GND        | GND                 |
| HC-SR04 TRIG       | GPIO 23             |
| HC-SR04 ECHO       | GPIO 22             |
| Servo Signal       | GPIO 21             |
| Servo VCC          | 5V                  |
| Servo GND          | GND                 |

---

## 📈 System Functionality

- **Servo Sweeping (15° to 165°):** Servo motor rotates the HC-SR04 sensor to scan the surroundings.
- **Distance Measurement:** HC-SR04 measures object distance at each angle.
- **Serial Communication:** Data in `angle,distance` format is sent to PC via serial port.
- **Real-Time Visualization:** Processing IDE reads the data and renders a **radar UI**, showing object blips.

---

## 🧪 Features

- 📡 Simulates a traditional rotating radar system
- 📈 Real-time distance data plotted in a polar chart
- 🔁 Bi-directional sweep (left to right and right to left)
- ⚙️ Processing-based GUI for radar simulation
- ⏱️ Range: Up to ~40cm for optimal performance

---



---

## 🖥️ Processing Visualization

* Reads serial input in `angle,distance` format
* Converts polar coordinates to 2D plot
* Draws sweeping radar line and object blips
* Creates a real-time radar interface like military radar displays

---

## ✅ Advantages

* 🔧 Simple and cost-effective design
* 👨‍🏫 Great for learning embedded systems and IoT basics
* 🎛️ Customizable sweep angles and speed
* 🧠 Interactive and visually intuitive output

---

## ⚠️ Limitations

* 📏 Limited range (\~40cm consistent accuracy)
* 🌧️ Environmental interference (e.g., sound-absorbing surfaces)
* 🛑 Cannot detect speed or direction of objects

---

## 🔮 Future Improvements

* Add **Bluetooth/Wi-Fi** support to send data wirelessly
* Use **2D LiDAR or multiple sensors** for 360° coverage
* Implement **object tracking and speed estimation**
* Add **buzzer or LED alerts** on close object detection

---

## 📚 References

1. ESP32 Technical Reference – Espressif Systems
2. Arduino HC-SR04 Sensor Tutorial
3. Processing Language Documentation
4. Servo Motor Basics – TutorialsPoint
5. Blynk & IoT ESP32 Resources

---


