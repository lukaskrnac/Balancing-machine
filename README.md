# Balancing-machine
Diy Arduino-based balancing machine and Windows application

This project is designed as an open-source solution for DIY enthusiasts who want to build their own tabletop wheel balancer. The balancer is based on the **Arduino** platform, using a **load cell sensor**, and comes with a **Windows application** for data visualization and assistance in the balancing process.

---

## 🚗 Features
- **Easy to use:** Compact, portable design suitable for table use.
- **Windows application:** Intuitive interface for real-time data visualization.
- **Open-source:** Freely available for DIYers and tech enthusiasts.

---

## 🛠️ Hardware

### Components List
1. **Arduino (e.g., Arduino Uno or Nano)**  
2. **Load cell sensor (10kg)**  
3. **HX711 (load cell amplifier)**  
4. **Magnetic encoder (AS5600)**  
7. **Bearings and wheel support structure**  
8. **Chassis (3D-printed, metal frame, or wooden construction)**  
9. Various wires and connectors.

---

## 💻 Software

### Arduino Firmware
The firmware is written in C++ and is compatible with the Arduino IDE. It handles measurements from the sensor and communicates with the Windows application via a serial connection.

### Windows Application
The application is developed in C# (.NET). It visualizes measured values and provides tools for proper wheel balancing.

---

## 🔧 Installation

### Hardware Setup
1. Connect the load cell to the HX711 according to the wiring diagram.  
2. Connect the HX711 to the Arduino (DATA and CLK pins).  
3. Connect the magnetic encoder to the Arduino.  
4. Assemble all components into the chassis.  
5. Ensure the entire system is securely built.

### Software Setup
1. Clone this repository
2. Upload the firmware to the Arduino using the Arduino IDE.
3  Install the Windows application by following the instructions in the app/ directory.

### 📖 Usage

1. Connect the device to your computer via USB.  
2. Launch the application on your PC.  
3. Place a wheel on the device and spin the wheel to the desired speed.  
4. Observe the values on the screen and add/remove weights as needed.

### 🧾 License
This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and share it.

### 💡 Contributions
We welcome your contributions! If you have ideas for improvements, open an issue or submit a pull request.

