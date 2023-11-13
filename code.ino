/**
 * Arduino code to control 6 air pumps
 * Inflation continues until a button is pressed to stop.
 */

#define airPumpCont 6                     // Number of air pumps

// Air valve (deflation) and air pump (inflation) pins
int airValvePin[airPumpCont] = {2, 4, 6, 8, 10, 12};
int airPumpPin[airPumpCont] = {3, 5, 7, 9, 11, 13};

// Button pin for stopping inflation
const int buttonPin = A0;

// Initialize states
bool isPumping = true;

void setup() {
  Serial.begin(9600);                    // Set baud rate
  pinMode(buttonPin, INPUT_PULLUP);      // Set button pin as input with internal pull-up

  // Initialize pump and valve pins
  for (int i = 0; i < airPumpCont; i++) {
    pinMode(airPumpPin[i], OUTPUT);
    pinMode(airValvePin[i], OUTPUT);
    digitalWrite(airPumpPin[i], LOW);    // Start with pumps off
    digitalWrite(airValvePin[i], HIGH);  // Start with valves open
  }

  Serial.println("Initialization complete");
}

void loop() {
  // Check button state
  if (digitalRead(buttonPin) == LOW) {
    isPumping = !isPumping;              // Toggle pumping state
    delay(500);                          // Debounce delay
  }

  // Control pumps based on the isPumping state
  for (int i = 0; i < airPumpCont; i++) {
    if (isPumping) {
      digitalWrite(airPumpPin[i], HIGH);   // Inflate
      digitalWrite(airValvePin[i], LOW);   // Close valve
    } else {
      digitalWrite(airPumpPin[i], LOW);    // Stop inflating
      digitalWrite(airValvePin[i], HIGH);  // Open valve (deflate)
    }
  }
}
