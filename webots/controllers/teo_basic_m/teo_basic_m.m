% teo_basic_m controller.

% uncomment the next two lines if you want to use the MATLAB desktop to interact with the controller:
%desktop;
%keyboard;

% list devices of robot.
n_devices = wb_robot_get_number_of_devices();
wb_console_print(int2str(n_devices), WB_STDOUT); % 56

r_shoulder_pitch = wb_robot_get_device('r_shoulder_pitch');

TIME_STEP = 64;

% main loop:
% - perform simulation steps until Webots is stopping the controller
while wb_robot_step(TIME_STEP) ~= -1

  wb_motor_set_position(r_shoulder_pitch, 45.0*3.14/180.0);

end
