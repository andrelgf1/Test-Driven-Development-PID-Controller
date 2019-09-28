/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 *
 */

/**
 * @file PidController.hpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
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
  PidController(double kpValue, double kiValue, double kdValue, double dtValue);


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


  /**
   * @brief method to change  the time interval
   *
   * @param newDtValue variable for new dt value
   *
   * @return double - new value of dt
   *
   */
  double changeTimeInterval(double newDtValue);
};




