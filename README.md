# 🌱 Smart Irrigation System using IoT

An automated irrigation system that monitors soil moisture and environmental conditions to efficiently control water usage. This project uses sensors and visual indicators to make irrigation smart, responsive, and easy to monitor.

---

## 📌 Overview

The **Smart Irrigation System** automates watering based on real-time soil moisture levels. It reduces water wastage and ensures plants receive optimal hydration.  

The system also displays environmental data such as temperature and humidity, along with pump status, making it a complete monitoring solution.

---

## ⚙️ Features

- 🌿 **Soil Moisture Detection**
  - Detects moisture level in soil
  - Automatically determines whether watering is needed

- 💡 **RGB LED Status Indicator**
  - 🔵 **Blue** → Soil is Wet (Pump OFF)
  - 🔴 **Red** → Soil is Dry (Pump ON)

- 🌡️ **Environmental Monitoring**
  - Measures temperature and humidity using DHT11 sensor

- 📟 **OLED Display Output**
  - Displays:
    - Temperature
    - Humidity
    - Pump Status (ON/OFF)

- 💧 **Automatic Water Pump Control**
  - Activates pump based on soil moisture threshold

---

## 🧠 Working Principle

1. The soil moisture sensor continuously reads soil condition.
2. Based on a predefined threshold:
   - If soil is **wet** → Pump is turned **OFF**
   - If soil is **dry** → Pump is turned **ON**
3. RGB LED indicates the soil condition visually.
4. DHT11 sensor measures temperature and humidity.
5. OLED displays:
   - Temperature
   - Humidity
   - Pump status in real-time.

---

## 🛠️ Components Used

- Microcontroller (Arduino / ESP32)
- Soil Moisture Sensor
- DHT11 Temperature & Humidity Sensor
- RGB LED
- OLED Display (SSD1306)
- Water Pump
- Relay Module
- Connecting Wires
- Power Supply

---

## 🔌 Circuit Connections

- Soil Sensor → Analog Pin  
- DHT11 → Digital Pin  
- RGB LED → PWM Pins  
- OLED → I2C (SDA, SCL)  
- Relay Module → Digital Pin  
- Pump → Relay Output  

---

## 🖥️ Sample Output (OLED)

Temperature: 28°C  
Humidity: 65%  
Pump: ON  

---

## 🚀 Applications

- Smart Agriculture  
- Home Gardening  
- Water Conservation  
- Greenhouse Automation  

---

## 📈 Future Improvements

- IoT integration (Blynk / Mobile App)
- Cloud data logging
- Weather-based irrigation
- AI-based optimization

---

## 🧑‍💻 Author

MAHI AHALAWAT
