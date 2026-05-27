// www.elegoo.com
// Motor control with L293D

#define ENABLE 4
#define DIRA 3
#define DIRB 5

void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.println("Start The Motors!");

  // --- Sens du moteur
  digitalWrite(DIRA, HIGH);
  digitalWrite(DIRB, LOW);

  // --- Ralentit (200 -> 50)
  for (int i = 200; i >= 50; i--) {
    analogWrite(ENABLE, i);
    delay(50);
  }

  // --- Accélère (50 -> 200)
  for (int i = 50 ; i <= 200 ; i++) {
    analogWrite(ENABLE, i);
    delay(50);
  }

  delay(1000);
}
   
