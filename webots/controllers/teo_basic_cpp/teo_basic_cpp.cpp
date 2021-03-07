// teo_basic_cpp controller.

#include <webots/Robot.hpp>
#include <webots/Device.hpp>
#include <webots/Motor.hpp>

#include <iostream>

int main(int argc, char **argv)
{
  // create the Robot instance.
  webots::Robot *robot = new webots::Robot();

  // list devices of robot.
  int n_devices = robot->getNumberOfDevices();
  std::cout << n_devices << std::endl; // 56

  for(int i=0; i<n_devices; i++)
    std::cout << robot->getDeviceByIndex(i)->getName() << std::endl;

  webots::Motor* r_shoulder_pitch = robot->getMotor("r_shoulder_pitch");

  // get the time step of the current world.
  int timeStep = (int)robot->getBasicTimeStep();
  std::cout << timeStep << std::endl; // 32

  // Main loop:
  // - perform simulation steps until Webots is stopping the controller
  while (robot->step(timeStep) != -1)
  {
    r_shoulder_pitch->setPosition(45.0*3.14/180.0);
  };

  // Exit cleanup code here.
  delete robot;
  return 0;
}
