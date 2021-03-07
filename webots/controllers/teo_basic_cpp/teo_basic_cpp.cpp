// teo_basic_cpp controller.

#include <iostream>

#include <webots/Robot.hpp>

int main(int argc, char **argv)
{
  // create the Robot instance.
  webots::Robot *robot = new webots::Robot();

  // list devices of robot.
  int n_devices = robot->getNumberOfDevices();
  std::cout << n_devices << std::endl; // 56

  // get the time step of the current world.
  int timeStep = (int)robot->getBasicTimeStep();
  std::cout << timeStep << std::endl; // 32

  // You should insert a getDevice-like function in order to get the
  // instance of a device of the robot. Something like:
  //  Motor *motor = robot->getMotor("motorname");
  //  DistanceSensor *ds = robot->getDistanceSensor("dsname");
  //  ds->enable(timeStep);

  // Main loop:
  // - perform simulation steps until Webots is stopping the controller
  while (robot->step(timeStep) != -1)
  {
    // Read the sensors:
    // Enter here functions to read sensor data, like:
    //  double val = ds->getValue();

    // Process sensor data here.

    // Enter here functions to send actuator commands, like:
    //  motor->setPosition(10.0);
  };

  // Enter here exit cleanup code.

  delete robot;
  return 0;
}
