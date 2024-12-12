#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD initialization (16x2)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Servo initialization
Servo myservo;

// Pin definitions
const int potPin = A0; // Analog pin for potentiometer
const int servoPin = 9; // PWM pin for servo motor

// Variables
int potValue = 0;     // Raw potentiometer value
float pos = 0;        // Servo position

// Function prototypes
void displayMessage(const char* line1, const char* line2);
void controlServo(float angle, float step, int delayMs);

void setup() {
    // Initialize LCD
    lcd.init();
    lcd.backlight();

    // Initialize servo
    myservo.attach(servoPin);

    // Initialize serial communication
    Serial.begin(9600);

    // Display startup message
    displayMessage("Emergency Vent", "Tech Undefined");
    delay(4000);
}

void loop() {
    // Read and map potentiometer value
    potValue = analogRead(potPin);
    potValue = map(potValue, 0, 1023, 0, 180);

    // Log potentiometer value
    Serial.println(potValue);

    // Control logic based on potentiometer value
    if (potValue <= 30) {
        displayMessage("Spd:Fast Ang:100", "Breath cycle 4 sec");
        controlServo(100, 1, 15);
    } else if (potValue <= 60) {
        displayMessage("Spd:Fast Ang:110", "Breath cycle 4.43 sec");
        controlServo(110, 1, 15);
    } else if (potValue <= 90) {
        displayMessage("Spd:Fast Ang:120", "Breath cycle 3.53 sec");
        controlServo(120, 1, 15);
    } else if (potValue <= 120) {
        displayMessage("Spd:Slow Ang:100", "Breath cycle 5 sec");
        controlServo(100, 0.6, 15);
    } else if (potValue <= 150) {
        displayMessage("Spd:Slow Ang:110", "Breath cycle 5.5 sec");
        controlServo(110, 0.6, 15);
    } else if (potValue <= 180) {
        displayMessage("Spd:Slow Ang:120", "Breath cycle 6 sec");
        controlServo(120, 0.6, 15);
    }
}

// Display messages on the LCD
void displayMessage(const char* line1, const char* line2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
}

// Control the servo with specified parameters
void controlServo(float angle, float step, int delayMs) {
    // Move servo to target angle
    for (pos = 0; pos <= angle; pos += step) {
        myservo.write(pos);
        delay(delayMs);
    }

    // Return servo to starting position
    for (pos = angle; pos >= 0; pos -= step) {
        myservo.write(pos);
        delay(delayMs);
    }
}
