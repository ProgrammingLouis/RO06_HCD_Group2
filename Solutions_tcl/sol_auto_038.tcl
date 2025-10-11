############################################################
## Script généré automatiquement pour l'optimisation HLS
############################################################

open_project -reset HCD_ENSTA_Test
set_top HLS_accel

add_files sources/HCD_accel.cpp
add_files -tb sources/HCD.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb sources/HCD_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"

open_solution -reset "sol_auto_038"
set_part {xc7z020-clg484-1}
create_clock -period 2 -name default

# HLS Directives

## inline all functions
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream" 
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=2
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label4"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 2 "HCD_filter_hw/HCD_filter_hw_label2"
set_directive_pipeline -II 2 "HCD_filter_hw/HCD_filter_hw_label3"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label4"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label2"

## unroll loops at factor 2
set_directive_unroll -factor 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_unroll -factor 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 2 "HCD_filter_hw/HCD_filter_hw_label1"
set_directive_unroll -factor 2 "HCD_filter_hw/HCD_filter_hw_label3"

## Set interface mode axis
set_directive_interface -mode s_axilite "apply_kernel_single_block"
set_directive_interface -mode s_axilite "HCD_filter_hw"
set_directive_interface -mode s_axilite "pop_stream"
set_directive_interface -mode s_axilite "push_stream"
set_directive_interface -mode s_axilite "wrapped_HCD_filter_hw"

## Enable dependence false
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label4"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_dependence -type inter -dependent false "HCD_filter_hw/HCD_filter_hw_label2"
set_directive_dependence -type inter -dependent false "HCD_filter_hw/HCD_filter_hw_label3"
set_directive_dependence -type inter -dependent false "apply_kernel_single_block"
set_directive_dependence -type inter -dependent false "HCD_filter_hw"
set_directive_dependence -type inter -dependent false "pop_stream"
set_directive_dependence -type inter -dependent false "push_stream"
set_directive_dependence -type inter -dependent false "wrapped_HCD_filter_hw"

## csim_design
csynth_design
close_solution

exit
