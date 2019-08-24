/*
  little baby wrapper functions for the marble maze box
*/

#define NORTH_WEST_SOLENOID 12
#define NORTH_EAST_SOLENOID 11
#define SOUTH_EAST_SOLENOID 10
#define SOUTH_WEST_SOLENOID 9

void tilt_north(int milliseconds);
void tilt_south(int milliseconds);
void tilt_east(int milliseconds);
void tilt_west(int milliseconds);
void solve_maze();

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins 12, 11, 10, 9 as outputs.
  pinMode(NORTH_WEST_SOLENOID, OUTPUT);
  pinMode(NORTH_EAST_SOLENOID, OUTPUT);
  pinMode(SOUTH_EAST_SOLENOID, OUTPUT);
  pinMode(SOUTH_WEST_SOLENOID, OUTPUT);

  solve_maze();
}

// the loop function runs over and over again forever
void loop() {
//  tilt_north(1000);
//  delay(1000);
//  tilt_east(1000);
//  delay(1000);
//  tilt_south(1000);
//  delay(1000);
//  tilt_west(1000);
//  delay(1000);
}

void solve_maze() {
  delay(400);
  tilt_north(200);
  delay(200);
  tilt_north(2000);
  delay(600);
  tilt_east(2000);
  delay(1000);
  tilt_south(500);
  delay(1000);
  tilt_west(200);
  delay(200);
  tilt_west(2000);
  delay(600);
  tilt_south(1000);
  delay(600);
  tilt_east(1000);
  delay(1000);
  tilt_south(800);
  delay(1000);
  tilt_west(200);
  delay(200);
  tilt_west(2000);
  delay(1000);
  tilt_north(2000);
  delay(1000);
  tilt_west(1000);
  delay(1000);
  tilt_south(1500);
  delay(1000);
  tilt_east(2000);
  delay(1000);
  tilt_south(600);
  delay(1000);
  tilt_west(4000);
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
