# Intelligent Embedded System for Monitoring and Analysis of Electrocardiographic Signals and Warning of Potential Risks

## Project Overview
This project develops an intelligent embedded system for monitoring electrocardiogram (ECG) signals and providing real-time warnings in case of abnormalities. The system is designed to aid healthcare professionals in the early detection of potential heart issues by analyzing ECG signals using embedded systems and machine learning algorithms.

## Sections

### 1. **Introduction**
Provide a brief introduction about the project's motivation, scope, and goals. Contributors can edit this section by updating the purpose of the project or any relevant background information.

- **How to Edit**: Update the background, motivation, and the intended impact of the system.

### 2. **Model**
   - **Dataset Used**: 
     - Include a summary of the dataset (ECG5000, 5000 records) and how it was used (training and testing).
     - **How to Edit**: Contributors can update this by adding new datasets or updating the current dataset description if new records are added or improvements are made.
   
   - **Data Preprocessing**: 
     - Explain the preprocessing steps taken to normalize and split the data.
     - **How to Edit**: Update the data processing techniques if new approaches are added, such as a new scaling method or data cleaning process.

   - **Algorithm**: 
     - Description of the neural network architecture used for anomaly detection.
     - **How to Edit**: If a new model is introduced or an existing one is modified, this section should be updated with the new algorithm and performance metrics.

   - **Model Output for Hardware**:
     - Explain how the model is converted to TensorFlow Lite (tflite) format for deployment.
     - **How to Edit**: Provide details on any changes in deployment or hardware-specific changes.

### 3. **Hardware**
   - **ESP32 Module**: 
     - Explanation of the ESP32 module and its capabilities.
     - **How to Edit**: Update any information about new versions of the ESP32 or if there are additional peripherals used in the system.

   - **ECG Sensor**: 
     - Description of the ECG sensor used to capture heart muscle signals.
     - **How to Edit**: Add details if new sensors are integrated or if specifications change.

   - **Development Environments**:
     - Instructions for setting up Arduino IDE, ESP-IDF, and platformIO for programming the ESP32.
     - **How to Edit**: Update this if new development environments are added or if installation steps change.

   - **Wi-Fi and Server Communication**:
     - Information about how the ESP32 connects to Wi-Fi and sends data to a server.
     - **How to Edit**: Contributors can update this if the network communication protocol changes or new libraries are added.

### 4. **Software**
   - **API**: 
     - Backend API built using Django REST Framework to handle ECG data and alerts.
     - **How to Edit**: Update API endpoints, add new routes, or adjust the request/response format.

   - **Telegram Bot**: 
     - Integration of the Telegram bot for real-time notifications.
     - **How to Edit**: Add new bot features or update command syntax if modifications are made to the bot functionality.

### 5. **Validation and Testing**
   - **Validation**:
     - Information on how the system is validated using real-time data.
     - **How to Edit**: Update this section with new testing methods or performance improvements.

---

## Installation

To set up the project locally, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/ARSH2001/Embedded-systems.git
   cd Embedded-systems
2. Install the required libraries and dependencies:
- For ESP32 development, use Arduino IDE, ESP-IDF, or platformIO.

4. Convert the trained model to TensorFlow Lite format (tflite).

5. Set up the Django backend and PostgreSQL:

- Install Python dependencies: pip install -r requirements.txt

6. Run the Django server and the Telegram bot.

--- 
# **Usage**
Once the system is set up, it will:

- Monitor ECG signals from the sensor.
- Alert healthcare professionals when abnormalities are detected.
- Provide real-time access to patient records and reports via the Telegram bot.
--- 
# **References**

- [TensorFlow Lite for ESP32](https://github.com/atomic14/tensorflow-lite-esp32)
- [ESP32 HTTP POST/GET Requests](https://randomnerdtutorials.com/esp32-http-get-post-arduino/)
- [ECG5000 Dataset](https://timeseriesclassification.com/description.php?Dataset=ECG5000)
- [ECG Signal Processing GitHub](https://github.com/pr1266/iot_ECG_signals_process/blob/master/ecg.csv)


