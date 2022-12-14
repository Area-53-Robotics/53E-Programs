#ifndef CHASSIS_HPP
#define CHASSIS_HPP
#include "api.h"
extern pros::Motor L1, L2, L3, R1, R2, R3;

class Chassis {
public:
  Chassis();
  ~Chassis();
  static bool isReversed;
  static void run();
  static void move(int left, int right);
};
#endif