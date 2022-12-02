#include "api.h"
#include "pros/rtos.hpp"
#include "sylib/sylib.hpp"
using namespace pros;

namespace constants {
const float driveWheelRadius = 3.25;
const float trackingWheelRadius = 2.75;
} // namespace constants

inline Controller controller(E_CONTROLLER_MASTER);

inline Motor right1(2, E_MOTOR_GEAR_BLUE);
inline Motor right2(3, E_MOTOR_GEAR_BLUE);
inline Motor right3(4, E_MOTOR_GEAR_BLUE);

inline Motor left1(12, E_MOTOR_GEAR_BLUE, true);
inline Motor left2(13, E_MOTOR_GEAR_BLUE, true);
inline Motor left3(14, E_MOTOR_GEAR_BLUE, true);

inline Motor rollerMotor(9, E_MOTOR_GEAR_GREEN, true);

inline Motor launcherMotor(15, E_MOTOR_GEAR_BLUE);

inline pros::Motor_Group leftMotors({left1, left2, left3});
inline pros::Motor_Group rightMotors({right1, right2, right3});

// note to future generations: conlifting triports defs will make you want to
// kys
inline ADIEncoder leftEncoder(4, 5);
inline ADIEncoder rightEncoder(2, 3);
inline auto ledStrip = sylib::Addrled(22, 1, 40);
inline Mutex encoderMutex;

inline ADIDigitalOut piston(8, false); //see above

 inline ADIPotentiometer potentiometer(7); // see above

// 18 bod
