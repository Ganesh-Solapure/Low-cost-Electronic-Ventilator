# Low-Cost Electronic Ventilator

This project demonstrates a simple and affordable electronic ventilator prototype designed for educational or emergency use. It utilizes readily available components and an Arduino board to control a servo motor and display real-time information on an LCD screen.

## Features

* **Servo-Controlled Ventilation:** Adjusts a servo motor to simulate breathing cycles.
* **Potentiometer-Based Speed Control:** Manually control the speed and angle of the servo.
* **LCD Display:** Provides real-time feedback on speed, angle, and breathing cycle duration.
* **Cost-Effective Components:** Uses readily available electronics for affordability.

## Components Required

* **Arduino Board:** Any compatible board (e.g., Uno, Nano)
* **Servo Motor:** Standard servo motor (e.g., SG90, MG995)
* **Potentiometer:** 10kΩ potentiometer for user control
* **LCD Display:** 16x2 I2C LCD module
* **Connecting Wires:** Male-to-male and male-to-female jumper wires
* **Breadboard:** (Optional, for prototyping)
* **Power Supply:** 5V power supply for Arduino and servo

## Getting Started

### Hardware Setup

1. Connect the servo motor to pin 9 of the Arduino.
2. Connect the potentiometer to analog pin A0.
3. Connect the I2C LCD module to the appropriate I2C pins on the Arduino (SDA and SCL). Refer to your module's documentation.
4. Power the system using a 5V supply or the Arduino's USB power.

### Software Setup

1. Install the required Arduino libraries:
   - Servo.h
   - LiquidCrystal_I2C.h (Download from here if not already present: https://github.com/Freetronics/LiquidCrystal_I2C)
2. Upload the provided code to your Arduino board.

## Usage

1. Power on the system.
2. Adjust the potentiometer to control ventilation parameters:
   - Speed (Fast/Slow)
   - Angle (100°, 110°, or 120°)
   - Breathing cycle duration (4-6 seconds)
3. Observe real-time feedback on the LCD screen.

## Code Explanation

The code uses the following functionalities:

* **Servo Control:** Drives the servo motor in a cyclical pattern to simulate ventilation.
* **LCD Display:** Provides status updates based on potentiometer input.
* **Potentiometer Input:** Maps analog readings to servo angle and operational parameters.

**Key Functions:**

* `displayMessage(line1, line2)`: Updates the LCD with specific messages.
* `controlServo(angle, step, delayMs)`: Controls servo position and speed based on parameters.

## Demonstration

A sample operation:

- Potentiometer set to low value:
    - Speed: Fast
    - Angle: 100°
    - Cycle Duration: 4 seconds
- Potentiometer set to high value:
    - Speed: Slow
    - Angle: 120°
    - Cycle Duration: 6 seconds

## Future Enhancements

* Integration of sensors for automated control based on real-time data.
* Incorporation of wireless modules for remote monitoring.
* Expansion to manage multiple ventilation cycles.

## License

This project is open-source and licensed under the MIT License.

## Acknowledgments

Special thanks to the open-source community and the creators of the utilized libraries.
