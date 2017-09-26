// Copyright 2017 SonamYeshe
#ifndef WEEK4_INCLUDE_PIDCONTROLLER_H_
#define WEEK4_INCLUDE_PIDCONTROLLER_H_

// Design a PIDController class to computes
// a new velocity given a target setpoint and
// actual velocity.

class PIDController {
 private:
// Set the control gain to be some constants
  double Kp = 3;
  double Ki = 0.4;
  double Kd = 0.5;
// Assuming the intig value to be 0, in other
// words, there's no accumulated intig so far.
  double intig = 0;

 public:
  double computeNewVelocity(double TarSetPoint, double ActVelocity, double T) {
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
};

#endif  // WEEK4_INCLUDE_PIDCONTROLLER_H_
