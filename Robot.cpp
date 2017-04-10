/*
   Main Robot Class.
   Initializes and Updates the state of the robot.
   Has controllers for all the states defined in config.h
*/

#include "Robot.h"
#include "config.h"


Robot::Robot(){
	// Create Ultrasonic Sensor Object array
	int i=L;
	for(i=L;i<=R;i++){
		US[i] = NewPing(trig[i],echo[i],MAX_DISTANCE);
		prox[i]=0;
	}
}

void Robot::init(){
	// Get Initial Ultrasonic Distances
	for(i=L;i<=R;i++){
		prox[i]= US[i].ping_cm();
	}
	// Get Initial Heading
	compass.read();
	initialHeading = compass.heading(( LSM303::vector<int>{1,0,0} ));
	currentHeading = compass.heading(( LSM303::vector<int>{1,0,0} ));

}

void Robot::goStraight(){
}
void Robot::goToGoal(float goalAngle){
}
void Robot::turnByAngle(float goalAngle){
}
