/**
 * @file main.cpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @author Sparsh Jaiswal (sjaiswal@umd.edu)
 * @brief
 * @version 0.1
 * @date 2022-09-29
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>

#include "PidController.hpp"

int main() {
  std::string tar;
  std::cout << "Enter the Desired Velocity: ";
  std::getline(std::cin, tar);
  pid::PidController controller(2.0, 1.0, 0.0);

  double current_value = 10.5;
  auto tar_num = std::stod(tar);
  std::cout << "Current value " << current_value << "\nController params"
            << std::get<0>(controller.getControllerParams()) << ", "
            << std::get<1>(controller.getControllerParams()) << ", "
            << std::get<2>(controller.getControllerParams()) << "\n"
            << "Target value " << tar_num << "\n"
            << "Calculate output " << controller.compute(tar_num, current_value)
            << "\n"
            << "Error " << controller.getError();

  return 0;
}
