% teo_basic_m controller.

% uncomment the next two lines if you want to use the MATLAB desktop to interact with the controller:
%desktop;
%keyboard;

TIME_STEP = 64;

%  motor = wb_robot_get_device('motor');

% main loop:
% perform simulation steps of TIME_STEP milliseconds
% and leave the loop when Webots signals the termination
%
while wb_robot_step(TIME_STEP) ~= -1

  %  wb_motor_set_postion(motor, 10.0);

end
