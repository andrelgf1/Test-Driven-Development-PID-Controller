/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 *
 */

/**
 * @file main.cpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
 * @author Part2: Eashwar Sathyamurthy(Driver) Sri Manika Makam(Navigator)
 *
 * @brief driver program for a simple PID controller
 *
 * @version 1
 *
 * @date 2019-09-27
 *
 * This program uses a class named PidController
 * from the PidController.hpp header file
 *
 */

#include <iostream>
#include "PidController.hpp"

/**
 * @brief Main function
 * @param none
 * @return 0
 */
int main() {
  /// Initializing constructor with the input values of kp ki kd dt
  PidController pid(0.9, 0.001, 0.001, 0.2);
  /// Calling computeVelocity() method
  double newVelocity = pid.computeVelocity(20.0, 5.0);
  std::cout << "The new velocity closer is: " << newVelocity <<std::endl;
  return 0;
}
