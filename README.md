# 💊 Smart Medication Dispenser

An **embedded system** project designed to solve medication non-adherence using automation, Bluetooth control, and Arduino-based dispensing.

> 🛠️ Built using **Arduino UNO**, **L298N Motor Driver**, **HC-05 Bluetooth**, **DC Motor**, and **Buzzer**  
> 📲 Mobile app integration for scheduling and real-time alerts via Bluetooth communication

---

## 🧠 Workflow Overview

This block diagram shows how the mobile app communicates with the embedded system via Bluetooth to control timed medicine dispensing using motor and buzzer components.

![Workflow](https://github.com/user-attachments/assets/70938988-89c4-4bc7-8c21-1a4890444a1a)

---

## 📦 Key Features

- 🔁 **Automated Motor Control** for timed pill dispensing
- 📱 **Bluetooth (HC-05)** integration with a mobile app interface
- 🔊 **Buzzer Alerts** to notify users when a dose is dispensed
- ⚙️ **L298N Motor Driver** for reliable control of motor direction and speed
- 💾 **Arduino-based Logic** programmed with flexible time intervals using serial commands

---

## 🧾 Components Used

A list of electronic components used to implement the smart dispenser prototype:

| Component           | Description                            |
|--------------------|----------------------------------------|
| **Arduino UNO**     | Main controller handling all logic     |
| **HC-05 Bluetooth** | Receives time interval from mobile app |
| **L298N Motor Driver** | Drives the DC motor for dispensing |
| **DC Motor**        | Controls the tray/wheel movement       |
| **Buzzer**          | Provides audio alert after dispensing  |
| **Power Adapter**   | External power supply (9V–12V)         |

---

## 📱 Mobile App Communication Flow

The mobile app allows caregivers or users to set the time interval between each dose. Here's how the communication works:

1. Enter the desired **time interval** (in seconds) in the app  
2. Send the command to **HC-05 Bluetooth** module  
3. Arduino receives and sets the interval  
4. The system activates the **motor and buzzer** accordingly  
5. Waits for the next interval before repeating

---

## ✅ System Results

Testing was conducted using both the **mobile app** and **serial interface**. The results confirmed:

- 📡 **Stable Bluetooth communication** using HC-05 module  
- ⚙️ **Precise motor rotation** to simulate medicine dispensing  
- 🔔 **Buzzer audio alerts** triggered after each cycle  
- 🧪 System performed reliably in **multiple test intervals** using both software and hardware simulations

---

## 🚀 Future Enhancements

To improve functionality and scalability, several upgrades are planned:

- 🌐 Replace HC-05 with **ESP32** for Wi-Fi & remote control
- 💊 Integrate a **multi-compartment carousel** for dispensing multiple medicines
- 🔒 Add **PIN/biometric authentication** for security
- 🔋 Add **battery backup or solar power**
- 📈 Enable **cloud logging** for remote monitoring of medicine intake history

---

## 🔌 Hardware Connections

This image displays the final assembled hardware setup including the Arduino board, L298N driver, DC motor, buzzer, and Bluetooth module.

![Connection image](https://github.com/user-attachments/assets/5ddb8f03-e493-4a18-a03c-fd3a338870e9)

---

## 📸 Project Demonstration

The following images showcase the **working prototype**, including the display output, motor operation, mobile app transmission, and buzzer alert in action.

| Output Demo | Description |
|-------------|-------------|
| ![O1](https://github.com/user-attachments/assets/c922a148-475f-44b9-b3a3-d12759703341) | Arduino received time interval via Bluetooth |
| ![O2](https://github.com/user-attachments/assets/ef010023-077f-4b51-8ef0-fcbfee1e2c0a) | Motor dispensing wheel rotated for 1 second |
| ![O3](https://github.com/user-attachments/assets/f794976b-6982-4ec5-8b64-bbee1a1aa56f) | Buzzer beeps after successful dispense |
| ![O4](https://github.com/user-attachments/assets/a38a32ad-b690-464a-8d46-24bc12edacd6) | Mobile app UI for sending interval data |

---
