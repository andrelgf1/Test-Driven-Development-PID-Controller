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

#include "Pid.hpp"
#include "PidController.hpp"


Pid::Pid() {
  kp = 0.9;
  ki = 0.001;
  kd = 0.001;
  dt = 0.2;
}


double Pid::computeVelocity(double targetSetpoint,
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


double Pid::changeTimeInterval(double newDtValue) {
  /// Initializing time interval
  dt = newDtValue;
  return dt;
}


Pid::~Pid() {
}
