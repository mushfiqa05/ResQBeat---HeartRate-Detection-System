// Arduino UNO BPM Simulation + RGB LED
int redPin = 9;
int greenPin = 10;
int yellowPin = 11;

int bpm = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // Simulate BPM between 60 and 130
  bpm = random(60, 130);

  // Send BPM to Serial (for Python to read)
  Serial.println(bpm);

  // RGB LED color based on BPM
  if (bpm <= 100) {          // Normal
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(yellowPin, 0);
  } else if (bpm <= 120) {   // Slightly High
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 255);
  } else {                    // Very High
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 0);
  }

  delay(1000); // Update every second
}
