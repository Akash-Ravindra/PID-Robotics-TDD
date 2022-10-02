/**
 * @file PidController.hpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @author Sparsh Jaiswal (sjaiswal@umd.edu)
 * @brief
 * @version 0.1
 * @date 2022-09-29
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_
#include <tuple>
namespace pid {
class PidController {
 private:
  /// @brief Proportional Gain
  const double kp_ = 0.0;
  /// @brief Integral Gain
  const double ki_ = 0.0;
  /// @brief Derivative Gain
  const double kd_ = 0.0;
  /// @brief Time Step
  const double dt_ = 0.1;
  /// @brief Previous error accumulator
  double prev_error_ = 0.0;
  /// @brief The current error calculated
  double error_ = 0.0;

 public:
  /// @brief Current output calculate from compute
  double curr_output_ = 0.0;
  /// @brief Default Initializer
  PidController();
  /// @brief Initialize the
  /// @param[in] p Proportional Gain
  /// @param[in] i Integral Gain
  /// @param[in] d Derivative Gain
  PidController(double p, double i, double d);
  ~PidController();
  /// @brief Using the error between target velocity and the reference velocity
  /// calculate the velocity out put
  /// @param target Reference value = Value to reach
  /// @param curr Current value
  /// @return Controller Output
  double compute(double target, double curr);
  /// @brief Returns the computed error of the current output
  /// @return Return the Error currently calculated
  double getError();
  /// @brief Returns the initialled PID values
  /// @return Tuple of PID doubles
  std::tuple<double, double, double> getControllerParams();
};
}  // namespace pid
#endif  // INCLUDE_PIDCONTROLLER_HPP_