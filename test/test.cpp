/**
 * @file test.cpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @author Sparsh Jaiswal (sjaiswal@umd.edu)
 * @brief Tests to validate the functionality of the Robot PID class. Test
 * indicate specs desired
 * @version 0.1
 * @date 2022-09-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <gtest/gtest.h>
#include <math.h>

#include <tuple>

#include "PidController.hpp"

TEST(PidControllerTest, test_compute) {
  pid::PidController control(2.0, 0.0, 0.0);
  EXPECT_NEAR(control.compute(5.0, 7.0), -4.0, 0.0001);
}
TEST(PidControllerTest, test_getParams) {
  pid::PidController control;
  EXPECT_EQ(control.getControllerParams(),
            (std::tuple<double, double, double>(0.0, 0.0, 0.0)));
}
TEST(PidControllerTest, test_getError) {
  pid::PidController control(2.0, 0, 0.1);
  EXPECT_EQ(control.getError(), 0.0);
}
