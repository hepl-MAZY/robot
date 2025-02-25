# 🚗 Line Following Robot - Projet Robotique 2025

This repository contains the source code, documentation, and schematics for our **line-following robot** developed as part of the **Projet Robotique 2025**.

## 📌 Project Overview
The goal of this project is to design and build a **line-following robot** using an **Arduino Mega 2560**, multiple sensors, and motor drivers. The robot is capable of:
- **Following a predefined track** using QTR-MD-01A line sensors.
- **Avoiding obstacles** using an ultrasonic sensor (HC-SR04).
- **Controlling movement and speed** using DRV8871 motor drivers.
- **Playing voice messages** via the JQ6500 audio module.
- **Remote monitoring via Bluetooth** using the HM10 module.
- **Pushing objects** using a servo-driven mechanical arm.

---

## 🛠️ Hardware Components
| Component                | Functionality |
|--------------------------|--------------|
| **Arduino Mega 2560**    | Microcontroller to control all components. |
| **HC-SR04**              | Ultrasonic sensor for obstacle detection. |
| **QTR-MD-01A**           | Line sensor for path following. |
| **DRV8871**              | Motor driver for left and right motors. |
| **MGR946R**              | Servomotor for the robotic arm. |
| **JQ6500**               | MP3 audio module for voice messages. |
| **HM10**                 | Bluetooth module for wireless control. |

---

## 📂 Repository Structure

- [**functions/**](functions) - Modular functions for different components
  - [bluetooth_module/](functions/bluetooth_module) - Bluetooth communication functions
  - [driver_motor/](functions/driver_motor) - Motor control functions
  - [lineFollower_sensor/](functions/lineFollower_sensor) - Line-following sensor logic
  - [servo_mechanical_arm/](functions/servo_mechanical_arm) - Servo control functions
  - [ultrasonic_sensor/](functions/ultrasonic_sensor) - Obstacle detection functions
  - [vocal_module/](functions/vocal_module) - MP3 audio module functions

- [**mainloop/**](mainloop) - Main robot control logic

- [**docs/**](docs) - Documentation, schematics, and reports
  - [Bloc Diagram.pdf](docs/Bloc%20Diagram.pdf) - System block diagram

- [**.github/workflows/**](.github/workflows) - GitHub Actions for CI/CD
  - [arduino-build.yml](.github/workflows/arduino-build.yml) - Automated Arduino build tests

- [README.md](README.md) - Project documentation  
- [.gitignore](.gitignore) - Ignore unnecessary files

---

## 📖 References
- [Arduino Mega 2560 Datasheet](https://www.arduino.cc/en/Main/ArduinoBoardMega2560)
- [HC-SR04 Ultrasonic Sensor Guide](https://components101.com/ultrasonic-sensor-working-pinout-datasheet)
- [DRV8871 Motor Driver](https://www.ti.com/lit/ds/symlink/drv8871.pdf)
- [QTR-MD-01A Line Sensor](https://www.pololu.com/product/4241)
- [HM10 Bluetooth Module](https://www.electronicoscaldas.com/datasheet/HM-10-datasheet.pdf)

