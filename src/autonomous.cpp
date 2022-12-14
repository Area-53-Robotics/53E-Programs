/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
#include "main.h"
#include "utils/auton.hpp"

void autonomous() { 
  
  // Set the LED strip to a gradient in HSV color space
  // that displays a full range of hues
  ledStrip.gradient(0x30d15b, 0xFF0005, 0, 0, false, true);

  // Cycle the colors at speed 10
  ledStrip.cycle(*ledStrip, 10);

  //movePid(5, false);

  // moveBangBangLeft(100, true);
  // moveBangBangRight(100, true);

  //  moveBangBang(100,true);
  // turnBangBang(45);
  //1 towards u
  //2 away from u

  
      int x = 2;


      if (x == 1) {
      //red (one forward)
      leftMotors.move(-20);
      rightMotors.move(-20);
      delay(1000);
      leftMotors.move(0);
      rightMotors.move(0);
      intake.set_mode(Intake::Mode::On);
      delay(100);
      intake.set_mode(Intake::Mode::Off);

      delay(1000);}

      if (x == 2) { //blue (one behind)
          leftMotors.move(-20);
      rightMotors.move(-20);
      delay(1000);
      leftMotors.move(0);
      rightMotors.move(0);
      intake.set_mode(Intake::Mode::Reverse);
      delay(100);
      intake.set_mode(Intake::Mode::Off);
      }



      //delay(1000);
      //leftMotors.move_absolute(10, 50);
      //rightMotors.move_absolute(10,50);
     // delay(1000);
     // rightMotors.move_absolute(20,100);
     

}

