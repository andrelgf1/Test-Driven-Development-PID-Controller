#pragma once

#include<iostream>

class PidController {
  double kp;
  double ki;
  double kd;

 public:
  PidController(double kpvalue, double kivalue, double kdvalue);

  double computeVelocity(double targetSetpoint, double actualVelocity);
};
