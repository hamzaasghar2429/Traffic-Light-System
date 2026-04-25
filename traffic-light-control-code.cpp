// Define the LED pins using standard NodeMCU nomenclature
const int redPin = D1;    
const int yellowPin = D2; 
const int greenPin = D3;  

// Set the timing for each state (in milliseconds)
const unsigned long greenDuration = 5000;  // 5 seconds
const unsigned long yellowDuration = 2000; // 2 seconds
const unsigned long redDuration = 5000;    // 5 seconds

void setup() {
  // Initialize all the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  
  // Start with all LEDs off just to be safe
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}

void loop() {
  // --- STATE 1: GREEN (GO) ---
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH); // Turn Green ON
  delay(greenDuration);

  // --- STATE 2: YELLOW (CAUTION) ---
  digitalWrite(greenPin, LOW);  // Turn Green OFF
  digitalWrite(yellowPin, HIGH);// Turn Yellow ON
  digitalWrite(redPin, LOW);
  delay(yellowDuration);

  // --- STATE 3: RED (STOP) ---
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW); // Turn Yellow OFF
  digitalWrite(redPin, HIGH);   // Turn Red ON
  delay(redDuration);
}