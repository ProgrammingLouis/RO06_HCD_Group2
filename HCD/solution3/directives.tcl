############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "HCD_filter_hw/inner_loop"
set_directive_pipeline -II 1 "HCD_filter_hw/x_pixels_loop"
set_directive_unroll -factor 3 "HCD_filter_hw/y_window_loop"
set_directive_unroll -factor 3 "HCD_filter_hw/x_window_loop"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/x_Ix_read_loop"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/x_Iy_read_loop"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/x_conv_loop"
