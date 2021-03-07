% teo_basic_m controller.

% uncomment the next two lines if you want to use the MATLAB desktop to interact with the controller:
%desktop;
%keyboard;

% list devices of robot.
n_devices = wb_robot_get_number_of_devices();
wb_console_print(int2str(n_devices), WB_STDOUT); % 56

for i = 1:n_devices
  device_tmp = wb_robot_get_device_by_index(i);
  wb_console_print(wb_device_get_name(device_tmp), WB_STDOUT);
end

r_shoulder_pitch = wb_robot_get_device('r_shoulder_pitch');

% get the time step of the current world.
timestep = wb_robot_get_basic_time_step();
wb_console_print(int2str(timestep), WB_STDOUT); % 32

% Main loop:
% - perform simulation steps until Webots is stopping the controller
while wb_robot_step(timestep) ~= -1
  wb_motor_set_position(r_shoulder_pitch, 45.0*3.14/180.0);
end
