/*
 * PIDControllerTest.cpp
 *
 *  Created on: Sep 25, 2017
 *      Author: viki
 */
#include <gtest/gtest.h>
#include "PIDController.h"

// Give a positive input for velocity, assuming motor
// rotates clockwisely, To test if the result returns
// the upper limit in order to protect the motor.

TEST(PIDTest, pass) {
	PIDController PID;
	double targetPoint = 100;
	EXPECT_NEAR(2 * targetPoint, PID.computeNewVelocity(targetPoint, 0, 10),
			0.5);
}

// Give a negative input for velocity, assuming motor
// rotates counterclockwisely, To test if the result returns
// the upper limit in order to protect the motor.

TEST(PIDTest2, pass) {
	PIDController PID;
	double targetPoint = (-100);
	EXPECT_NEAR(2 * targetPoint, PID.computeNewVelocity(targetPoint, -10, 10),
			0.5);
}
