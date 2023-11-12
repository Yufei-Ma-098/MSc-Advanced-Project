/**
 * Arduino controlling 6 air pumps
 */

#define airPumpCont 6 // Number of air pumps
int airPumpPin[airPumpCont] = {2, 4, 6, 8, 10, 12}; // Pins to control air pump inflation
int airValvePin[airPumpCont] = {3, 5, 7, 9, 11, 13}; // Pins to control air valves for deflation

#define airPumpON HIGH // Air pump ON - starts inflating
#define airPumpOFF !airPumpON // Air pump OFF - stops inflating
#define airValveON HIGH // Air valve ON - starts deflating
#define airValveOFF !airValveON // Air valve OFF - stops deflating

// Define the pins for the inflation and deflation buttons
const int inflationButtonPin = A0; // Pin for the inflation button
const int deflationButtonPin = A1; // Pin for the deflation button

void setup() {
  Serial.begin(9600); // Set baud rate to 9600
  for (int i = 0; i < airPumpCont; i++) {
    pinMode(airPumpPin[i], OUTPUT); // Set pin mode to OUTPUT
    pinMode(airValvePin[i], OUTPUT); // Set pin mode to OUTPUT
    digitalWrite(airPumpPin[i], airPumpOFF); // Initial state - air pump OFF
    digitalWrite(airValvePin[i], airValveON); // Initial state - air valve ON
  }

  // Initialize the button pins as inputs
  pinMode(inflationButtonPin, INPUT_PULLUP); // Set inflation button as input with pull-up
  pinMode(deflationButtonPin, INPUT_PULLUP); // Set deflation button as input with pull-up

  Serial.println("Start successfully");
}

void loop() {
  // Read the state of the buttons
  bool inflationButtonState = digitalRead(inflationButtonPin) == LOW; // Check if inflation button is pressed
  bool deflationButtonState = digitalRead(deflationButtonPin) == LOW; // Check if deflation button is pressed

  for (int i = 0; i < airPumpCont; i++) {
    if (inflationButtonState) { // If inflation button is pressed
      digitalWrite(airValvePin[i], airValveOFF); // Close air valve
      digitalWrite(airPumpPin[i], airPumpON); // Open air pump
    } else if (deflationButtonState) { // If deflation button is pressed
      digitalWrite(airPumpPin[i], airPumpOFF); // Close air pump
      digitalWrite(airValvePin[i], airValveON); // Open air valve
    } else {
      // If no buttons are pressed, turn off both pump and valve
      digitalWrite(airPumpPin[i], airPumpOFF); // Close air pump
      digitalWrite(airValvePin[i], airValveOFF); // Close air valve
    }
  }
}
