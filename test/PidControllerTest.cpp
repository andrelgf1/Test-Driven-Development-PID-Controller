/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 *
 */

/**
 * @file PidControllerTest.cpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
 *
 * @brief test cases (Google Test framework) for PidController class
 *
 * @version 1
 *
 * @date 2019-09-27
 *
 * This .cpp file has test cases definitions for the class methods
 * of PidController class
 *
 */

#include <gtest/gtest.h>
#include <iostream>
#include "PidController.hpp"

/**
 *@brief Unit Test for testing computeVelocity() method
 *
 *This test checks if the return value of the method is near 
 *the range of 0.1 from 20.0
 *
 */
TEST(PidControllerTest, testComputeVelocityMethod) {
  PidController pidObject(0.9, 0.001, 0.001, 0.2);
  EXPECT_NEAR(pidObject.computeVelocity(20.0, 5.0), 20.0, 0.1);
}

/**
 *@brief Unit Test for testing changeTimeInterval() method
 *
 *This test checks if the value of variable dt 
 *was changed to 0.5, after passing the new time interval  
 *
 */
TEST(PidControllerTest, testChangeParameterMethod) {
  PidController pidNewObject(0.9, 0.001, 0.001, 0.2);
  EXPECT_EQ(pidNewObject.changeTimeInterval(0.5), 0.5);
}



