"""teo_basic_py controller."""

from controller import Robot

# create the Robot instance.
robot = Robot()

# list devices of robot.
n_devices = robot.getNumberOfDevices()
print(n_devices) # 56

for i in range(n_devices):
    print(robot.getDeviceByIndex(i).getName())

r_shoulder_pitch = robot.getDevice("r_shoulder_pitch")

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())
print(timestep) # 32

# Main loop:
# - perform simulation steps until Webots is stopping the controller
while robot.step(timestep) != -1:
    r_shoulder_pitch.setPosition(45.0*3.14/180.0)
