#include <lib.hpp>

PidController::PidController(double kpvalue, double kivalue, double kdvalue) {
  kp = kpvalue;
  kd = kdvalue;
  ki = kivalue;

}
