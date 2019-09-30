/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 * 
 */

/**
 * @file PidController.cpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
 * @author Part2: Eashwar Sathyamurthy(Driver) Sri Manika Makam(Navigator)
 *
 * @brief cpp program for definition and implementation of the methods of
 *        PidController class
 *
 * @version 1
 *
 * @date 2019-09-27
 *
 * This program implements the methods of the
 * PidController class from PidController.hpp header file
 *
 */

#include "PidController.hpp"

/**
 * @brief constructor to set initial values
 *
 * @param kpValue variable for initializing the member kp
 *
 * @param kiValue variable for initializing the member ki
 *
 * @param kdValue variable for initializing the member kd
 *
 * @param dtValue variable for initializing the member dt
 *
 * @return none
 *
 */
PidController::PidController(double kpValue, double kiValue, double kdValue,
                             double dtValue) {
  kp = kpValue;
  ki = kiValue;
  kd = kdValue;
  dt = dtValue;
}

/**
 * @brief method to calculate  the output velocity
 *
 * @param targetSetpoint variable for desired velocity
 *
 * @param actualVelocity variable for actual velocity
 *
 * @return double - output velocity
 *
 */
double PidController::computeVelocity(double targetSetpoint,
                                      double actualVelocity) {
  /// Declaring variables
  double error = targetSetpoint - actualVelocity, errorPrevious = 0;
  double integral = 0, output, count = 0;
  double derivative = (error - errorPrevious) / dt;
  /// This will prevent infinite repetition of the loop
  while (count < 500000) {
    integral = integral + (error * dt);
    /// Calculating new Velocity
    output = kp * error + ki * integral + kd * derivative;
    /// updating previous error
    errorPrevious = error;
    if (targetSetpoint - 0.1 < output && output < targetSetpoint + 0.1)
      break;
    ///  Applying feedback to actual velocity by updating it with output
    actualVelocity = output;
    count++;
    /// Calculating error after feedback
    error = targetSetpoint - actualVelocity;
    derivative = (error - errorPrevious) / dt;
  }
  /// This message will be displayed when loop completes 500000 iterations
  if (count == 500000)
    std::cout << "Maximum variations Achieved" << std::endl;
  return output;
}

/**
 * @brief method to change  the time interval
 *
 * @param newDtValue variable for new dt value
 *
 * @return double - new value of dt
 *
 */
double PidController::changeTimeInterval(double newDtValue) {
  /// Initializing time interval
  dt = newDtValue;
  return dt;
}
