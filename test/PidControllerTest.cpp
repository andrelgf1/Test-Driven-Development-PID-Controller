/**
 * Copyright (C)
 * 2019 - Nakul Patel and Andre Ferreira
 *
 */

/**
 * @file PidControllerTest.cpp
 *
 * @author Part1: Nakul Patel(Driver)  Andre Ferreira(Navigator)
 * @author Part2: Eashwar Sathyamurthy(Driver) Sri Manika Makam(Navigator)
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
#include <gmock/gmock.h>
#include <iostream>
#include "Pid.hpp"

class MockPid : public PidController {
 public:
  MOCK_METHOD2(computeVelocity, double(double, double));
  MOCK_METHOD1(changeTimeInterval, double(double));};
/**
 *@brief Unit Test for testing computeVelocity() method
 *
 *This test checks if the return value of the method is near 
 *the range of 0.1 from 20.0
 *
 */
TEST(PidControllerTest, testComputeVelocityMethod) {
  MockPid pidObject;
  EXPECT_CALL(pidObject, computeVelocity(20.0, 5.0)).Times(1).WillOnce(
      ::testing::Return(20.0));
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
  MockPid pidObject;
  EXPECT_CALL(pidObject, changeTimeInterval(0.2)).Times(1).WillOnce(
      ::testing::Return(0.2));
  EXPECT_EQ(pidObject.changeTimeInterval(0.2), 0.2);
}

