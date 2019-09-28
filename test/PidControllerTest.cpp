#include <gtest/gtest.h>
#include <PidController.hpp>
#include <memory>
#include <iostream>

TEST(PidControllerTest, testComputePidMethod) {
  std::shared_ptr<PidController> pid = std::make_shared<PidController>();
  EXPECT_EQ(1, 2);
}

TEST(PidController1Test, testComputePidMethod1) {
  EXPECT_EQ(1, 1);
}
