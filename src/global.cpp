#include "vex.h"
#include "global.h"

// Function to initialize the bot.
void init()
{
  vexcodeInit();
}

// Function to stop all drivetrain motors.
void stopDrivetrain()
{
  // Individually stop every drivetrain motor.
  rightMotor.stop();
  leftMotor.stop();
}