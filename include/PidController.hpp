/**
 * Copyright (C)
 * 2019 - Nakul Patel
 *
 */

/**
 * @file PidController.hpp
 *
 * @author Nakul Patel
 *
 * @brief declaration for PidController class
 *
 * @version 1
 *
 * @date 2019-09-27
 *
 * This .hpp file has declarations for the class attributes and methods for
 * simple functionality of the PID controller
 *
 */

#pragma once

#include<iostream>

/**
 *
 * @brief declaration of PidController class
 *
 */
class PidController {
  /// proportional gain
  double kp;

  /// integral gain
  double ki;

  /// derivative gain
  double kd;

  /// time interval for a control loop
  double dt;

 public:
  /**
   *
   * @brief parameterized constructor to initialize the private members
   *
   * @param kpvalue variable for initializing the member kp
   *
   * @param kivalue variable for initializing the member ki
   *
   * @param kdvalue variable for initializing the member kd
   *
   * @param dt variable for initializing the member dt
   *
   * @return none
   *
   */
  PidController(double kpvalue, double kivalue, double kdvalue, double dt);

  /**
   * @brief method to calculate  the output velocity
   *
   * @param targetSetpoint variable for desired velocity
   *
   * @param actualVelocity variable for actual velocity
   *
   * @return output velocity of type double
   *
   */
  double computeVelocity(double targetSetpoint, double actualVelocity);
};




