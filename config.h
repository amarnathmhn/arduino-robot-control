/*
   Contains PIN numbers for Compass, Ultrasonic Sensors, Motors.
   DC Motors are used along with Adafruit Shield.

*/

const int L=0; // Left Ultrasonic Sensor Index
const int L45=1; // Left45 Ultrasonic Sensor Index
const int F=2; // Front Ultrasonic Sensor Index
const int R45=3; // Right45 Ultrasonic Sensor Index
const int R=4; // Right Ultrasonic Sensor Index

// Number of Ultrasonic Sensors
const int SONAR_NUM=5;
// Pins for Trigger inputs of Ultrasonic Sensors
const int trig[] = {22,24,26,28,30};
const int echo[] = {23,25,27,29,31};
//The Range of Ultrasonic Sensors
const int MAX_DISTANCE = 200;

// Indices of the motors
const int LM = 0;
const int RM = 1;

// Constants for the statemachine
const int PRE_GO_TO_GOAL =0; // Orient towards goal
const int GO_TO_GOAL =1; // Move toward goal
const int PRE_WALL_FOLLOW = 2; // Turn appropriately to follow wall on a side 
const int WALL_FOLLOW = 1; // Follow the wall
const int GOAL_REACHED =0; // Stop and Signal the supervisor



