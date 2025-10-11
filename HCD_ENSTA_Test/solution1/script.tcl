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
open_solution "solution1"
set_part {xc7k70tfbv676-1}
create_clock -period 2 -name default
source "./HCD_ENSTA_Test/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
