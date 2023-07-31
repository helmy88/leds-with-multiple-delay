// Define the digital pins for the LEDs
const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// Define the ON times (in milliseconds) for each LED
const unsigned long onTimes[] = {1000, 2000, 3000, 4000, 5000};

// Variable to track the currently active LED
int activeLed = 0;

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on the active LED
  digitalWrite(ledPins[activeLed], HIGH);

  // Wait for the specified ON time
  delay(onTimes[activeLed]);

  // Turn off the active LED
  digitalWrite(ledPins[activeLed], LOW);

  // Move to the next LED
  activeLed = (activeLed + 1) % numLeds;
}
