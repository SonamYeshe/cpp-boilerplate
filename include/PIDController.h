/*
 * PIDController.h
 *
 *  Created on: Sep 25, 2017
 *      Author: viki
 */

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

class PIDController{
private:
	double Kp=3;
	double Ki=0.4;
	double Kd=0.5;
	double intig=0;
public:
	double computeNewVelocity(double TarSetPoint, double ActVelocity, double T)
	{
	double error=TarSetPoint-ActVelocity;
	double deriv=0;
	intig = error + intig;
	deriv = error / T;

	if (TarSetPoint >0)
		{if (Kp*error + Ki*intig + Kd*deriv > 2 * TarSetPoint)
			return 2 * TarSetPoint;
		else
			return Kp*error + Ki*intig + Kd*deriv;}
	else{
		if (Kp*error + Ki*intig + Kd*deriv < 2 * TarSetPoint)
			return 2 * TarSetPoint;
		else
			return Kp*error + Ki*intig + Kd*deriv;}

	};



};




#endif /* INCLUDE_PIDCONTROLLER_H_ */
