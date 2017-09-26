/*
 * PIDControllerTest.cpp
 *
 *  Created on: Sep 25, 2017
 *      Author: viki
 */
#include <gtest/gtest.h>
#include "PIDController.h"

TEST(PIDTest, pass) {
 PIDController PID;
 double targetPoint=100;
 EXPECT_NEAR(2*targetPoint, PID.computeNewVelocity(targetPoint,0,10),0.5);
}

TEST(PIDTest2, pass) {
 PIDController PID;
 double targetPoint=(-100);
 EXPECT_NEAR(2*targetPoint, PID.computeNewVelocity(targetPoint,-10,10),0.5);
}
