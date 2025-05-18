#define IN1 9
#define IN2 8
#define ENA 10
#define BUZZER 8  

int interval = 10000;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    interval = data.toInt() * 1000;\
    Serial.println("Interval set to: " + String(interval));
  }

  runMotorAndBuzzer();
  Serial.println("Time's up! Dispense the medicine.");
  delay(interval);
}

void runMotorAndBuzzer() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  delay(1000);          
  analogWrite(ENA, 0);  

  digitalWrite(BUZZER, HIGH);
  delay(1000);
  digitalWrite(BUZZER, LOW);
}
