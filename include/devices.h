#include "api.h"
#include "subsystems/catapult.hpp"
#include "subsystems/chassis.hpp"
#include "subsystems/intake.hpp"
#include "sylib/sylib.hpp"

using namespace pros;

inline Chassis chassis;
inline Catapult catapult;
inline Intake intake;

namespace constants {
const float driveWheelRadius = 3.25;
const float trackingWheelRadius = 2.75;
} // namespace constants

inline Controller controller(E_CONTROLLER_MASTER);

inline Motor left1(16, E_MOTOR_GEAR_BLUE, true);
inline Motor left2(17, E_MOTOR_GEAR_BLUE, true);
inline Motor left3(18, E_MOTOR_GEAR_BLUE, true);

inline Motor right1(7, E_MOTOR_GEAR_BLUE);
inline Motor right2(8, E_MOTOR_GEAR_BLUE);
inline Motor right3(9, E_MOTOR_GEAR_BLUE);

inline Motor rollerMotor(9, E_MOTOR_GEAR_GREEN, true);

inline Motor catapultMotor(10, E_MOTOR_GEAR_RED, true);


inline Mutex leftMotorMutex;
inline Mutex rightMotorMutex;
inline pros::Motor_Group leftMotors({left1, left2, left3});
inline pros::Motor_Group rightMotors({right1, right2, right3});

// note to future generations: conlifting triports defs
// will make you want to kys

inline ADIEncoder leftEncoder(6, 7);
inline ADIEncoder rightEncoder(4, 5);
inline auto ledStrip = sylib::Addrled(22, 3, 40);
inline Mutex encoderMutex;

// inline ADIDigitalOut piston(8, false); // see above

// 18 bod
