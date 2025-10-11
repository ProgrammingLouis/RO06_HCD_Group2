############################################################
## This file has been created by Noel Jumin
############################################################
# open_project HCD_ENSTA_Test
# set_top HLS_accel
# add_files sources/HCD_accel.cpp
# add_files -tb sources/HCD.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
# add_files -tb sources/HCD_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
# open_solution "solution1"
# set_part {xc7z020-clg484-1}
# create_clock -period 10 -name default
# source "./HCD_ENSTA_Test/solution1/directives.tcl"
# csim_design
# csynth_design
# cosim_design
# export_design -format ip_catalog


open_project -reset HCD_ENSTA_Test
set_top HLS_accel
add_files sources/HCD_accel.cpp
add_files -tb sources/HCD.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb sources/HCD_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
 
# Solution 0 : nothing
open_solution -reset "sol_nothing"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

csim_design
csynth_design
close_solution


# Solution 1 : pipeline II=1
open_solution -reset "sol_pipeline_II_1"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions to help pipelining
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

csim_design
csynth_design
close_solution

# Solution 2 : pipeline II=1, flatten
open_solution -reset "sol_pipeline_II_1_flatten"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions to help pipelining
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## unroll loops to help pipelining
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

csim_design
csynth_design
close_solution

# Solution 3 : pipeline II=1, flatten, unroll factor 4
open_solution -reset "sol_pipeline_II_1_flatten_unroll_4"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 4
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

csim_design
csynth_design
close_solution

# Solution 4 : pipeline II=1, flatten, unroll factor 16
open_solution -reset "sol_pipeline_II_1_flatten_unroll_16"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 16
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

csim_design
csynth_design
close_solution

# Solution 5 : pipeline II=2, flatten, unroll factor 16
open_solution -reset "sol_pipeline_II_2_flatten_unroll_16"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=2
set_directive_pipeline -II 2 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 2 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 2 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 16
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 16 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

csim_design
csynth_design
close_solution

# Solution 6 : pipeline II=1, flatten, unroll factor 32
open_solution -reset "sol_pipeline_II_1_flatten_unroll_32"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 32
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

csim_design
csynth_design
close_solution

# Solution 7 : pipeline II=1, flatten, unroll factor 32, array partition dimension 1 complete
open_solution -reset "sol_pipeline_II_1_flatten_unroll_32_array_partition_dim_1_complete"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 32
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

## array partition dim 1 complete
set_directive_array_partition -type complete -dim 1 "HCD_filter_hw" S_x2
set_directive_array_partition -type complete -dim 1 "HCD_filter_hw" S_y2
set_directive_array_partition -type complete -dim 1 "HCD_filter_hw" S_xy
set_directive_array_partition -type complete -dim 1 "wrapped_HCD_filter_hw" I_x
set_directive_array_partition -type complete -dim 1 "wrapped_HCD_filter_hw" I_y
set_directive_array_partition -type complete -dim 1 "wrapped_HCD_filter_hw" output_img

csim_design
csynth_design
close_solution

# Solution 8 : pipeline II=1, flatten, unroll factor 32, array partition dimension 2 complete
open_solution -reset "sol_pipeline_II_1_flatten_unroll_32_array_partition_dim_2_complete"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 32
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

## array partition dim 2 complete
set_directive_array_partition -type complete -dim 2 "HCD_filter_hw" S_x2
set_directive_array_partition -type complete -dim 2 "HCD_filter_hw" S_y2
set_directive_array_partition -type complete -dim 2 "HCD_filter_hw" S_xy
set_directive_array_partition -type complete -dim 2 "wrapped_HCD_filter_hw" I_x
set_directive_array_partition -type complete -dim 2 "wrapped_HCD_filter_hw" I_y
set_directive_array_partition -type complete -dim 2 "wrapped_HCD_filter_hw" output_img

csim_design
csynth_design
close_solution

# Solution 9 : pipeline II=1, flatten, unroll factor 32, array partition dimension 1 cyclic
open_solution -reset "sol_pipeline_II_1_flatten_unroll_32_array_partition_dim_1_cyclic"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 32
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

## array partition dim 1 cyclic
set_directive_array_partition -type cyclic -dim 1 "HCD_filter_hw" S_x2
set_directive_array_partition -type cyclic -dim 1 "HCD_filter_hw" S_y2
set_directive_array_partition -type cyclic -dim 1 "HCD_filter_hw" S_xy
set_directive_array_partition -type cyclic -dim 1 "wrapped_HCD_filter_hw" I_x
set_directive_array_partition -type cyclic -dim 1 "wrapped_HCD_filter_hw" I_y
set_directive_array_partition -type cyclic -dim 1 "wrapped_HCD_filter_hw" output_img

csim_design
csynth_design
close_solution

# Solution 10 : pipeline II=1, flatten, unroll factor 32, array partition dimension 2 cyclic
open_solution -reset "sol_pipeline_II_1_flatten_unroll_32_array_partition_dim_2_cyclic"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default

# HLS Directives
## inline all functions 
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"

## pipeline loops with II=1
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"

## Flatten loops
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"

## unroll loops at factor 32
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 32 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"

## array partition dim 2 cyclic
set_directive_array_partition -type cyclic -dim 2 "HCD_filter_hw" S_x2
set_directive_array_partition -type cyclic -dim 2 "HCD_filter_hw" S_y2
set_directive_array_partition -type cyclic -dim 2 "HCD_filter_hw" S_xy
set_directive_array_partition -type cyclic -dim 2 "wrapped_HCD_filter_hw" I_x
set_directive_array_partition -type cyclic -dim 2 "wrapped_HCD_filter_hw" I_y
set_directive_array_partition -type cyclic -dim 2 "wrapped_HCD_filter_hw" output_img

csim_design
csynth_design
close_solution

exit

# Pour lancer le script, se placer dans Projet_HCD_Test et taper : vivado_hls -f HCD_ENSTA_Test/script.tcl
# Pour voir solution aller dans HCD_ENSTA_Test/sol_xxx/syn/report/HLS_accel_csynth.rpt

# Laisser le pipeline minimum (II=1) 
# Plus on augmente le facteur d'unroll, plus on augmente le nombre de LUT utilisées
# Laisser inline et flatten pour aider le compilateur a faire du pipelining

# A TESTER
# Axis pendant cosim 