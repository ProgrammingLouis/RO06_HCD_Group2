############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_inline "HCD_filter_hw"
set_directive_inline "pop_stream"
set_directive_inline "push_stream"
set_directive_inline "wrapped_HCD_filter_hw"
set_directive_pipeline -II 1 "HCD_filter_hw/HCD_filter_hw_label0"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_pipeline -II 1 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
set_directive_pipeline -II 1 "apply_kernel_single_block"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label0"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label2"
set_directive_loop_flatten "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label3"
set_directive_loop_flatten "HCD_filter_hw/HCD_filter_hw_label4"
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label1"
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label5"
set_directive_unroll -factor 4 "wrapped_HCD_filter_hw/wrapped_HCD_filter_hw_label6"
