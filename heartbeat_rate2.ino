const int xPin = 34;  // X-axis analog input pin
const int yPin = 35;  // Y-axis analog input pin
const int xMin = 0;   // minimum X value
const int xMax = 4095;  // maximum X value
const int yMin = 0;   // minimum Y value
const int yMax = 4095;  // maximum Y value
const int heartMinBPM = 60;  // minimum BPM
const int heartMaxBPM = 120; // maximum BPM
const int colorMinBPM = 30;  // minimum BPM for color
const int colorMaxBPM = 60;  // maximum BPM for color

void setup() {
  Serial.begin(115200); // initialize serial communication
}

void loop() {
  int xVal = analogRead(xPin); // read X-axis value
  int yVal = analogRead(yPin); // read Y-axis value

  // map X value to heartbeat rate (BPM)
  int heartBPM = map(xVal, xMin, xMax, heartMinBPM, heartMaxBPM);

  // map Y value to color rate (BPM)
  int colorBPM = map(yVal, yMin, yMax, colorMinBPM, colorMaxBPM);

  // send mapped values to computer via serial communication
  Serial.print("heartBPM:");
  Serial.print(heartBPM);
  Serial.print(", colorBPM:");
  Serial.println(colorBPM);

  delay(100); // wait for 100 milliseconds
}
