open_project -reset prj
set_top func
set cflags "-std=c++17"
add_files -cflags $cflags kernel.cpp
open_solution -flow_target vitis solution
set_part xcu200-fsgd2104-2-e
create_clock -period 400MHz -name default
set_clock_uncertainty 27.000000%
config_schedule -effort high -relax_ii_for_timing=0
csynth_design
close_project
exit
