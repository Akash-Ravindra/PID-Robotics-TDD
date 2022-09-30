/**
 * @file PidController.cpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "PidController.hpp"

using namespace pid;

PidController::PidController(double p, double i, double d):kp{p}, ki{i}, kd{d}{

}
PidController::PidController(){

}
PidController::~PidController(){

}

double PidController::compute(double target, double curr){
    return 0.0;
}

std::tuple<double, double, double> PidController::getControllerParams(){
    return std::tuple(0.0,0.0,0.0);
}

double PidController::getError(double t, double c){

}
