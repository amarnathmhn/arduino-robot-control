#ifndef Robot_h
#define Robot_h

#include "Arduino.h"
#include <NewPing.h>
#include <Wire.h>
#include <LSM303.h>
#include <AFMotor.h>

class Robot {

	private:
		
		float initialHeading; // initial heading angle w.r.t Geographic North	-180-180 range
		float currentHeading; // current heading angle w.r.t Geographic North	-180-180 range
		int prox[SONAR_NUM]; // Ultrasonic distances
		NewPing US[SONAR_NUM];
		LSM303 compass;

		Robot();

		void init();

		void goStraight();

		void goToGoal(float goalAngle);

		// right +ve, left -ve
		void turnByAngle(float goalAngle);


};
#endif
