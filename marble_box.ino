/*
  little baby wrapper functions for the marble maze box
*/

#define NORTH_WEST_SOLENOID 13
#define NORTH_EAST_SOLENOID 12
#define SOUTH_EAST_SOLENOID 11
#define SOUTH_WEST_SOLENOID 10

void tilt_north(int milliseconds);
void tilt_south(int milliseconds);
void tilt_east(int milliseconds);
void tilt_west(int milliseconds);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins 13, 12, 11, 10 as outputs.
  pinMode(NORTH_WEST_SOLENOID, OUTPUT);
  pinMode(NORTH_EAST_SOLENOID, OUTPUT);
  pinMode(SOUTH_EAST_SOLENOID, OUTPUT);
  pinMode(SOUTH_WEST_SOLENOID, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  tilt_north(1000);
  tilt_south(10000);
  delay(1000);
}

void tilt_north(int milliseconds) {
  digitalWrite(SOUTH_EAST_SOLENOID, HIGH);
  digitalWrite(SOUTH_WEST_SOLENOID, HIGH);
  delay(milliseconds);
  digitalWrite(SOUTH_EAST_SOLENOID, LOW);
  digitalWrite(SOUTH_WEST_SOLENOID, LOW);
}

void tilt_east(int milliseconds) {
  digitalWrite(NORTH_WEST_SOLENOID, HIGH);
  digitalWrite(SOUTH_WEST_SOLENOID, HIGH);
  delay(milliseconds);
  digitalWrite(NORTH_WEST_SOLENOID, LOW);
  digitalWrite(SOUTH_WEST_SOLENOID, LOW);
}

void tilt_south(int milliseconds) {
  digitalWrite(NORTH_EAST_SOLENOID, HIGH);
  digitalWrite(NORTH_WEST_SOLENOID, HIGH);
  delay(milliseconds);
  digitalWrite(NORTH_EAST_SOLENOID, LOW);
  digitalWrite(NORTH_WEST_SOLENOID, LOW);
}

void tilt_west(int milliseconds) {
  digitalWrite(NORTH_EAST_SOLENOID, HIGH);
  digitalWrite(SOUTH_EAST_SOLENOID, HIGH);
  delay(milliseconds);
  digitalWrite(NORTH_EAST_SOLENOID, LOW);
  digitalWrite(SOUTH_EAST_SOLENOID, LOW);
}
