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

#include "PidController.hpp"

pid::PidController::PidController(double p, double i, double d)
    : kp{p}, ki{i}, kd{d} {}
pid::PidController::PidController() {}
pid::PidController::~PidController() {}

double pid::PidController::compute(double target, double curr) { return 0.0; }

std::tuple<double, double, double> pid::PidController::getControllerParams() {
  return std::tuple<double, double, double>(kp, ki, kd);
}

double pid::PidController::getError() { return error; }
