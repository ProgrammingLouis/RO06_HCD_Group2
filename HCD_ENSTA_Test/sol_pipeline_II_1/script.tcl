############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HCD_ENSTA_Test
set_top HLS_accel
add_files sources/HCD_accel.cpp
add_files -tb sources/HCD_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb sources/HCD.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "sol_pipeline_II_1"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
source "./HCD_ENSTA_Test/sol_pipeline_II_1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
