// Define LED pins
const int ledPins[] = {2, 3, 4, 5};
const int numLeds = 4;

// Define button pin
const int buttonPin = 6;

// Variable to store button state
int buttonState = 0;
int lastButtonState = HIGH;  // Variable to store previous button state

void setup() {
  // Set LED pins as output
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
  // Set button pin as input
  pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up resistor
  
  // Initialize random seed
  randomSeed(analogRead(0));
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Check if button state has changed (button is pressed)
  if (buttonState == LOW && lastButtonState == HIGH) {
    // If button is pressed, continuously flash LEDs
    while (digitalRead(buttonPin) == LOW) {
      // Randomly select number of LEDs to turn on (1 to numLeds)
      int numOn = random(1, numLeds + 1);
      
      // Turn on selected LEDs
      for (int i = 0; i < numOn; i++) {
        int ledIndex = random(0, numLeds);  // Randomly select an LED
        digitalWrite(ledPins[ledIndex], HIGH); // Turn on the LED
      }
      
      delay(50);  // Wait for 50 milliseconds
      
      // Turn off all LEDs
      for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], LOW); // Turn off the LED
      }
      
      delay(50);  // Wait for 50 milliseconds
    }
  }

  // Store current button state
  lastButtonState = buttonState;
}

