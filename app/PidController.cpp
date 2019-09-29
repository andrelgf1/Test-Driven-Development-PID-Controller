/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 * 
 */

/**
 * @file PidController.cpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
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
  double error, errorPrevious, integrator = 0, d, output;
  while (1) {
    error = targetSetpoint - actualVelocity;
    integrator = integrator + (error * dt);
    d = (error - errorPrevious) / dt;
    output = kp * error + ki * integrator + kd * d;
    errorPrevious = error;
    if (targetSetpoint - 0.1 < output && output < targetSetpoint + 0.1) {
      break;
    actualVelocity = output;
    }
  }
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
  dt = newDtValue;
  return dt;
}
