# Intelligent Embedded System for Monitoring and Analysis of Electrocardiographic Signals - 2022 🩺💻

[![Made With](https://img.shields.io/badge/Made%20with-Python%2C%20TensorFlow%2C%20ESP32-blue)](https://shields.io/)
[![University](https://img.shields.io/badge/University-IUT-orange)]()

---

## 📚 Table of Contents

- [About The Project](#about-the-project)
- [Project Components](#project-components)
  - [Model Development](#model-development)
  - [Hardware Implementation](#hardware-implementation)
  - [Software Integration](#software-integration)
  - [Validation and Testing](#validation-and-testing)
- [How to Use](#how-to-use)

---

## 📖 About The Project

This repository contains the implementation of an intelligent embedded system for real-time monitoring and analysis of electrocardiographic (ECG) signals. The system leverages machine learning and embedded hardware to detect abnormalities in ECG data and issue warnings for potential heart-related risks. Developed as part of a project at **[Your Institution Name]**, it integrates **Python**, **TensorFlow Lite**, **ESP32**, and **Django** to provide a robust solution for healthcare applications.

---

## 📝 Project Components

### Model Development

This section covers the machine learning components used for ECG signal analysis:

| Component | Description |
|-----------|-------------|
| **Dataset** | Utilizes the ECG5000 dataset (5000 records) for training and testing anomaly detection models. |
| **Preprocessing** | Normalizes and splits ECG data for model training, including noise reduction and feature extraction. |
| **Algorithm** | Implements a neural network for anomaly detection, optimized for embedded deployment. |
| **Model Output** | Converts the trained model to TensorFlow Lite (tflite) format for efficient execution on the ESP32. |

> 📄 Detailed code and datasets are available in the [Model directory](https://github.com/ARSH2001/Embedded-systems/tree/main/Model).

### Hardware Implementation

This section details the hardware components used in the system:

| Component | Description |
|-----------|-------------|
| **ESP32 Module** | Employs the ESP32 microcontroller for processing and communication tasks. |
| **ECG Sensor** | Captures heart muscle signals for real-time monitoring. |
| **Development Environment** | Uses Arduino IDE, ESP-IDF, or PlatformIO for programming the ESP32. |
| **Wi-Fi Communication** | Connects the ESP32 to a server via Wi-Fi for data transmission. |

> 📄 Hardware schematics and setup instructions are available in the [Hardware directory](https://github.com/ARSH2001/Embedded-systems/tree/main/Hardware).

### Software Integration

This section describes the software components for data handling and user interaction:

| Component | Description |
|-----------|-------------|
| **API** | Backend API built with Django REST Framework to manage ECG data and alerts. |
| **Telegram Bot** | Provides real-time notifications and access to patient records via Telegram. |

> 📄 API documentation and bot setup are available in the [Software directory](https://github.com/ARSH2001/Embedded-systems/tree/main/Software).

### Validation and Testing

This section outlines the validation and testing procedures:

| Component | Description |
|-----------|-------------|
| **Validation** | Tests the system with real-time ECG data to ensure accurate anomaly detection. |
| **Testing** | Evaluates model performance and hardware reliability under various conditions. |

> 📄 Test results and validation scripts are available in the [Validation directory](https://github.com/ARSH2001/Embedded-systems/tree/main/Validation).

---

## 🚀 How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/ARSH2001/Embedded-systems.git
   cd Embedded-systems
2. Install required dependencies
3. Set up the ESP32 development environment:
   - Install Arduino IDE, ESP-IDF, or PlatformIO.
   - Flash the ESP32 with the provided firmware.
4. Convert the trained model to TensorFlow Lite:
   - Follow the scripts in the Model directory.
5. Set up the Django backend:
   ```bash
      python manage.py runserver
6. Configure and run the Telegram bot:
   - Update the bot token and settings in the Software directory.
7. Run the system to monitor ECG signals and receive alerts.
---
## 📚 References

- [TensorFlow Lite for ESP32](https://github.com/atomic14/tensorflow-lite-esp32)
- [ESP32 HTTP POST/GET Requests](https://randomnerdtutorials.com/esp32-http-get-post-arduino/)
- [ECG5000 Dataset](https://timeseriesclassification.com/description.php?Dataset=ECG5000)
- [ECG Signal Processing GitHub](https://github.com/pr1266/iot_ECG_signals_process/blob/master/ecg.csv)
