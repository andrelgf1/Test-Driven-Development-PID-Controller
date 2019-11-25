/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 *
 */

/**
 * @file PidController.hpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
 * @author Part2: Eashwar Sathyamurthy(Driver) Sri Manika Makam(Navigator)
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
 protected:
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
   * @return none
   *
   */
  PidController();
  /**
   *
   * @brief Virtual destructor
   *
   * @return none
   *
   */

  virtual ~PidController() = 0;

  /**
   * @brief Virtual computeVelocity method 
   *
   * @param targetSetpoint variable for desired velocity
   *
   * @param actualVelocity variable for actual velocity
   *
   * @return double - output velocity
   *
   */
  virtual double computeVelocity(double targetSetpoint,
                                 double actualVelocity) = 0;

  /**
   * @brief  Virtual method changeTimeInterval
   *
   * @param newDtValue variable for new dt value
   *
   * @return double - new value of dt
   *
   */
  virtual double changeTimeInterval(double newDtValue) = 0;

  /**
   * @brief destructor for class object
   *
   * @param none
   *
   * @return none
   *
   */
};

