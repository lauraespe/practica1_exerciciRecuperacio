// Definition of Hall effect sensor pins
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;

// Definition of the transistor pin to control the electromagnet
const int transistorPin = 8;

// Variable to store the state of the sensors
bool sensorsActivated = false;

void setup() {
  // Set sensor pins as inputs
  pinMode(sensorPin1, INPUT_PULLUP); 
  pinMode(sensorPin2, INPUT_PULLUP); 
  pinMode(sensorPin3, INPUT_PULLUP); 

  // Set transistor pin as output
  pinMode(transistorPin, OUTPUT); 
}

void loop() {
 // Read the state of the sensors. We use the ! meaning negation because de hall sensors return 1 when the magnents are unplugged and 0 when the magnets ar connected
  bool sensor1State = !digitalRead(sensorPin1);
  bool sensor2State = !digitalRead(sensorPin2);
  bool sensor3State = !digitalRead(sensorPin3);  

  // Check if all three sensors are activated
  if (sensor1State && sensor2State && sensor3State) { 
    // Deactivate the electromagnet
    digitalWrite(transistorPin, LOW);
    sensorsActivated = true;
  } else {
    // Activate the electromagnet
    digitalWrite(transistorPin, HIGH);
    sensorsActivated = false;
  }

  // Delay of a short period of time to avoid erratic readings
  delay(100);
}
