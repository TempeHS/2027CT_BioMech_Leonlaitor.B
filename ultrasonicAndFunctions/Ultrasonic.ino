const int trigPin = 3;
const int echoPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

int readDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    return -1; // No echo received
  }

  return duration / 58;
}

int classifyZone(int distance, int nearLimit, int farLimit) {
  if (distance < 0) return -1; // No valid reading
  if (distance < nearLimit) return 0; // Danger
  if (distance < farLimit) return 1;  // Warning
  return 2;                           // Safe
}

void loop() {
  int distance = readDistance();

  if (distance < 0) {
    Serial.println("No echo detected");
  } else {
    int zone = classifyZone(distance, 10, 30);

    Serial.print(distance);
    Serial.print(" cm, zone ");
    Serial.println(zone);
  }

  delay(100);
}