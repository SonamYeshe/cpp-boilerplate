// Copyright 2017 SonamYeshe
/*
 * PIDController.cpp
 *
 *  Created on: Sep 25, 2017
 *      Author: viki
 */
#include "PIDController.h"
/*
 double PIDController::computeNewVelocity(double TarSetPoint, double ActVelocity, double T)
 {
 double error = TarSetPoint - ActVelocity;
 // Only intig need to be accumulated, deriv &
 // propotional don't
 double deriv = 0;
 intig = error + intig;
 deriv = error / T;

 // Separate the cases to be motor rotates clockwisely
 // & counterclockwisely.
 if (TarSetPoint > 0) {
 // Set 2 times of TarSetPoint to be the upper limit
 // to protect the motor.
 if (Kp * error + Ki * intig + Kd * deriv > 2 * TarSetPoint)
 return 2 * TarSetPoint;
 else
 return Kp * error + Ki * intig + Kd * deriv;
 } else {
 if (Kp * error + Ki * intig + Kd * deriv < 2 * TarSetPoint)
 return 2 * TarSetPoint;
 else
 return Kp * error + Ki * intig + Kd * deriv;
 }
 }
 ;

 };
 */

