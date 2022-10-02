/**
 * @file PidController.cpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @author Sparsh Jaiswal (sjaiswal@umd.edu)
 * @brief
 * @version 0.1
 * @date 2022-09-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/PidController.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>

pid::PidController::PidController(double p, double i, double d)
    : kp_{p}, ki_{i}, kd_{d} {}
pid::PidController::PidController() {}
pid::PidController::~PidController() {}

double pid::PidController::compute(double target, double curr) {
  error_ = target - curr;
  prev_error_ += error_ * dt_;
  curr_output_ = kp_*error_ + ki_*prev_error_ + kd_  * error_ / dt_;
  return curr_output_;
}

std::tuple<double, double, double> pid::PidController::getControllerParams() {
  return std::tuple<double, double, double>(kp_, ki_, kd_);
}

double pid::PidController::getError() { return error_; }
