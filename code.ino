#define airPumpCont 6  // Number of air pumps

int airValvePin[airPumpCont] = {2, 4, 6, 8, 10, 12};  // Air valve pins for deflation
int airPumpPin[airPumpCont] = {3, 5, 7, 9, 11, 13};   // Air pump pins for inflation
int buttonPin = 14;                                   // Button pin for manual deflation control

unsigned long recordTime[airPumpCont] = {0, 0, 0, 0, 0, 0};  // Record time for each stage

// Settings
#define initializeTime 5000  // Initialization time (1 sec = 1000 ms)

long SetInflationTime[airPumpCont] = {
  20 * 1000UL, 20 * 1000UL, 20 * 1000UL,
  20 * 1000UL, 20 * 1000UL, 20 * 1000UL
};
long SetDeflationTime[airPumpCont] = {
  2000, 2000, 2000, 2000, 2000, 2000
};

#define airPumpON HIGH       // Air pump ON - inflating
#define airPumpOFF !airPumpON // Air pump OFF - stop inflating
#define airValveON HIGH      // Air valve ON - deflating
#define airValveOFF !airValveON  // Air valve OFF - stop deflating

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);  // Set button pin as input

  for (int i = 0; i < airPumpCont; i++) {
    pinMode(airPumpPin[i], OUTPUT);
    pinMode(airValvePin[i], OUTPUT);
    digitalWrite(airPumpPin[i], airPumpON);   // Start with inflation
    digitalWrite(airValvePin[i], airValveOFF);
  }

  Serial.println("Initialization complete");
}

void loop() {
  for (int i = 0; i < airPumpCont; i++) {
    if (digitalRead(buttonPin) == LOW) {  // Check if button is pressed
      // Deflate when button is pressed
      digitalWrite(airPumpPin[i], airPumpOFF);
      digitalWrite(airValvePin[i], airValveON);
    } else {
      // Inflate by default
      digitalWrite(airPumpPin[i], airPumpON);
      digitalWrite(airValvePin[i], airValveOFF);
    }
  }
}
