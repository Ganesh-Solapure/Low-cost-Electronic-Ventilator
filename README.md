# Low-Cost Electronic Ventilator using Arduino

This project is a low-cost electronic ventilator designed for medical emergencies, especially in resource-constrained environments. The device automates the compression and release of a plastic respiratory bag (Ambu bag) using a servo motor controlled by an Arduino, ensuring consistent airflow delivery to patients in need of respiratory assistance.

---

## 🌟 **Project Highlights**
- **Cost-Effective Design**: Uses affordable and readily available components.
- **Microcontroller-Based**: Built on the Arduino platform, ensuring reliability and ease of development.
- **Real-Time Monitoring**: Features a 16x2 LCD to display operational messages and runtime data.
- **User-Friendly Interface**: Simple hardware and software setup for rapid deployment.
- **Scalable**: Can be enhanced with additional features such as pressure sensors and Wi-Fi monitoring.

---

## 📃 **Features**
1. **Automated Ventilation**:
   - The servo motor mimics a breathing cycle by compressing and releasing the Ambu bag.
   - Breathing frequency and volume can be adjusted by modifying the code.
2. **LCD Feedback**:
   - Displays critical messages such as "Hello, World!" and runtime statistics.
   - Helps users monitor device operation in real time.
3. **Compact and Portable**:
   - Designed to be lightweight for ease of transport and deployment.

---

## 🛠️ **Components Required**
1. **Microcontroller**: Arduino Uno (or equivalent).
2. **Servo Motor**: (e.g., SG90 or MG996R).
3. **Display**: LiquidCrystal LCD (16x2).
4. **Respiratory Bag**: Manual Ambu bag.
5. **Power Supply**: USB or battery for Arduino.
6. **Miscellaneous**:
   - Jumper wires
   - Breadboard
   - Resistors (as needed)
   - Plastic or 3D-printed frame for holding components.

---

## ⚙️ **Hardware Setup**
1. **Connect the LCD**:
   - Use the `rs`, `en`, `d4`, `d5`, `d6`, and `d7` pins to connect the LCD to the Arduino.
   - Refer to the `LiquidCrystal` library for pin assignments.
2. **Attach the Servo Motor**:
   - Connect the signal pin of the servo motor to pin 9 on the Arduino.
   - Power the servo motor using an external power supply if required.
3. **Fix the Ambu Bag**:
   - Secure the Ambu bag using a frame and position the servo motor to automate compression.
4. **Final Assembly**:
   - Mount all components securely on a base.

---

## 🖥️ **Software Setup**
1. **Install Arduino IDE**:
   - Download the latest Arduino IDE from the [official website](https://www.arduino.cc/en/software).
2. **Add Libraries**:
   - Ensure `Servo.h` and `LiquidCrystal.h` libraries are installed.
   - These libraries handle motor control and LCD interaction, respectively.
3. **Upload Code**:
   - Use the code provided in this repository (`ventilator_code.ino`) and upload it to the Arduino using the IDE.
4. **Calibrate the Device**:
   - Adjust servo motor positions and timings (degrees and delays) as per patient needs.

---

## 📋 **Step-by-Step Guide**
1. **Circuit Assembly**:
   - Follow the provided circuit diagram (add it as an image in the repository) to wire up the components.
2. **Code Upload**:
   - Open the `.ino` file in the Arduino IDE, verify the code, and upload it to your Arduino board.
3. **Test the System**:
   - Power on the Arduino and observe the servo motor compressing the bag.
   - Check the LCD for real-time updates.
4. **Adjust Parameters**:
   - Modify variables in the code for breathing rate and motor speed.
5. **Deploy**:
   - Ensure the device operates smoothly and is ready for real-world use.

---

## 🚀 **Future Enhancements**
- **Pressure Monitoring**:
  - Integrate pressure sensors for real-time feedback on ventilation efficiency.
- **Advanced Display**:
  - Upgrade to an OLED or graphical LCD for better data visualization.
- **Wi-Fi Control**:
  - Use an ESP8266/ESP32 module for remote monitoring and control via a mobile app or web interface.
- **Battery Backup**:
  - Add a rechargeable battery to ensure continuous operation during power outages.

---

## ⚖️ **License**
This project is licensed under the Apache License 2.0. See the [LICENSE](./LICENSE) file for details.

---

## 🤝 **How to Contribute**
Contributions to improve this project are highly appreciated. Here’s how you can contribute:
1. Fork the repository.
2. Create a new branch (`feature-new-enhancement`).
3. Commit your changes and push the branch.
4. Submit a pull request for review.

---

## 📬 **Contact**
- **Author**: Ganesh Solapure  
- **GitHub**: [Ganesh-Solapure](https://github.com/Ganesh-Solapure)  
- **Email**: [Your Email Address] (if you wish to include this)  
Feel free to reach out with suggestions, feedback, or collaboration requests.

---

## 📷 **Gallery**
_(Add images or GIFs of your working prototype, including circuit setup and device in action.)_

---

## 📚 **References**
- Arduino Documentation: [https://www.arduino.cc](https://www.arduino.cc)
- Servo Motor Basics: [Servo Motors and Control](https://en.wikipedia.org/wiki/Servo_control)

