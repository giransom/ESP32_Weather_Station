const byte windPin = D2;          // Sensor connected to digital pin 2
volatile unsigned long pulseCount = 0;

// Adjust this after calibration.
// Example: if 1 Hz (1 pulse/sec) = 2.0 mph, leave it at 2.0.
const float MPH_PER_HZ = 2.0;

void countPulse() {
 pulseCount++;
}

void setup() {
 Serial.begin(115200);

 pinMode(windPin, INPUT_PULLUP);

 attachInterrupt(digitalPinToInterrupt(windPin), countPulse, FALLING);
}

void loop() {
 static unsigned long lastTime = 0;

 if (millis() - lastTime >= 1000) {

   noInterrupts();
   unsigned long pulses = pulseCount;
   pulseCount = 0;
   interrupts();

   float frequency = pulses;            // pulses per second (Hz)
   float mph = frequency * MPH_PER_HZ;

   Serial.print("Pulses/sec: ");
   Serial.print(frequency);

   Serial.print("    Wind Speed: ");
   Serial.print(mph, 1);
   Serial.println(" mph");

   lastTime = millis();
 }
}