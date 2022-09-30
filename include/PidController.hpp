/**
 * @file PidController.hpp
 * @author Akash Ravindra (aravind2@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef PID_CONTROLLER_HPP__
#define PID_CONTROLLER_HPP__
#include <tuple>
namespace pid{
    class PidController
    {
    private:
        /// @brief Proportional Gain
        const double kp = 0.0;
        /// @brief Integral Gain
        const double ki = 0.0;
        /// @brief Derivative Gain
        const double kd = 0.0;
        /// @brief Time Step
        const double dt = 0.1; 
        /// @brief Previous error accumulator
        double prev_error = 0.0;
        /// @brief The current error calculated
        double error = 0.0;
    public:
        /// @brief Current output calculate from compute
        double curr_output = 0.0;
        /// @brief Default Initializer
        PidController();
        /// @brief Initialize the 
        /// @param[in] p Proportional Gain
        /// @param[in] i Integral Gain
        /// @param[in] d Derivative Gain
        PidController(double p, double i, double d);
        ~PidController();
        /// @brief Compute the PID 
        /// @param target Reference value = Value to reach
        /// @param curr Current value 
        /// @return Controller Output
        double compute(double target, double curr);
        /// @brief Returns the computed error of the current output
        /// @param t target 
        /// @param c curr
        /// @return Return the Error currently calculated
        double getError(double t, double c);
        /// @brief Returns the initialled PID values
        /// @return Tuple of PID doubles
        std::tuple<double, double, double> getControllerParams();

    };
}
#endif